#ifndef PLAYSCENE_H
#define PLAYSCENE_H
#include<QPaintEvent>
#include"mycoin.h"
#include <QMainWindow>

class PlayScene : public QMainWindow
{
    Q_OBJECT
public:
    explicit PlayScene(QWidget *parent = nullptr);
    int levalIndex;

    //初始化场景配置
    PlayScene(int index);
    //背景配置
    void paintEvent(QPaintEvent *);
    //金币二维数组数据
    int gameArray[4][4];
    //金币按钮数组
    MyCoin * coinBtn[4][4];
    //是否胜利
    bool isWin=true;

signals:
    void chooseSceneBack();
};

#endif // PLAYSCENE_H
