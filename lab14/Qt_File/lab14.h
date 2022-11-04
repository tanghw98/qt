#ifndef LAB14_H
#define LAB14_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class lab14; }
QT_END_NAMESPACE

class lab14 : public QWidget
{
    Q_OBJECT

public:
    lab14(QWidget *parent = nullptr);
    ~lab14();

private:
    Ui::lab14 *ui;
};
#endif // LAB14_H
