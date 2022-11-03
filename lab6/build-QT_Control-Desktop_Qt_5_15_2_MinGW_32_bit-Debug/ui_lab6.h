/********************************************************************************
** Form generated from reading UI file 'lab6.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LAB6_H
#define UI_LAB6_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_lab6
{
public:
    QVBoxLayout *verticalLayout_3;
    QPushButton *pushButton;
    QToolButton *toolButton;
    QWidget *widget_2;
    QListWidget *listWidget;
    QGroupBox *groupBox_3;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QCheckBox *cbox;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QRadioButton *rbtnman;
    QRadioButton *rbtnwomen;

    void setupUi(QWidget *lab6)
    {
        if (lab6->objectName().isEmpty())
            lab6->setObjectName(QString::fromUtf8("lab6"));
        lab6->resize(344, 314);
        lab6->setMinimumSize(QSize(0, 0));
        verticalLayout_3 = new QVBoxLayout(lab6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        pushButton = new QPushButton(lab6);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout_3->addWidget(pushButton);

        toolButton = new QToolButton(lab6);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Image/5.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton->setIcon(icon);
        toolButton->setIconSize(QSize(16, 16));
        toolButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        toolButton->setAutoRaise(true);

        verticalLayout_3->addWidget(toolButton);

        widget_2 = new QWidget(lab6);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        listWidget = new QListWidget(widget_2);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(75, 6, 256, 192));
        listWidget->setMaximumSize(QSize(16777215, 300));
        groupBox_3 = new QGroupBox(widget_2);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(6, 6, 65, 192));
        checkBox = new QCheckBox(groupBox_3);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(10, 30, 61, 18));
        checkBox_2 = new QCheckBox(groupBox_3);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));
        checkBox_2->setGeometry(QRect(10, 50, 61, 18));
        checkBox_3 = new QCheckBox(groupBox_3);
        checkBox_3->setObjectName(QString::fromUtf8("checkBox_3"));
        checkBox_3->setGeometry(QRect(10, 70, 61, 18));
        cbox = new QCheckBox(groupBox_3);
        cbox->setObjectName(QString::fromUtf8("cbox"));
        cbox->setGeometry(QRect(10, 90, 61, 18));

        verticalLayout_3->addWidget(widget_2);

        widget = new QWidget(lab6);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        groupBox_2 = new QGroupBox(widget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        radioButton_3 = new QRadioButton(groupBox_2);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));

        verticalLayout_2->addWidget(radioButton_3);

        radioButton_4 = new QRadioButton(groupBox_2);
        radioButton_4->setObjectName(QString::fromUtf8("radioButton_4"));

        verticalLayout_2->addWidget(radioButton_4);


        horizontalLayout->addWidget(groupBox_2);

        groupBox = new QGroupBox(widget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        rbtnman = new QRadioButton(groupBox);
        rbtnman->setObjectName(QString::fromUtf8("rbtnman"));

        verticalLayout->addWidget(rbtnman);

        rbtnwomen = new QRadioButton(groupBox);
        rbtnwomen->setObjectName(QString::fromUtf8("rbtnwomen"));

        verticalLayout->addWidget(rbtnwomen);


        horizontalLayout->addWidget(groupBox);


        verticalLayout_3->addWidget(widget);


        retranslateUi(lab6);

        QMetaObject::connectSlotsByName(lab6);
    } // setupUi

    void retranslateUi(QWidget *lab6)
    {
        lab6->setWindowTitle(QCoreApplication::translate("lab6", "lab6", nullptr));
        pushButton->setText(QCoreApplication::translate("lab6", "\347\231\273\345\275\225", nullptr));
        toolButton->setText(QCoreApplication::translate("lab6", "\346\227\205\350\241\214\350\200\205", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("lab6", "\351\227\256\345\215\267\350\260\203\346\237\245", nullptr));
        checkBox->setText(QCoreApplication::translate("lab6", "\344\273\267\346\240\274\345\256\236\346\203\240", nullptr));
        checkBox_2->setText(QCoreApplication::translate("lab6", "\345\221\263\351\201\223\345\245\275", nullptr));
        checkBox_3->setText(QCoreApplication::translate("lab6", "\346\234\215\345\212\241\345\210\260\344\275\215", nullptr));
        cbox->setText(QCoreApplication::translate("lab6", "\345\271\262\345\207\200\345\215\253\347\224\237", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("lab6", "\345\251\232\345\247\273\346\203\205\345\206\265", nullptr));
        radioButton_3->setText(QCoreApplication::translate("lab6", "\345\267\262\345\251\232", nullptr));
        radioButton_4->setText(QCoreApplication::translate("lab6", "\346\234\252\345\251\232", nullptr));
        groupBox->setTitle(QCoreApplication::translate("lab6", "\346\200\247\345\210\253", nullptr));
        rbtnman->setText(QCoreApplication::translate("lab6", "\347\224\267", nullptr));
        rbtnwomen->setText(QCoreApplication::translate("lab6", "\345\245\263", nullptr));
    } // retranslateUi

};

namespace Ui {
    class lab6: public Ui_lab6 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LAB6_H
