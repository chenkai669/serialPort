/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <mytextedit.h>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGridLayout *gridLayout_5;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_2;
    QTextEdit *te_recv;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_6;
    myTextEdit *te_send;
    QPushButton *btn_send;
    QGroupBox *groupBox_5;
    QGridLayout *gridLayout_4;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *btn_clear;
    QSpacerItem *horizontalSpacer;
    QCheckBox *ck_send;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_3;
    QWidget *widget_6;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QComboBox *cb_serial;
    QSpacerItem *verticalSpacer_5;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QComboBox *cb_baud;
    QSpacerItem *verticalSpacer_6;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_5;
    QComboBox *cb_data;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_6;
    QComboBox *cb_check;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_7;
    QComboBox *cb_stop;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_6;
    QSpacerItem *verticalSpacer_7;
    QRadioButton *rb_check;
    QLabel *label;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *btn_open;
    QPushButton *btn_s;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(752, 651);
        gridLayout_5 = new QGridLayout(Widget);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        groupBox_3 = new QGroupBox(Widget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        gridLayout_2 = new QGridLayout(groupBox_3);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        te_recv = new QTextEdit(groupBox_3);
        te_recv->setObjectName(QString::fromUtf8("te_recv"));

        gridLayout_2->addWidget(te_recv, 0, 0, 1, 1);


        verticalLayout_3->addWidget(groupBox_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        groupBox_4 = new QGroupBox(Widget);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        gridLayout = new QGridLayout(groupBox_4);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(0);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        te_send = new myTextEdit(groupBox_4);
        te_send->setObjectName(QString::fromUtf8("te_send"));

        horizontalLayout_6->addWidget(te_send);

        btn_send = new QPushButton(groupBox_4);
        btn_send->setObjectName(QString::fromUtf8("btn_send"));

        horizontalLayout_6->addWidget(btn_send);

        horizontalLayout_6->setStretch(0, 7);
        horizontalLayout_6->setStretch(1, 1);

        gridLayout->addLayout(horizontalLayout_6, 0, 0, 1, 1);


        verticalLayout_2->addWidget(groupBox_4);

        groupBox_5 = new QGroupBox(Widget);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        gridLayout_4 = new QGridLayout(groupBox_5);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        btn_clear = new QPushButton(groupBox_5);
        btn_clear->setObjectName(QString::fromUtf8("btn_clear"));

        horizontalLayout_7->addWidget(btn_clear);

        horizontalSpacer = new QSpacerItem(149, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer);

        ck_send = new QCheckBox(groupBox_5);
        ck_send->setObjectName(QString::fromUtf8("ck_send"));

        horizontalLayout_7->addWidget(ck_send);


        gridLayout_4->addLayout(horizontalLayout_7, 0, 0, 1, 1);


        verticalLayout_2->addWidget(groupBox_5);


        verticalLayout_3->addLayout(verticalLayout_2);

        verticalLayout_3->setStretch(0, 15);
        verticalLayout_3->setStretch(1, 1);

        gridLayout_5->addLayout(verticalLayout_3, 0, 0, 1, 1);

        groupBox = new QGroupBox(Widget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_3 = new QGridLayout(groupBox);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        widget_6 = new QWidget(groupBox);
        widget_6->setObjectName(QString::fromUtf8("widget_6"));
        verticalLayout = new QVBoxLayout(widget_6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 11, 11);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_3 = new QLabel(widget_6);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout->addWidget(label_3);

        cb_serial = new QComboBox(widget_6);
        cb_serial->setObjectName(QString::fromUtf8("cb_serial"));

        horizontalLayout->addWidget(cb_serial);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 3);

        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer_5 = new QSpacerItem(28, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_5);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_4 = new QLabel(widget_6);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_2->addWidget(label_4);

        cb_baud = new QComboBox(widget_6);
        cb_baud->setObjectName(QString::fromUtf8("cb_baud"));

        horizontalLayout_2->addWidget(cb_baud);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 3);

        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer_6 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_6);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_5 = new QLabel(widget_6);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_3->addWidget(label_5);

        cb_data = new QComboBox(widget_6);
        cb_data->setObjectName(QString::fromUtf8("cb_data"));

        horizontalLayout_3->addWidget(cb_data);

        horizontalLayout_3->setStretch(0, 1);
        horizontalLayout_3->setStretch(1, 2);

        verticalLayout->addLayout(horizontalLayout_3);

        verticalSpacer_4 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_6 = new QLabel(widget_6);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_4->addWidget(label_6);

        cb_check = new QComboBox(widget_6);
        cb_check->setObjectName(QString::fromUtf8("cb_check"));

        horizontalLayout_4->addWidget(cb_check);

        horizontalLayout_4->setStretch(0, 1);
        horizontalLayout_4->setStretch(1, 2);

        verticalLayout->addLayout(horizontalLayout_4);

        verticalSpacer_3 = new QSpacerItem(20, 27, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_7 = new QLabel(widget_6);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_5->addWidget(label_7);

        cb_stop = new QComboBox(widget_6);
        cb_stop->setObjectName(QString::fromUtf8("cb_stop"));

        horizontalLayout_5->addWidget(cb_stop);

        horizontalLayout_5->setStretch(0, 1);
        horizontalLayout_5->setStretch(1, 2);

        verticalLayout->addLayout(horizontalLayout_5);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(2, 1);
        verticalLayout->setStretch(4, 1);
        verticalLayout->setStretch(6, 1);
        verticalLayout->setStretch(8, 1);

        gridLayout_3->addWidget(widget_6, 0, 0, 1, 1);

        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_6 = new QGridLayout(groupBox_2);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_6->addItem(verticalSpacer_7, 3, 0, 1, 1);

        rb_check = new QRadioButton(groupBox_2);
        rb_check->setObjectName(QString::fromUtf8("rb_check"));
        rb_check->setCheckable(true);
        rb_check->setChecked(true);
        rb_check->setAutoRepeat(false);
        rb_check->setAutoExclusive(false);

        gridLayout_6->addWidget(rb_check, 1, 0, 1, 1);

        label = new QLabel(groupBox_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(label, 2, 0, 1, 1);


        gridLayout_3->addWidget(groupBox_2, 1, 0, 1, 1);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        btn_open = new QPushButton(groupBox);
        btn_open->setObjectName(QString::fromUtf8("btn_open"));

        horizontalLayout_8->addWidget(btn_open);

        btn_s = new QPushButton(groupBox);
        btn_s->setObjectName(QString::fromUtf8("btn_s"));
        btn_s->setCheckable(false);
        btn_s->setAutoDefault(false);
        btn_s->setFlat(false);

        horizontalLayout_8->addWidget(btn_s);


        gridLayout_3->addLayout(horizontalLayout_8, 3, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_3->addItem(verticalSpacer, 2, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_2, 4, 0, 1, 1);

        gridLayout_3->setRowStretch(0, 2);
        gridLayout_3->setRowStretch(1, 1);
        gridLayout_3->setRowStretch(2, 1);

        gridLayout_5->addWidget(groupBox, 0, 1, 1, 1);

        gridLayout_5->setColumnStretch(0, 12);
        gridLayout_5->setColumnStretch(1, 1);

        retranslateUi(Widget);

        btn_s->setDefault(false);


        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "\344\270\262\345\217\243\345\267\245\345\205\267", nullptr));
        groupBox_3->setTitle(QApplication::translate("Widget", "\346\216\245\346\224\266\347\252\227\345\217\243", nullptr));
        groupBox_4->setTitle(QApplication::translate("Widget", "\345\217\221\351\200\201\347\252\227\345\217\243", nullptr));
        btn_send->setText(QApplication::translate("Widget", "\345\217\221\351\200\201", nullptr));
        groupBox_5->setTitle(QApplication::translate("Widget", "\345\212\237\350\203\275\345\214\272", nullptr));
        btn_clear->setText(QApplication::translate("Widget", "\346\270\205\347\251\272\346\230\276\347\244\272", nullptr));
        ck_send->setText(QApplication::translate("Widget", "\345\276\252\347\216\257\345\217\221\351\200\201", nullptr));
        groupBox->setTitle(QApplication::translate("Widget", "\344\270\262\345\217\243\345\217\202\346\225\260", nullptr));
        label_3->setText(QApplication::translate("Widget", "\344\270\262\345\217\243\345\217\267:", nullptr));
        label_4->setText(QApplication::translate("Widget", "\346\263\242\347\211\271\347\216\207:", nullptr));
        label_5->setText(QApplication::translate("Widget", "\346\225\260\346\215\256\344\275\215:", nullptr));
        label_6->setText(QApplication::translate("Widget", "\346\240\241\351\252\214\344\275\215:", nullptr));
        label_7->setText(QApplication::translate("Widget", "\345\201\234\346\255\242\344\275\215:", nullptr));
        groupBox_2->setTitle(QApplication::translate("Widget", "\346\240\241\351\252\214\347\240\201", nullptr));
        rb_check->setText(QApplication::translate("Widget", "\346\227\240\346\240\241\351\252\214", nullptr));
        label->setText(QApplication::translate("Widget", "\351\273\230\350\256\244\346\227\240\346\240\241\351\252\214", nullptr));
        btn_open->setText(QApplication::translate("Widget", "Open", nullptr));
        btn_s->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
