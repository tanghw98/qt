#include "mylabel.h"
#include<QDebug>
#include<QMouseEvent>
mylabel::mylabel(QWidget *parent)
    : QLabel{parent}
{
    //设置鼠标追踪状态
    setMouseTracking(true);

}

//鼠标将进入事件
void mylabel::enterEvent(QEvent *event){
    qDebug()<<"鼠标进入了";}
//鼠标离开事件
void mylabel::leaveEvent(QEvent *){
    qDebug()<<"鼠标离开了";}
//鼠标按下事件
//鼠标左键按下
void mylabel::mousePressEvent(QMouseEvent *ev){
    if(ev->button()==Qt::LeftButton){
        QString str=QString("鼠标按下了x=%1 y=%2 globalx=%3 golbaly=%4").arg(ev->x()).arg(ev->y()).arg(ev->globalX()).arg(ev->globalY());
        qDebug()<<str;}}
//鼠标释放事件
void  mylabel::mouseReleaseEvent(QMouseEvent *ev){ if(ev->button()==Qt::LeftButton){qDebug()<<"鼠标释放了";}}
//鼠标移动事件
void  mylabel::mouseMoveEvent(QMouseEvent *ev){

    if(ev->buttons()& Qt::LeftButton)
    {qDebug()<<"鼠标移动了";}}
//通过鼠标拦截事件
bool mylabel::event(QEvent *e){
    if(e->type()==QEvent::MouseButtonPress){
        QMouseEvent *ev=static_cast<QMouseEvent *>(e);
        QString str=QString("Event中：鼠标按下了x=%1 y=%2 globalx=%3 golbaly=%4").arg(ev->x()).arg(ev->y()).arg(ev->globalX()).arg(ev->globalY());
        qDebug()<<str;
        return true;}//true代表用户自己处理这个事件，不向下分发

    return QLabel::event(e);}//其他事件交给父类处理





