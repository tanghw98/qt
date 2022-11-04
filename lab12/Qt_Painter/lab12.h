#ifndef LAB12_H
#define LAB12_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class lab12; }
QT_END_NAMESPACE

class lab12 : public QWidget
{
    Q_OBJECT

public:
    lab12(QWidget *parent = nullptr);
    ~lab12();
    //绘图事件
    void paintEvent(QPaintEvent *);
    int pos=0;


private:
    Ui::lab12 *ui;
};
#endif // LAB12_H
