#ifndef MYLABEL_H
#define MYLABEL_H

#include <QLabel>

class mylabel : public QLabel
{
    Q_OBJECT
public:
    explicit mylabel(QWidget *parent = nullptr);
    //鼠标将进入事件
    void enterEvent(QEvent *event);
    //鼠标离开事件
    void leaveEvent(QEvent *);
    //鼠标按下事件
    virtual void mousePressEvent(QMouseEvent *ev);
    //鼠标释放事件
    virtual void mouseReleaseEvent(QMouseEvent *ev);
    //鼠标移动事件
    virtual void mouseMoveEvent(QMouseEvent *ev);
    //通过鼠标拦截事件
bool event(QEvent *e);
signals:

};

#endif // MYLABEL_H
