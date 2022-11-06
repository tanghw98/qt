#ifndef CHOOSELEVELSCENE_H
#define CHOOSELEVELSCENE_H
#include "playscene.h"

#include <QMainWindow>

class ChooseLevelScene : public QMainWindow
{
    Q_OBJECT
public:
    explicit ChooseLevelScene(QWidget *parent = nullptr);
    //背景设置
    void paintEvent(QPaintEvent*);
    PlayScene *pScene = NULL;

signals:
    void chooseSceneBack();
};

#endif // CHOOSELEVELSCENE_H
