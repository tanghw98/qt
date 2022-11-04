#ifndef LAB13_H
#define LAB13_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class lab13; }
QT_END_NAMESPACE

class lab13 : public QWidget
{
    Q_OBJECT

public:
    lab13(QWidget *parent = nullptr);
    ~lab13();
    //绘图事件
    void paintEvent(QPaintEvent *);

private:
    Ui::lab13 *ui;
};
#endif // LAB13_H
