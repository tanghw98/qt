#ifndef MAINSCENE_H
#define MAINSCENE_H

#include <QMainWindow>
#include"chooselevelscene.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainScene; }
QT_END_NAMESPACE

class MainScene : public QMainWindow
{
    Q_OBJECT

public:
    MainScene(QWidget *parent = nullptr);
    ~MainScene();

    //重写PaintEvent，设置背景图片
    void paintEvent(QPaintEvent *);
    ChooseLevelScene *chooseScene = new ChooseLevelScene;

private:
    Ui::MainScene *ui;
};
#endif // MAINSCENE_H
