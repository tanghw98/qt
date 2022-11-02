/********************************************************************************
** Form generated from reading UI file 'resource.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESOURCE_H
#define UI_RESOURCE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Resource
{
public:
    QAction *actionnew;
    QAction *actionopen;
    QWidget *centralwidget;
    QTextEdit *textEdit;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *menu_2;
    QStatusBar *statusbar;
    QToolBar *toolBar;
    QDockWidget *dockWidget;
    QWidget *dockWidgetContents;

    void setupUi(QMainWindow *Resource)
    {
        if (Resource->objectName().isEmpty())
            Resource->setObjectName(QString::fromUtf8("Resource"));
        Resource->resize(350, 181);
        actionnew = new QAction(Resource);
        actionnew->setObjectName(QString::fromUtf8("actionnew"));
        actionopen = new QAction(Resource);
        actionopen->setObjectName(QString::fromUtf8("actionopen"));
        centralwidget = new QWidget(Resource);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(23, 3, 271, 151));
        Resource->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Resource);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 350, 17));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menu_2 = new QMenu(menubar);
        menu_2->setObjectName(QString::fromUtf8("menu_2"));
        Resource->setMenuBar(menubar);
        statusbar = new QStatusBar(Resource);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Resource->setStatusBar(statusbar);
        toolBar = new QToolBar(Resource);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        Resource->addToolBar(Qt::TopToolBarArea, toolBar);
        dockWidget = new QDockWidget(Resource);
        dockWidget->setObjectName(QString::fromUtf8("dockWidget"));
        dockWidget->setAllowedAreas(Qt::LeftDockWidgetArea|Qt::RightDockWidgetArea);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QString::fromUtf8("dockWidgetContents"));
        dockWidget->setWidget(dockWidgetContents);
        Resource->addDockWidget(Qt::LeftDockWidgetArea, dockWidget);

        menubar->addAction(menu->menuAction());
        menubar->addAction(menu_2->menuAction());
        menu->addAction(actionnew);
        menu->addSeparator();
        menu->addAction(actionopen);
        toolBar->addAction(actionnew);
        toolBar->addSeparator();
        toolBar->addAction(actionopen);

        retranslateUi(Resource);

        QMetaObject::connectSlotsByName(Resource);
    } // setupUi

    void retranslateUi(QMainWindow *Resource)
    {
        Resource->setWindowTitle(QCoreApplication::translate("Resource", "Resource", nullptr));
        actionnew->setText(QCoreApplication::translate("Resource", "\346\226\260\345\273\272", nullptr));
        actionopen->setText(QCoreApplication::translate("Resource", "\346\211\223\345\274\200", nullptr));
        menu->setTitle(QCoreApplication::translate("Resource", "\346\226\207\344\273\266", nullptr));
        menu_2->setTitle(QCoreApplication::translate("Resource", "\347\274\226\350\276\221", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("Resource", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Resource: public Ui_Resource {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESOURCE_H
