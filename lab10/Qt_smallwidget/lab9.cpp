#include "lab9.h"
#include "ui_lab9.h"
#include<QDebug>
lab9::lab9(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::lab9)
{
    ui->setupUi(this);
    //点击获取控件当前值
    connect(ui->btn_get,&QPushButton::clicked,[=](){
        qDebug()<<ui->widget->getNum(); });
    //点击设置到一半
    connect(ui->btn_set,&QPushButton::clicked,[=](){
        ui->widget->setNum(50); });
}

lab9::~lab9()
{
    delete ui;
}

