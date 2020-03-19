#include "mytextedit.h"
#include<QMouseEvent>
#include<QDebug>
#include<QMenu>
#include<QEvent>

myTextEdit::myTextEdit(QWidget *parent) : QTextEdit(parent)
{
    setAttribute(Qt::WA_TransparentForMouseEvents, false);
}

void myTextEdit::mousePressEvent(QMouseEvent *ev)
{
    if(ev->button() == Qt::RightButton)
    {
        customContextMenuRequested();
    }
    else
    {
        //未处理的需要提交到事件循环
        myTextEdit::mouseMoveEvent(ev);
    }

}

//bool myTextEdit::event(QEvent *e)
//{
//    if(e->type() == QEvent::MouseButtonPress == Qt::RightButton)
//    {
//       customContextMenuRequested();
//    }
//    return myTextEdit::event(e);
//}

void myTextEdit::customContextMenuRequested()
{
    //创建菜单对象
    QMenu *pMenu = new QMenu(this);
    QAction *pCom1 = new QAction(tr("77 04 00 01 05"), this);
    //pMenu->addSeparator();
    QAction *pCom2 = new QAction(tr("77 04 00 02 06"), this);
    QAction *pCom3 = new QAction(tr("77 04 00 04 08"), this);
    QAction *pCom4 = new QAction(tr("77 05 00 0B 02 12"), this);
    QAction *pCom5 = new QAction(tr("77 04 00 01 23"), this);
    QAction *pCom6 = new QAction(tr("77 05 00 0C 00 01"), this);
    QAction *pCom7 = new QAction(tr("77 04 00 54 58"), this);
    QAction *pCom8 = new QAction(tr("77 04 00 50 54"), this);
    QAction *pCom9 = new QAction(tr("77 04 00 0A 0E"), this);
    QAction *pCom10 = new QAction(tr("77 04 00 57 5B"), this);
    QAction *pCom11 = new QAction(tr("77 04 00 59 5D"), this);
    QAction *pCom12 = new QAction(tr("77 05 00 56 00 5B"), this);

    //设置行编号
//    pCom1->setData(1);
//    pCom2->setData(2);
//    pCom3 ->setData(3);
//    pCom4->setData(4);
    //把QAction对象添加到菜单上
    pMenu->addAction(pCom1);
    pMenu->addAction(pCom2);
    pMenu->addAction(pCom3);
    pMenu->addAction(pCom4);
    pMenu->addAction(pCom5);
    pMenu->addAction(pCom6);
    pMenu->addAction(pCom7);
    pMenu->addAction(pCom8);
    pMenu->addAction(pCom9);
    pMenu->addAction(pCom10);
    pMenu->addAction(pCom11);
    pMenu->addAction(pCom12);

    connect(pCom1, SIGNAL(triggered()), this, SLOT(onTaskBoxContextMenuEvent()));
    connect(pCom2, SIGNAL(triggered()), this, SLOT(onTaskBoxContextMenuEvent()));
    connect(pCom3, SIGNAL(triggered()), this, SLOT(onTaskBoxContextMenuEvent()));
    connect(pCom4, SIGNAL(triggered()), this, SLOT(onTaskBoxContextMenuEvent()));
    connect(pCom5, SIGNAL(triggered()), this, SLOT(onTaskBoxContextMenuEvent()));
    connect(pCom6, SIGNAL(triggered()), this, SLOT(onTaskBoxContextMenuEvent()));
    connect(pCom7, SIGNAL(triggered()), this, SLOT(onTaskBoxContextMenuEvent()));
    connect(pCom8, SIGNAL(triggered()), this, SLOT(onTaskBoxContextMenuEvent()));
    connect(pCom9, SIGNAL(triggered()), this, SLOT(onTaskBoxContextMenuEvent()));
    connect(pCom10, SIGNAL(triggered()), this, SLOT(onTaskBoxContextMenuEvent()));
    connect(pCom11, SIGNAL(triggered()), this, SLOT(onTaskBoxContextMenuEvent()));
    connect(pCom12, SIGNAL(triggered()), this, SLOT(onTaskBoxContextMenuEvent()));
    //在鼠标右键点击的地方显示菜单
    pMenu->exec(cursor().pos());
    //释放内存
    QList<QAction*> list = pMenu->actions();
    foreach (QAction* pAction, list) delete pAction;
    delete pMenu;

}

void myTextEdit::onTaskBoxContextMenuEvent()
{
    QAction *pEven = qobject_cast<QAction *>(this->sender());//this->sender()就是发信号者 QAction
    QString iType = pEven->text();
    setText(iType);
}

