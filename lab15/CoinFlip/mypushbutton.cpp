#include "mypushbutton.h"
#include<QDebug>
#include<QPropertyAnimation>

//normlImg-正常显示图片
//pressImg-按下后显示图片，默认为空
MyPushButton::MyPushButton(QString normalImg,QString pressImg)
{
    normalImgPath=normalImg;
    pressImgPath=pressImg;
    QPixmap pixmap;
    //判断图片能否正常加载，若不能则显示提示加载失败
    bool ret=pixmap.load(normalImgPath);
    if(!ret){
        qDebug()<<normalImg<<"加载图片失败!";
    }
    //设置按钮固定尺寸大小
    this->setFixedSize(pixmap.width(),pixmap.height());
    //设置不规则图片的样式表
    this->setStyleSheet("QPushButton{border:0px;}");
    //设置按钮图标
    this->setIcon(pixmap);
    //设置按钮图标大小
    this->setIconSize(QSize(pixmap.width(),pixmap.height()));
}
//向下跳跃特效
void MyPushButton::zoom1(){
    //创建动画对象
    QPropertyAnimation * animation1 = new QPropertyAnimation(this,"geometry");
    //设置时间间隔，单位毫秒
    animation1->setDuration(200);
    //创建起始位置
    animation1->setStartValue(QRect(this->x(),this->y(),this->width(),this->height()));
    //创建结束位置
    animation1->setEndValue(QRect(this->x(),this->y()+10,this->width(),this->height()));
    //设置缓和曲线，QEasingCurve::OutBounce 为弹跳效果
    animation1->setEasingCurve(QEasingCurve::OutBounce);
    //开始执行动画
    animation1->start();
}

//向上跳跃特效
void MyPushButton::zoom2(){
    QPropertyAnimation * animation1 =  new QPropertyAnimation(this,"geometry");
    animation1->setDuration(200);
    animation1->setStartValue(QRect(this->x(),this->y()+10,this->width(),this->height()));
    animation1->setEndValue(QRect(this->x(),this->y(),this->width(),this->height()));
    animation1->setEasingCurve(QEasingCurve::OutBounce);
    animation1->start();
}

//鼠标按下事件
void MyPushButton::mousePressEvent(QMouseEvent *e){
    if(pressImgPath != "") //选中路径不为空，显示选中图片
    {
        QPixmap pixmap;
        bool ret = pixmap.load(pressImgPath);
        if(!ret)
        {
            qDebug() << pressImgPath << "加载图片失败!";
        }

        this->setFixedSize( pixmap.width(), pixmap.height() );
        this->setStyleSheet("QPushButton{border:0px;}");
        this->setIcon(pixmap);
        this->setIconSize(QSize(pixmap.width(),pixmap.height()));
    }
    //交给父类执行 按下事件
    return QPushButton::mousePressEvent(e);
}

//鼠标释放事件
void MyPushButton::mouseReleaseEvent(QMouseEvent *e){
    if(normalImgPath != "") //选中路径不为空，显示选中图片
    {
        QPixmap pixmap;
        bool ret = pixmap.load(normalImgPath);
        if(!ret)
        {
            qDebug() << normalImgPath << "加载图片失败!";
        }
        this->setFixedSize( pixmap.width(), pixmap.height() );
        this->setStyleSheet("QPushButton{border:0px;}");
        this->setIcon(pixmap);
        this->setIconSize(QSize(pixmap.width(),pixmap.height()));
    }
    //交给父类执行 释放事件
    return QPushButton::mouseReleaseEvent(e);
}
