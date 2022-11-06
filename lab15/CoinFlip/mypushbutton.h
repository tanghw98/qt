#ifndef MYPUSHBUTTON_H
#define MYPUSHBUTTON_H

#include <QPushButton>

class MyPushButton : public QPushButton
{
    Q_OBJECT
public:
    //explicit MyPushButton(QWidget *parent = nullptr);
    MyPushButton(QString normalImg,QString pressImg="");//对默认构造函数进行重载
    QString normalImgPath; //默认显示图片路径
    QString pressImgPath; //按下后显示图片路径

    void zoom1();//向下跳跃特效
    void zoom2();//向上跳跃特效

    void mousePressEvent(QMouseEvent *);//鼠标按下事件
    void mouseReleaseEvent(QMouseEvent *);//鼠标释放事件


signals:

};

#endif // MYPUSHBUTTON_H
