#include "lab11.h"
#include "ui_lab11.h"
#include<QTimer>
#include<QPushButton>
#include<QDebug>
#include<QMouseEvent>

lab11::lab11(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::lab11)
{
    ui->setupUi(this);
    //启动定时器
    id1=startTimer(1000); //参数：时间 ms
    id2=startTimer(2000); //参数：时间 ms
    //定时器第二种方式
    QTimer *timer=new QTimer(this);
    timer->start(500);
    connect(timer,&QTimer::timeout,[=](){
        static int num=1;
         ui->label_4->setText(QString::number(num++));
    });
    //点击停止定时器
    connect(ui->btn_stop,&QPushButton::clicked,[=](){
        timer->stop();
    });
    //点击启动定时器
    connect(ui->btn_start,&QPushButton::clicked,[=](){
        timer->start();
    });
    //给事件安装事件过滤器
    ui->label->installEventFilter(this);
}
//重写事件中过滤器事件
bool lab11::eventFilter(QObject*obj ,QEvent *e){
    if(obj==ui->label)
    {
        if(e->type()==QEvent::MouseButtonPress){
            QMouseEvent *ev=static_cast<QMouseEvent *>(e);
            QString str=QString("Event过滤器事件函数中：鼠标按下了x=%1 y=%2 globalx=%3 golbaly=%4").arg(ev->x()).arg(ev->y()).arg(ev->globalX()).arg(ev->globalY());
            qDebug()<<str;
            return true; }//true代表用户自己处理这个事件，不向下分发
    }
    //其他默认处理
    return QWidget::eventFilter(obj,e);

}

//重写定时器事件
void lab11::timerEvent(QTimerEvent *ev){
    if(ev->timerId()==id1){
   static int num=1;
    ui->label_2->setText(QString::number(num++));}

    if(ev->timerId()==id2){
    static int num2=1;
     ui->label_3->setText(QString::number(num2++));}}

lab11::~lab11()
{
    delete ui;
}

