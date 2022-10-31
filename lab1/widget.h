#ifndef WIDGET_H
#define WIDGET_H
#include<teacher.h>
#include<student.h>

#include <QWidget>

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
     void  ClassIsOver();
    ~Widget();

     private:
     teacher* teac;
     student* stu;

};
#endif // WIDGET_H
