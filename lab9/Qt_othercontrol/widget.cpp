#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->stackedWidget_2->setCurrentIndex(0);
    //栈控件使用
    //scrollArea按钮
    connect(ui->btn_ScollArea,&QPushButton::clicked,[=](){
        ui->stackedWidget_2->setCurrentIndex(2);});
    //toolbox按钮
    connect(ui->btn_ToolBox,&QPushButton::clicked,[=](){
        ui->stackedWidget_2->setCurrentIndex(1);});
    //TabWidget按钮
    connect(ui->btn_TabWidget,&QPushButton::clicked,[=](){
        ui->stackedWidget_2->setCurrentIndex(0);});
    //下拉框
    ui->comboBox->addItem("奔驰");
    ui->comboBox->addItem("宝马");
    ui->comboBox->addItem("拖拉机");
    //点击按钮选中拖拉机
    connect(ui->btn_select,&QPushButton::clicked,[=](){
        ui->comboBox->setCurrentText("奔驰");
        //ui->comboBox->setCurrentIndex(2);
    });
    //利用Qlabel显示图片,动图
    //QMovie *movie=new QMovie()
    //    ui->label->setMovie(":/");
    //    movie->start();
    ui->label->setPixmap(QPixmap(":/Image/1.jpg"));

}

Widget::~Widget()
{
    delete ui;
}

