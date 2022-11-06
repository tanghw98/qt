#include "mainscene.h"
#include "ui_mainscene.h"
#include<QPainter>
#include<QPixmap>
#include "mypushbutton.h"
#include<QTimer>
#include<QSound>

MainScene::MainScene(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainScene)
{
    ui->setupUi(this);
    //设置窗口固定大小
    this->setFixedSize(320,588);
    //设置窗口标题图片
    this->setWindowIcon(QPixmap(":/res/Coin0001.png"));
    //设置窗口标题
    this->setWindowTitle("翻金币");
    //实现点击退出，退出程序功能
    connect(ui->actionQuit,&QAction::triggered,[=](){this->close();});

    //准备开始按钮音效
    QSound *startSound = new QSound(":/res/TapButtonSound.wav",this);

    //设置开始按钮
    MyPushButton *startBtn=new MyPushButton(":/res/MenuSceneStartButton.png");
    startBtn->setParent(this);
    startBtn->move(this->width()*0.5-startBtn->width()*0.5,this->height()*0.7);
    //开始按钮跳跃特效实现
    connect(startBtn,&MyPushButton::clicked,[=](){
        startBtn->zoom1();
        startSound->play(); //开始音效
        startBtn->zoom2();
        //延时0.5秒后 进入选择场景
        QTimer::singleShot(500, this,[=](){
            this->hide();
            chooseScene->setGeometry(this->geometry());
            chooseScene->show();});});

    //监听选择场景的返回按钮
    connect(chooseScene,&ChooseLevelScene::chooseSceneBack,[=](){
        this->setGeometry(this->geometry());
        this->show();
    });

}

void MainScene::paintEvent(QPaintEvent *){
    //创建画家，指定绘图设备
    QPainter painter(this);
    //创建绘图设备对象
    QPixmap pix;
    //加载背景图片
    pix.load(":/res/PlayLevelSceneBg.png");
    //绘制背景图
    painter.drawPixmap(0,0,this->width(),this->height(),pix);
    //加载背景图片标题
    pix.load(":/res/Title.png");
    //对背景图片标题进行缩放
    pix=pix.scaled(pix.width()*0.5,pix.height()*0.5);
    //绘制背景图片标题
    painter.drawPixmap(10,30,pix.width(),pix.height(),pix);
}

MainScene::~MainScene()
{
    delete ui;
}

