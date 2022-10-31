#include "widget.h"
#include<QIcon>
#include<QPushButton>
#include<QDebug>


Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    //设置窗口标题
    this->setWindowTitle("test");
    //设置窗口图标
    this->setWindowIcon(QIcon("C:/Users/tanghw/Desktop/lab.png"));
    //限制窗口大小
    this->setFixedSize(600,400);
    //按钮操作
    QPushButton *btn=new QPushButton;
    btn->setParent(this);
    btn->setText("thw");
    btn->move(100,100);

    QPushButton *btn2=new QPushButton("zfl",this);
    btn2->move(100,160);

    //信号与槽
    QPushButton * quitBtn = new QPushButton("关闭窗口",this);
    quitBtn->move(500,0);
    connect(quitBtn,&QPushButton::clicked,this,&Widget::close);

    QPushButton *btn3=new QPushButton("下课",this);
    btn3->move(300,160);
    connect(btn3,&QPushButton::clicked,this,&Widget::close); //一个槽函数可以对应多个信号

    this->teac=new teacher(this);
    this->stu=new student(this);

    //   void (teacher:: * teacherSingal)(QString) = &teacher:: hurgry;
    //   void (student:: * studentSlot)(QString) = &student::treat;
    void(teacher::* teacherSignal0)() = &teacher::hurgry;
    void (student:: * studentSlot0)() = &student::treat;

    // connect(teac,teacherSingal,stu,studentSlot);
    connect(teac,SIGNAL(hurgry(QString)),stu,SLOT(treat(QString)));
    connect(teac,teacherSignal0,stu,studentSlot0);
    //ClassIsOver();
    connect(btn2,&QPushButton::clicked,this,&Widget::ClassIsOver);

    QPushButton *btn4=new QPushButton("下课啦",this);
    btn4->move(450,160);
    connect(btn4,&QPushButton::clicked,teac,teacherSignal0);



    //lamba表达式
    connect(btn,&QPushButton::clicked,[=](){
        qDebug()<<"Clicked";});

    QPushButton *btn5=new QPushButton("唐华文",this);
    btn5->move(250,360);
    connect(btn5,&QPushButton::clicked,this,[=](){emit teac->hurgry("宫保鸡丁");});

    //作业：当前窗口新建一个按钮，初始时显示open，点击后弹出一个新窗口，按钮显示close，再点击后关闭当前窗口，同时按钮显示open





    /*
也可以使用static_cast静态转换挑选我们要的函数
connect(teacher,
static_cast<void(Teacher:: *)(QString)>(&Teacher:: hurgry),
student,
static_cast<void(Student:: *)(QString)>(& Student::treat));
*/


}

void Widget::ClassIsOver()
{
    //发送信号
    //emit teac->hurgry();
    emit teac->hurgry("eggs");
}


Widget::~Widget()
{
}


