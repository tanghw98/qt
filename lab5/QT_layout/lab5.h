#ifndef LAB5_H
#define LAB5_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class lab5; }
QT_END_NAMESPACE

class lab5 : public QMainWindow
{
    Q_OBJECT

public:
    lab5(QWidget *parent = nullptr);
    ~lab5();

private:
    Ui::lab5 *ui;
};
#endif // LAB5_H
