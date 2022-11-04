/********************************************************************************
** Form generated from reading UI file 'lab8.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LAB8_H
#define UI_LAB8_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_lab8
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QTableWidget *tableWidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *lab8)
    {
        if (lab8->objectName().isEmpty())
            lab8->setObjectName(QString::fromUtf8("lab8"));
        lab8->resize(800, 600);
        centralwidget = new QWidget(lab8);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tableWidget = new QTableWidget(centralwidget);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));

        verticalLayout->addWidget(tableWidget);

        lab8->setCentralWidget(centralwidget);
        menubar = new QMenuBar(lab8);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 17));
        lab8->setMenuBar(menubar);
        statusbar = new QStatusBar(lab8);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        lab8->setStatusBar(statusbar);

        retranslateUi(lab8);

        QMetaObject::connectSlotsByName(lab8);
    } // setupUi

    void retranslateUi(QMainWindow *lab8)
    {
        lab8->setWindowTitle(QCoreApplication::translate("lab8", "lab8", nullptr));
    } // retranslateUi

};

namespace Ui {
    class lab8: public Ui_lab8 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LAB8_H
