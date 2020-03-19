#ifndef MYTEXTEDIT_H
#define MYTEXTEDIT_H

#include <QObject>
#include<QTextEdit>

class myTextEdit : public QTextEdit
{
    Q_OBJECT
public:
    explicit myTextEdit(QWidget *parent = nullptr);
    void mousePressEvent(QMouseEvent *e);
    void customContextMenuRequested();
    //bool event(QEvent *e);
signals:

public slots:
    void onTaskBoxContextMenuEvent();
};

#endif // MYTEXTEDIT_H
