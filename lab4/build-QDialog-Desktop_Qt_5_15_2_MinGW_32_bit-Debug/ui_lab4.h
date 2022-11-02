/********************************************************************************
** Form generated from reading UI file 'lab4.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LAB4_H
#define UI_LAB4_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_lab4
{
public:
    QAction *actionnew;
    QAction *actionopen;
    QWidget *centralwidget;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *menu_2;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *lab4)
    {
        if (lab4->objectName().isEmpty())
            lab4->setObjectName(QString::fromUtf8("lab4"));
        lab4->resize(800, 600);
        actionnew = new QAction(lab4);
        actionnew->setObjectName(QString::fromUtf8("actionnew"));
        actionopen = new QAction(lab4);
        actionopen->setObjectName(QString::fromUtf8("actionopen"));
        centralwidget = new QWidget(lab4);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        lab4->setCentralWidget(centralwidget);
        menubar = new QMenuBar(lab4);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 17));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menu_2 = new QMenu(menubar);
        menu_2->setObjectName(QString::fromUtf8("menu_2"));
        lab4->setMenuBar(menubar);
        statusbar = new QStatusBar(lab4);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        lab4->setStatusBar(statusbar);
        toolBar = new QToolBar(lab4);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        lab4->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menu->menuAction());
        menubar->addAction(menu_2->menuAction());
        menu->addAction(actionnew);
        menu->addAction(actionopen);
        toolBar->addAction(actionnew);
        toolBar->addSeparator();
        toolBar->addAction(actionopen);

        retranslateUi(lab4);

        QMetaObject::connectSlotsByName(lab4);
    } // setupUi

    void retranslateUi(QMainWindow *lab4)
    {
        lab4->setWindowTitle(QCoreApplication::translate("lab4", "lab4", nullptr));
        actionnew->setText(QCoreApplication::translate("lab4", "\346\226\260\345\273\272", nullptr));
        actionopen->setText(QCoreApplication::translate("lab4", "\346\211\223\345\274\200", nullptr));
        menu->setTitle(QCoreApplication::translate("lab4", "\346\226\207\344\273\266", nullptr));
        menu_2->setTitle(QCoreApplication::translate("lab4", "\347\274\226\350\276\221", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("lab4", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class lab4: public Ui_lab4 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LAB4_H
