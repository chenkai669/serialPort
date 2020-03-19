#include "mypushbutton.h"
#include<QPixmap>
#include <QBitmap>

myPushButton::myPushButton(QWidget *parent) : QPushButton(parent)
{
    QPixmap pixmap;
    pixmap.load(":/Image/anniu1.jpg");
    resize(pixmap.size());
    //设置按钮有效区域
    setMask(QRegion(14,2,22,22,QRegion::Ellipse));
    setIcon(QIcon(":/Image/anniu2.jpg"));

}

