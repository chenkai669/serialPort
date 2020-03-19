#include "widget.h"
#include "ui_widget.h"
#include<QStringList>
#include<QMessageBox>
#include<QDebug>
#include<QTimer>
#include<cmath>
#include<QPalette>


Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    setWindowIcon(QIcon(":/Image/2222.jpg"));
    setFixedSize(700,600);
    {
        QStringList m_list1 =(QStringList()<<"COM1"<<"COM2"<<"COM3"<<"COM4"<<"COM5"<<"COM6"<<"COM7"<<"COM8");
        ui->cb_serial->addItems(m_list1);
    }

    {
        QStringList m_list2 =(QStringList()<<"1200"<<"4800"<<"9600"<<"19200"<<"38400"<<"57600"<<"115200");
        ui->cb_baud->addItems(m_list2);
    }

    {
        QStringList m_list3 =(QStringList()<<"8"<<"7"<<"6"<<"5");
        ui->cb_data->addItems(m_list3);

    }

    {
        QStringList m_list4 =(QStringList()<<"1"<<"2");
        ui->cb_stop->addItems(m_list4);

    }
    {
        QStringList m_list =(QStringList()<<"0"<<"1"<<"2");
        ui->cb_check->addItems(m_list);
    }
    serial = new QSerialPort(this);
    ui->btn_send->setEnabled(false);
    time1 = new QTimer(this);
    time2 = new QTimer(this);

    QPalette pal = this->palette();
    pal.setColor(QPalette::Background,Qt::gray);
    this->setAutoFillBackground(true);
    this->setPalette(pal);
    this->show();
    //setStyleSheet(QString::fromUtf8 ("background-color:gray"));
    ui->te_recv->setStyleSheet(QString::fromUtf8 ("background-color:lightGray"));
    ui->te_send->setStyleSheet(QString::fromUtf8 ("background-color:lightGray"));
    ui->te_recv->setReadOnly(true);
    ui->ck_send->setEnabled(false);

    ui->btn_s->setMask(QRegion(0,2,22,22,QRegion::Ellipse));
    ui->btn_s->setStyleSheet("background: rgb(250,0,0)");


     //ui->rb_check->setChecked(true);
     //ui->rb_check->setCheckable(false);



    connect(serial,&QSerialPort::readyRead,this,&Widget::serialPort_readyRead);
    connect(time1,&QTimer::timeout,this,&Widget::time_update);
    connect(time2,&QTimer::timeout,this,&Widget::on_btn_send_clicked);
    connect(ui->ck_send,&QCheckBox::stateChanged,this,&Widget::loop_send);


}

Widget::~Widget()
{
    delete ui;
}

void Widget::serialPort_readyRead()
{
    //从接收缓冲区中读取数
    time1->start(30);
    buf.append(serial->readAll());
}

void Widget::on_btn_clear_clicked()
{
    ui->te_recv->clear();
}

void Widget::on_btn_send_clicked()
{
    if(ui->te_send->toPlainText().length() >0)
    {
        QByteArray tmp = QByteArray::fromHex(ui->te_send->toPlainText().toLatin1());
        if(tmp.size()<=0)
            return;
        int ret = serial->write(tmp);
        if(ret == -1)
        {
            QMessageBox::about(NULL, "提示", "写入失败");
            return;
        }
        ui->te_recv->append(QString("发送报文:%1").arg(ui->te_send->toPlainText()));
    }


}

