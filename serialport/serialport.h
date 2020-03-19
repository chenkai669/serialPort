#ifndef SERIALPORT_H
#define SERIALPORT_H

#include <QWidget>
#include<QSerialPort>
#include<QSerialPortInfo>


//积分计算
template<typename Tfunc, typename Tans = double, typename Tnumber = unsigned long long>
Tans integral(Tfunc func, Tans left, Tans right, Tnumber numbers)
{
    if (right<left)
    {
        Tans temp = left; left = right, right = temp;
    }
    Tans unit_len = (right - left) / Tans(numbers);	Tans ans(0);
    for (; left <= right; left += unit_len)
    {
        ans += func(left)*unit_len;
    }
    return ans;
}



class serialPort : public QWidget
{
    Q_OBJECT
public:
    explicit serialPort(QWidget *parent = nullptr);


public:
signals:

public slots:
};

#endif // SERIALPORT_H
