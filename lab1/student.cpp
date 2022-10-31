#include "student.h"
#include<QDebug>
student::student(QObject *parent)
    : QObject{parent}
{



}

void student::treat()
{
       qDebug() << "Student treat teacher";
}

void student::treat(QString FoodName)
{
       qDebug() << "Student treat teacher eat"<<FoodName.toUtf8().data();
}