void Widget::on_btn_open_clicked()
{
    if(ui->btn_open->text() ==QString("Open") )
    {
        //设置串口名
        serial->setPortName(ui->cb_serial->currentText());
        //设置波特率
        serial->setBaudRate(ui->cb_baud->currentText().toInt());
        //设置数据位数
        switch(ui->cb_data->currentIndex())
        {
        case 8: serial->setDataBits(QSerialPort::Data8); break;
        default: break;
        }
        //设置奇偶校验
        switch(ui->cb_check->currentIndex())
        {
        //无检验
        case 0: serial->setParity(QSerialPort::NoParity); break;
        default: break;
        }
        //设置停止位
        switch(ui->cb_stop->currentIndex())
        {
        case 1: serial->setStopBits(QSerialPort::OneStop); break;
        case 2: serial->setStopBits(QSerialPort::TwoStop); break;
        default: break;
        }
        //设置流控制
        serial->setFlowControl(QSerialPort::NoFlowControl);
        //打开串口
        if(!serial->open(QIODevice::ReadWrite))
        {
            QMessageBox::about(NULL, "提示", "无法打开串口！");
            return;
        }
        //下拉菜单控件失能
        ui->cb_serial->setEnabled(false);
        ui->cb_baud->setEnabled(false);
        ui->cb_data->setEnabled(false);
        ui->cb_check->setEnabled(false);
        ui->cb_stop->setEnabled(false);
        ui->btn_open->setText(QString("close"));
        //发送按键使能
        ui->btn_send->setEnabled(true);
        ui->ck_send->setEnabled(true);
        ui->btn_s->setStyleSheet("background: rgb(0,255,0)");
    }
    else
    {
        //关闭串口
        serial->close();
        //下拉菜单控件失能
        ui->cb_serial->setEnabled(true);
        ui->cb_baud->setEnabled(true);
        ui->cb_data->setEnabled(true);
        ui->cb_check->setEnabled(true);
        ui->cb_stop->setEnabled(true);
        ui->btn_open->setText(QString("Open"));
        //发送按键使能
        ui->btn_send->setEnabled(false);
        ui->ck_send->setEnabled(false);
        if(time1->isActive())
        {
            time1->stop();
        }
        if(time2->isActive())
        {
            time2->stop();
        }
        ui->btn_s->setStyleSheet("background: rgb(250,0,0)");
    }
}

void Widget::time_update()
{
    time1->stop();
    buf = buf.toHex();
    QString str(buf);
    //通过命令字解析报文
    switch (str.mid(6,2).toInt())
    {
    case 57:
        analysis_yaw(str);break;
    case 81:
        //analysis_yaw(str);
        break;
    case 82:
        //analysis_yaw(str);
        break;
    case 54:
        //analysis_yaw(str);
        break;
    case 50:
        //analysis_yaw(str);
        break;
    default:
        break;
    }
    ui->te_recv->append(QString("接收报文:%1").arg(QString(buf)));
    buf.clear();

}

void Widget::caclyaw(const Quaternion q)
{
    // yaw (z-axis rotation)
    double siny_cosp = 2 * (q.w * q.z + q.x * q.y);
    double cosy_cosp = 1 - 2 * (q.y * q.y + q.z * q.z);
    yaw = std::atan2(siny_cosp, cosy_cosp)*180/3.14;
    if(yaw<0)
        yaw+=360;
    ui->te_recv->append(QString("计算角度:%1").arg(QString::number(yaw)));
}

void Widget::analysis_yaw(const QString buff)
{
    QString str = buff;
    Quaternion tmp;
    if(str.length() == 42)//验证字符长度
    {
        if(str.mid(0,2) != "77")//验证协议头
        {
            qDebug()<<"error";
            return;
        }
        //解析
        if(str.mid(8,1).toInt() == 0)
        {
            tmp.w= str.mid(9,7).toDouble()/1000000;
        }
        else
        {
            tmp.w= -str.mid(9,7).toDouble()/1000000;
        }
        if(str.mid(16,1).toInt() == 0)
        {
            tmp.x= str.mid(17,7).toDouble()/1000000;
        }
        else
        {
            tmp.x= -str.mid(17,7).toDouble()/1000000;
        }

        if(str.mid(24,1).toInt() == 0)
        {
            tmp.y= str.mid(25,7).toDouble()/1000000;
        }
        else
        {
            tmp.y= -str.mid(25,7).toDouble()/1000000;
        }

        if(str.mid(32,1).toInt() == 0)
        {
            tmp.z = str.mid(33,7).toDouble()/1000000;
        }
        else
        {
            tmp.z= -str.mid(33,7).toDouble()/1000000;
        }
        //计算yaw
        caclyaw(tmp);
    }
}

double Widget::getimu()
{
    return yaw;
}

void Widget::loop_send(int index)
{
    if (index == Qt::Checked) // "选中"
    {
        time2->start(500);
    }
    else
    {
        time2->stop();
    }

}
