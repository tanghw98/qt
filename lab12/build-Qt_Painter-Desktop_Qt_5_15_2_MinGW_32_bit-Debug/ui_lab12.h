/********************************************************************************
** Form generated from reading UI file 'lab12.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LAB12_H
#define UI_LAB12_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_lab12
{
public:
    QPushButton *pushButton;

    void setupUi(QWidget *lab12)
    {
        if (lab12->objectName().isEmpty())
            lab12->setObjectName(QString::fromUtf8("lab12"));
        lab12->resize(336, 311);
        pushButton = new QPushButton(lab12);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(240, 280, 80, 18));

        retranslateUi(lab12);

        QMetaObject::connectSlotsByName(lab12);
    } // setupUi

    void retranslateUi(QWidget *lab12)
    {
        lab12->setWindowTitle(QCoreApplication::translate("lab12", "lab12", nullptr));
        pushButton->setText(QCoreApplication::translate("lab12", "move", nullptr));
    } // retranslateUi

};

namespace Ui {
    class lab12: public Ui_lab12 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LAB12_H
