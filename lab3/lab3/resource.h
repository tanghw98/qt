#ifndef RESOURCE_H
#define RESOURCE_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Resource; }
QT_END_NAMESPACE

class Resource : public QMainWindow
{
    Q_OBJECT

public:
    Resource(QWidget *parent = nullptr);
    ~Resource();

private:
    Ui::Resource *ui;
};
#endif // RESOURCE_H
