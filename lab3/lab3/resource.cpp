#include "resource.h"
#include "ui_resource.h"

Resource::Resource(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Resource)
{
    ui->setupUi(this);
   // ui->actionnew->setIcon(QIcon("C:/Users/tanghw/Documents/qt/lab3/Image/1.jpg"));
    //使用资源文件打开
    ui->actionnew->setIcon(QIcon(":/Image/1.jpg"));
    ui->actionopen->setIcon(QIcon(":/Image/3.png"));
}

Resource::~Resource()
{
    delete ui;
}

