/********************************************************************************
** Form generated from reading UI file 'designwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DESIGNWINDOW_H
#define UI_DESIGNWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DesignWindow
{
public:
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *DesignWindow)
    {
        if (DesignWindow->objectName().isEmpty())
            DesignWindow->setObjectName("DesignWindow");
        DesignWindow->resize(800, 600);
        centralwidget = new QWidget(DesignWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(230, 170, 271, 241));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        lineEdit = new QLineEdit(verticalLayoutWidget);
        lineEdit->setObjectName("lineEdit");

        verticalLayout->addWidget(lineEdit);

        pushButton = new QPushButton(verticalLayoutWidget);
        pushButton->setObjectName("pushButton");

        verticalLayout->addWidget(pushButton);

        DesignWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(DesignWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 18));
        DesignWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(DesignWindow);
        statusbar->setObjectName("statusbar");
        DesignWindow->setStatusBar(statusbar);

        retranslateUi(DesignWindow);

        QMetaObject::connectSlotsByName(DesignWindow);
    } // setupUi

    void retranslateUi(QMainWindow *DesignWindow)
    {
        DesignWindow->setWindowTitle(QCoreApplication::translate("DesignWindow", "DesignWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("DesignWindow", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DesignWindow: public Ui_DesignWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DESIGNWINDOW_H
