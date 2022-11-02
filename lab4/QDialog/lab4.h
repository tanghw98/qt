#ifndef LAB4_H
#define LAB4_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class lab4; }
QT_END_NAMESPACE

class lab4 : public QMainWindow
{
    Q_OBJECT

public:
    lab4(QWidget *parent = nullptr);
    ~lab4();

private:
    Ui::lab4 *ui;
};
#endif // LAB4_H
