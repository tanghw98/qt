#include "mainwindow.h"
#include<QMenuBar>
#include<QToolBar>
#include<QPushButton>
#include<QStatusBar>
#include<QLabel>
#include<QDockWidget>
#include<QTextEdit>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
     resize(600,400);
     //1、菜单栏操作(只能有一个)

     //菜单栏创建
     QMenuBar* bar=menuBar();
     //将菜单栏放入到窗口中
     setMenuBar(bar);
     //创建菜单
     QMenu *fileMenu=bar->addMenu("文件");
     QMenu *editMenu=bar->addMenu("编辑");
     //创建菜单项
     QAction* newAction=fileMenu->addAction("新建");
     //添加分割线
     fileMenu->addSeparator();
     QAction* openAction=fileMenu->addAction("打开");

     //2、工具栏操作（可以有多个）
     QToolBar *toolBar=new QToolBar(this);
     //设置默认停靠位置
     addToolBar(Qt::LeftToolBarArea,toolBar);
     //设置只允许左右停靠
     toolBar->setAllowedAreas(Qt::LeftToolBarArea | Qt::RightToolBarArea);
     //设置不可浮动
     toolBar->setFloatable(false);
     //设置禁止移动
     toolBar->setMovable(false);
     //设置工具栏内容
     toolBar->addAction(newAction);
     toolBar->addSeparator();
     toolBar->addAction(openAction);
     //工具栏中添加控件
     QPushButton *btn=new QPushButton("he",this);
     toolBar->addWidget(btn);

     //3、状态栏操作（最多有一个）
     QStatusBar *stBar=statusBar();
     //设置到窗口中
     setStatusBar(stBar);
     //放标签控件
     QLabel *label=new QLabel("提示信息",this);
     stBar->addWidget(label);
     QLabel *label2=new QLabel("右侧提示信息",this);
     stBar->addPermanentWidget(label2);

     //4、浮动窗口操作（可以有多个）
     QDockWidget *dockWidget=new QDockWidget("浮动",this);
     addDockWidget(Qt::BottomDockWidgetArea,dockWidget);
     //设置后期停靠区域，只允许上下
     dockWidget->setAllowedAreas(Qt::TopDockWidgetArea | Qt::BottomDockWidgetArea);

     //5、设置中心部件（只能有一个）
     QTextEdit *edit =new QTextEdit(this);
     setCentralWidget(edit);

}

MainWindow::~MainWindow()
{

}


