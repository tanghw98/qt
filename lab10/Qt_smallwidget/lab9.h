#ifndef LAB9_H
#define LAB9_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class lab9; }
QT_END_NAMESPACE

class lab9 : public QWidget
{
    Q_OBJECT

public:
    lab9(QWidget *parent = nullptr);
    ~lab9();

private:
    Ui::lab9 *ui;
};
#endif // LAB9_H
