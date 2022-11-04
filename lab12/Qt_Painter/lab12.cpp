#include "lab12.h"
#include "ui_lab12.h"
#include<QPainter>
#include<QPushButton>
#include<QTimer>

lab12::lab12(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::lab12)
{
    ui->setupUi(this);
    //点击按钮移动事件
    connect(ui->pushButton,&QPushButton::clicked,[=](){
         pos+=20;
           update();
    });

     //利用定时器进行移动
    QTimer *timer=new QTimer(this);
    timer->start(500);
    connect(timer,&QTimer::timeout,[=](){
        pos+=20;
         update();
    });



}

//绘图事件
void lab12::paintEvent(QPaintEvent *){
    //    //实例化画家对象 this指定的是绘图设备
    //    QPainter painter(this);
    //    //设置画笔
    //    QPen pen(QColor(255,0,0));
    //    pen.setWidth(2);
    //    pen.setStyle(Qt::DotLine);
    //    painter.setPen(pen);
    //    //设置画刷
    //    QBrush brush(Qt::green);
    //    brush.setStyle(Qt::Dense7Pattern);
    //    painter.setBrush(brush);

    //    //画线
    //    painter.drawLine(QPoint(0,0),QPoint(100,100));
    //    //画园
    //    painter.drawEllipse(QPoint(100,100),50,50);
    //    //画矩形
    //    painter.drawRect(QRect(20,20,50,50));
    //    //画文字
    //    painter.drawText(QRect(10,200,200,50),"好好学习，天天向上");

    //    //高级设置
    //    QPainter painter(this);
    //    painter.drawEllipse(QPoint(100,50),50,50);
    //    //设置抗锯齿能力 效率低
    //    painter.setRenderHint(QPainter::Antialiasing);
    //    painter.drawEllipse(QPoint(200,50),50,50);

    //    painter.drawRect(QRect(20,20,50,50));
    //    //移动画笔
    //    painter.translate(100,0);
    //    painter.save();
    //    painter.drawRect(QRect(20,20,50,50));
    //    painter.restore();
    //    painter.drawRect(QRect(20,20,50,50));

    //利用画家画资源文件
    QPainter painter(this);
    //如果超出屏幕，从零开始
    if(pos>this->width())
    {pos=0;}

    painter.drawPixmap(pos,0,QPixmap(":/Image/1.jpg"),0,0,50,50);
}

lab12::~lab12()
{
    delete ui;
}

