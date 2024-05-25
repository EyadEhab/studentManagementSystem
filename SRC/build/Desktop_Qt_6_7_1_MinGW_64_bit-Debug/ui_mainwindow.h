/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QPushButton *Login;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *userId;
    QLineEdit *Password;
    QPushButton *Signup;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(998, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(0, 0, 981, 531));
        Login = new QPushButton(groupBox);
        Login->setObjectName("Login");
        Login->setGeometry(QRect(340, 330, 141, 41));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(40, 230, 161, 51));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        label_2->setFont(font);
        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(40, 160, 141, 51));
        label_3->setFont(font);
        userId = new QLineEdit(groupBox);
        userId->setObjectName("userId");
        userId->setGeometry(QRect(220, 180, 221, 31));
        Password = new QLineEdit(groupBox);
        Password->setObjectName("Password");
        Password->setGeometry(QRect(220, 250, 221, 31));
        Password->setEchoMode(QLineEdit::Password);
        Signup = new QPushButton(groupBox);
        Signup->setObjectName("Signup");
        Signup->setGeometry(QRect(60, 369, 101, 41));
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "login", nullptr));
        Login->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Password : ", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "User Id : ", nullptr));
        Signup->setText(QCoreApplication::translate("MainWindow", "sign up", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
