/********************************************************************************
** Form generated from reading UI file 'lab14.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LAB14_H
#define UI_LAB14_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_lab14
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QTextEdit *textEdit_2;

    void setupUi(QWidget *lab14)
    {
        if (lab14->objectName().isEmpty())
            lab14->setObjectName(QString::fromUtf8("lab14"));
        lab14->resize(349, 303);
        verticalLayout = new QVBoxLayout(lab14);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        widget = new QWidget(lab14);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout->addWidget(lineEdit);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);


        verticalLayout->addWidget(widget);

        textEdit_2 = new QTextEdit(lab14);
        textEdit_2->setObjectName(QString::fromUtf8("textEdit_2"));

        verticalLayout->addWidget(textEdit_2);


        retranslateUi(lab14);

        QMetaObject::connectSlotsByName(lab14);
    } // setupUi

    void retranslateUi(QWidget *lab14)
    {
        lab14->setWindowTitle(QCoreApplication::translate("lab14", "lab14", nullptr));
        pushButton->setText(QCoreApplication::translate("lab14", "\351\200\211\345\217\226\346\226\207\344\273\266", nullptr));
    } // retranslateUi

};

namespace Ui {
    class lab14: public Ui_lab14 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LAB14_H
