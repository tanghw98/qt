#ifndef LAB6_H
#define LAB6_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class lab6; }
QT_END_NAMESPACE

class lab6 : public QWidget
{
    Q_OBJECT

public:
    lab6(QWidget *parent = nullptr);
    ~lab6();

private:
    Ui::lab6 *ui;
};
#endif // LAB6_H
