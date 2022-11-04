#ifndef LAB11_H
#define LAB11_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class lab11; }
QT_END_NAMESPACE

class lab11 : public QWidget
{
    Q_OBJECT

public:
    lab11(QWidget *parent = nullptr);
    ~lab11();
    //重写定时器事件
    void timerEvent(QTimerEvent *);
    int id1;
    int id2;
    //重写事件中过滤器事件
    bool eventFilter(QObject* ,QEvent *);

private:
    Ui::lab11 *ui;
};
#endif // LAB11_H
