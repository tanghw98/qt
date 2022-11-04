#ifndef LAB7_H
#define LAB7_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class lab7; }
QT_END_NAMESPACE

class lab7 : public QWidget
{
    Q_OBJECT

public:
    lab7(QWidget *parent = nullptr);
    ~lab7();

private:
    Ui::lab7 *ui;
};
#endif // LAB7_H
