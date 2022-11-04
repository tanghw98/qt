/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QStackedWidget *stackedWidget_2;
    QWidget *page_4;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents_2;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_7;
    QPushButton *pushButton_6;
    QPushButton *pushButton_5;
    QPushButton *pushButton_4;
    QWidget *page_6;
    QToolBox *toolBox;
    QWidget *page1;
    QVBoxLayout *verticalLayout_3;
    QPushButton *pushButton_8;
    QWidget *page2;
    QToolButton *toolButton;
    QWidget *page;
    QToolButton *toolButton_2;
    QStackedWidget *stackedWidget;
    QWidget *page_2;
    QWidget *page_3;
    QWidget *page_5;
    QVBoxLayout *verticalLayout_4;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *tab_3;
    QWidget *tab_2;
    QPushButton *btn_TabWidget;
    QPushButton *btn_ToolBox;
    QPushButton *btn_ScollArea;
    QComboBox *comboBox;
    QPushButton *btn_select;
    QLabel *label;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(327, 309);
        stackedWidget_2 = new QStackedWidget(Widget);
        stackedWidget_2->setObjectName(QString::fromUtf8("stackedWidget_2"));
        stackedWidget_2->setGeometry(QRect(90, 0, 231, 261));
        page_4 = new QWidget();
        page_4->setObjectName(QString::fromUtf8("page_4"));
        scrollArea = new QScrollArea(page_4);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(40, 20, 171, 293));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 169, 291));
        verticalLayout = new QVBoxLayout(scrollAreaWidgetContents_2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        pushButton = new QPushButton(scrollAreaWidgetContents_2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(scrollAreaWidgetContents_2);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(scrollAreaWidgetContents_2);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        verticalLayout->addWidget(pushButton_3);

        pushButton_7 = new QPushButton(scrollAreaWidgetContents_2);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));

        verticalLayout->addWidget(pushButton_7);

        pushButton_6 = new QPushButton(scrollAreaWidgetContents_2);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));

        verticalLayout->addWidget(pushButton_6);

        pushButton_5 = new QPushButton(scrollAreaWidgetContents_2);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));

        verticalLayout->addWidget(pushButton_5);

        pushButton_4 = new QPushButton(scrollAreaWidgetContents_2);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        verticalLayout->addWidget(pushButton_4);

        scrollArea->setWidget(scrollAreaWidgetContents_2);
        stackedWidget_2->addWidget(page_4);
        page_6 = new QWidget();
        page_6->setObjectName(QString::fromUtf8("page_6"));
        toolBox = new QToolBox(page_6);
        toolBox->setObjectName(QString::fromUtf8("toolBox"));
        toolBox->setGeometry(QRect(10, 10, 92, 111));
        page1 = new QWidget();
        page1->setObjectName(QString::fromUtf8("page1"));
        page1->setGeometry(QRect(0, 0, 92, 39));
        verticalLayout_3 = new QVBoxLayout(page1);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        pushButton_8 = new QPushButton(page1);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));

        verticalLayout_3->addWidget(pushButton_8);

        toolBox->addItem(page1, QString::fromUtf8("\345\256\266\344\272\272"));
        page2 = new QWidget();
        page2->setObjectName(QString::fromUtf8("page2"));
        page2->setGeometry(QRect(0, 0, 92, 39));
        toolButton = new QToolButton(page2);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));
        toolButton->setGeometry(QRect(30, 20, 21, 19));
        toolBox->addItem(page2, QString::fromUtf8("\346\234\213\345\217\213"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        toolButton_2 = new QToolButton(page);
        toolButton_2->setObjectName(QString::fromUtf8("toolButton_2"));
        toolButton_2->setGeometry(QRect(20, 0, 21, 19));
        stackedWidget = new QStackedWidget(page);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(60, 40, 120, 80));
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        stackedWidget->addWidget(page_3);
        toolBox->addItem(page, QString::fromUtf8("\351\273\221\345\220\215\345\215\225"));
        stackedWidget_2->addWidget(page_6);
        page_5 = new QWidget();
        page_5->setObjectName(QString::fromUtf8("page_5"));
        verticalLayout_4 = new QVBoxLayout(page_5);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        tabWidget = new QTabWidget(page_5);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        tabWidget->addTab(tab, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        tabWidget->addTab(tab_3, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tabWidget->addTab(tab_2, QString());

        verticalLayout_4->addWidget(tabWidget);

        stackedWidget_2->addWidget(page_5);
        btn_TabWidget = new QPushButton(Widget);
        btn_TabWidget->setObjectName(QString::fromUtf8("btn_TabWidget"));
        btn_TabWidget->setGeometry(QRect(6, 6, 80, 18));
        btn_ToolBox = new QPushButton(Widget);
        btn_ToolBox->setObjectName(QString::fromUtf8("btn_ToolBox"));
        btn_ToolBox->setGeometry(QRect(6, 28, 80, 18));
        btn_ScollArea = new QPushButton(Widget);
        btn_ScollArea->setObjectName(QString::fromUtf8("btn_ScollArea"));
        btn_ScollArea->setGeometry(QRect(6, 50, 80, 18));
        comboBox = new QComboBox(Widget);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(10, 90, 62, 22));
        btn_select = new QPushButton(Widget);
        btn_select->setObjectName(QString::fromUtf8("btn_select"));
        btn_select->setGeometry(QRect(10, 140, 80, 18));
        label = new QLabel(Widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 190, 71, 71));

        retranslateUi(Widget);

        stackedWidget_2->setCurrentIndex(0);
        toolBox->setCurrentIndex(0);
        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        pushButton->setText(QCoreApplication::translate("Widget", "PushButton", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Widget", "PushButton", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Widget", "PushButton", nullptr));
        pushButton_7->setText(QCoreApplication::translate("Widget", "PushButton", nullptr));
        pushButton_6->setText(QCoreApplication::translate("Widget", "PushButton", nullptr));
        pushButton_5->setText(QCoreApplication::translate("Widget", "PushButton", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Widget", "PushButton", nullptr));
        pushButton_8->setText(QCoreApplication::translate("Widget", "PushButton", nullptr));
        toolBox->setItemText(toolBox->indexOf(page1), QCoreApplication::translate("Widget", "\345\256\266\344\272\272", nullptr));
        toolButton->setText(QCoreApplication::translate("Widget", "...", nullptr));
        toolBox->setItemText(toolBox->indexOf(page2), QCoreApplication::translate("Widget", "\346\234\213\345\217\213", nullptr));
        toolButton_2->setText(QCoreApplication::translate("Widget", "...", nullptr));
        toolBox->setItemText(toolBox->indexOf(page), QCoreApplication::translate("Widget", "\351\273\221\345\220\215\345\215\225", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("Widget", "\347\231\276\345\272\246", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("Widget", "edge", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("Widget", "\350\260\267\346\255\214", nullptr));
        btn_TabWidget->setText(QCoreApplication::translate("Widget", "TabWidget", nullptr));
        btn_ToolBox->setText(QCoreApplication::translate("Widget", "ToolBox", nullptr));
        btn_ScollArea->setText(QCoreApplication::translate("Widget", "ScollArea", nullptr));
        btn_select->setText(QCoreApplication::translate("Widget", "select", nullptr));
        label->setText(QCoreApplication::translate("Widget", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
