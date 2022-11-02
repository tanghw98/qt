/********************************************************************************
** Form generated from reading UI file 'lab5.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LAB5_H
#define UI_LAB5_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_lab5
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *lineEdit_2;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_5;
    QLineEdit *lineEdit;
    QSpacerItem *verticalSpacer;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QMainWindow *lab5)
    {
        if (lab5->objectName().isEmpty())
            lab5->setObjectName(QString::fromUtf8("lab5"));
        lab5->resize(252, 184);
        centralwidget = new QWidget(lab5);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setMinimumSize(QSize(350, 250));
        centralwidget->setMaximumSize(QSize(350, 250));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 1, 1, 1, 1);

        lineEdit_2 = new QLineEdit(widget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        gridLayout->addWidget(lineEdit_2, 1, 2, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 1, 0, 1, 1);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 3, 1, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_5, 1, 3, 1, 1);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(lineEdit, 3, 2, 1, 1);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer, 2, 2, 1, 1);


        verticalLayout->addWidget(widget);

        widget_3 = new QWidget(centralwidget);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        sizePolicy.setHeightForWidth(widget_3->sizePolicy().hasHeightForWidth());
        widget_3->setSizePolicy(sizePolicy);
        horizontalLayout_4 = new QHBoxLayout(widget_3);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        pushButton_2 = new QPushButton(widget_3);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout_4->addWidget(pushButton_2);

        horizontalSpacer_3 = new QSpacerItem(30, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);

        pushButton = new QPushButton(widget_3);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout_4->addWidget(pushButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);


        verticalLayout->addWidget(widget_3);

        lab5->setCentralWidget(centralwidget);

        retranslateUi(lab5);

        QMetaObject::connectSlotsByName(lab5);
    } // setupUi

    void retranslateUi(QMainWindow *lab5)
    {
        lab5->setWindowTitle(QCoreApplication::translate("lab5", "\347\231\273\345\275\225\347\252\227\345\217\243", nullptr));
        label->setText(QCoreApplication::translate("lab5", "\347\224\250\346\210\267\345\220\215\357\274\232", nullptr));
        lineEdit_2->setText(QString());
        label_2->setText(QCoreApplication::translate("lab5", "\345\257\206\347\240\201\357\274\232", nullptr));
        pushButton_2->setText(QCoreApplication::translate("lab5", "\351\200\200\345\207\272", nullptr));
        pushButton->setText(QCoreApplication::translate("lab5", "\347\231\273\345\275\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class lab5: public Ui_lab5 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LAB5_H
