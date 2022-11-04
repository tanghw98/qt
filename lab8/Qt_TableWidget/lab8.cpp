#include "lab8.h"
#include "ui_lab8.h"
#include<QTableWidget>

lab8::lab8(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::lab8)
{
    ui->setupUi(this);
    //Tablewidget控件
    //设置列数
    ui->tableWidget->setColumnCount(3);
    //设置水平表头
    ui->tableWidget->setHorizontalHeaderLabels(QStringList()<<"姓名"<<"性别"<<"年龄");
    //设置行数
    ui->tableWidget->setRowCount(5);
    //设置正文
    //ui->tableWidget->setItem(0,0,new QTableWidgetItem("亚索"));
    QStringList nameList;
    nameList<<"亚瑟"<<"赵云"<<"张飞"<<"安其拉"<<"花木兰";
    QStringList sexList;
    sexList<<"男"<<"男"<<"女"<<"女"<<"女";
    for(int i=0;i<5;i++){
        int col=0;
        ui->tableWidget->setItem(i,col++,new QTableWidgetItem(nameList[i]));
        ui->tableWidget->setItem(i,col++,new QTableWidgetItem(sexList[i]));
        ui->tableWidget->setItem(i,col++,new QTableWidgetItem(QString::number(i+18)));
    }

}

lab8::~lab8()
{
    delete ui;
}

