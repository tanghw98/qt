/********************************************************************************
** Form generated from reading UI file 'lab11.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LAB11_H
#define UI_LAB11_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include "mylabel.h"

QT_BEGIN_NAMESPACE

class Ui_lab11
{
public:
    mylabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *btn_stop;
    QPushButton *btn_start;

    void setupUi(QWidget *lab11)
    {
        if (lab11->objectName().isEmpty())
            lab11->setObjectName(QString::fromUtf8("lab11"));
        lab11->resize(353, 317);
        label = new mylabel(lab11);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 50, 241, 21));
        label->setFrameShape(QFrame::Box);
        label_2 = new QLabel(lab11);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(50, 100, 241, 21));
        label_2->setFrameShape(QFrame::Box);
        label_3 = new QLabel(lab11);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(50, 140, 231, 21));
        label_3->setFocusPolicy(Qt::TabFocus);
        label_3->setFrameShape(QFrame::Box);
        label_4 = new QLabel(lab11);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(60, 180, 231, 21));
        label_4->setFrameShape(QFrame::Box);
        label_4->setFrameShadow(QFrame::Sunken);
        btn_stop = new QPushButton(lab11);
        btn_stop->setObjectName(QString::fromUtf8("btn_stop"));
        btn_stop->setGeometry(QRect(120, 20, 80, 18));
        btn_start = new QPushButton(lab11);
        btn_start->setObjectName(QString::fromUtf8("btn_start"));
        btn_start->setGeometry(QRect(30, 20, 80, 18));

        retranslateUi(lab11);

        QMetaObject::connectSlotsByName(lab11);
    } // setupUi

    void retranslateUi(QWidget *lab11)
    {
        lab11->setWindowTitle(QCoreApplication::translate("lab11", "lab11", nullptr));
        label->setText(QCoreApplication::translate("lab11", "TextLabel", nullptr));
        label_2->setText(QCoreApplication::translate("lab11", "TextLabel", nullptr));
        label_3->setText(QCoreApplication::translate("lab11", "TextLabel", nullptr));
        label_4->setText(QCoreApplication::translate("lab11", "TextLabel", nullptr));
        btn_stop->setText(QCoreApplication::translate("lab11", "stop", nullptr));
        btn_start->setText(QCoreApplication::translate("lab11", "start", nullptr));
    } // retranslateUi

};

namespace Ui {
    class lab11: public Ui_lab11 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LAB11_H
