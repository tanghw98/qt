/********************************************************************************
** Form generated from reading UI file 'lab7.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LAB7_H
#define UI_LAB7_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_lab7
{
public:
    QVBoxLayout *verticalLayout;
    QTreeWidget *treeWidget;

    void setupUi(QWidget *lab7)
    {
        if (lab7->objectName().isEmpty())
            lab7->setObjectName(QString::fromUtf8("lab7"));
        lab7->resize(350, 315);
        verticalLayout = new QVBoxLayout(lab7);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        treeWidget = new QTreeWidget(lab7);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));

        verticalLayout->addWidget(treeWidget);


        retranslateUi(lab7);

        QMetaObject::connectSlotsByName(lab7);
    } // setupUi

    void retranslateUi(QWidget *lab7)
    {
        lab7->setWindowTitle(QCoreApplication::translate("lab7", "lab7", nullptr));
    } // retranslateUi

};

namespace Ui {
    class lab7: public Ui_lab7 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LAB7_H
