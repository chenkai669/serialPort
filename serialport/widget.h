#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include<QSerialPort>
#include<QSerialPortInfo>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE


struct Quaternion
{
    double w, x, y, z;
};


class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

public:
    double getimu();
private slots:
    void on_btn_clear_clicked();
    void on_btn_send_clicked();
    void on_btn_open_clicked();
    void serialPort_readyRead();
    void time_update();
    void loop_send(int index);

private:
    void analysis_yaw(const QString buff);
    void caclyaw(const Quaternion q);

private:
    Ui::Widget *ui;
    QSerialPort *serial;
    QByteArray buf;
    QTimer *time1;
    QTimer *time2;
    double yaw;

};
#endif // WIDGET_H
