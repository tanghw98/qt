#include "lab7.h"
#include "ui_lab7.h"

lab7::lab7(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::lab7)
{
    ui->setupUi(this);
    //treewidget树控件使用
    ui->treeWidget->setHeaderLabels(QStringList()<<"英雄"<<"英雄介绍");
    QTreeWidgetItem *liItem=new QTreeWidgetItem(QStringList()<<"力量");
    QTreeWidgetItem *minItem=new QTreeWidgetItem(QStringList()<<"敏捷");
    QTreeWidgetItem *zhiiItem=new QTreeWidgetItem(QStringList()<<"智力");
    //加载顶层的节点
    ui->treeWidget->addTopLevelItem(liItem);
    ui->treeWidget->addTopLevelItem(minItem);
    ui->treeWidget->addTopLevelItem(zhiiItem);
    //追加子节点
    QTreeWidgetItem *l1=new QTreeWidgetItem(QStringList()<<"唐华文");
    liItem->addChild(l1);
    QTreeWidgetItem *m1=new QTreeWidgetItem(QStringList()<<"郑芳丽");
    minItem->addChild(m1);
    QTreeWidgetItem *z1=new QTreeWidgetItem(QStringList()<<"糖果");
    zhiiItem->addChild(z1);
}

lab7::~lab7()
{
    delete ui;
}

