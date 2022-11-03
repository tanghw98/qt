#include "lab6.h"
#include "ui_lab6.h"
#include<QDebug>
#include<QCheckBox>
#include<QListWidgetItem>

lab6::lab6(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::lab6)
{
    ui->setupUi(this);
    //设置选项按钮默认项
    ui->rbtnman->setChecked(true);
    //打印选择信息
    connect(ui->rbtnwomen,&QRadioButton::clicked,[=](){
        qDebug()<<"选择为女生";
    });
    //多选按钮 2是选中 0是未选中
    connect(ui->cbox,&QCheckBox::stateChanged,[=](int state){
        qDebug()<<state;
    });
    //    //利用listwidget写诗
    //    QListWidgetItem *item=new QListWidgetItem("锄禾日当午");
    //    //将一行诗放入到listwidget控件中
    //    ui->listWidget->addItem(item);
    //    item->setTextAlignment(Qt::AlignCenter);
    QStringList list;
    list<<"锄禾日当午"<<"汗滴禾下土"<<"谁知盘中餐"<<"粒粒皆辛苦";
    ui->listWidget->addItems(list);

}

lab6::~lab6()
{
    delete ui;
}

