#ifndef LAB8_H
#define LAB8_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class lab8; }
QT_END_NAMESPACE

class lab8 : public QMainWindow
{
    Q_OBJECT

public:
    lab8(QWidget *parent = nullptr);
    ~lab8();

private:
    Ui::lab8 *ui;
};
#endif // LAB8_H
