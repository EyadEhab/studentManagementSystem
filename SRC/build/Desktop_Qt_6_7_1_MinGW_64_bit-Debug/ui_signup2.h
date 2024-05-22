/********************************************************************************
** Form generated from reading UI file 'signup2.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUP2_H
#define UI_SIGNUP2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_Signup2
{
public:
    QGroupBox *groupBox;
    QPushButton *signUp_4;
    QLabel *label_11;
    QRadioButton *student_4;
    QRadioButton *instractur_4;
    QRadioButton *admin_4;
    QLabel *label_12;
    QLineEdit *userId_4;
    QLineEdit *password_4;

    void setupUi(QDialog *Signup2)
    {
        if (Signup2->objectName().isEmpty())
            Signup2->setObjectName("Signup2");
        Signup2->resize(1140, 636);
        groupBox = new QGroupBox(Signup2);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(80, 70, 711, 451));
        signUp_4 = new QPushButton(groupBox);
        signUp_4->setObjectName("signUp_4");
        signUp_4->setGeometry(QRect(300, 360, 80, 24));
        label_11 = new QLabel(groupBox);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(50, 170, 161, 51));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        label_11->setFont(font);
        student_4 = new QRadioButton(groupBox);
        student_4->setObjectName("student_4");
        student_4->setGeometry(QRect(180, 260, 101, 22));
        QFont font1;
        font1.setPointSize(14);
        student_4->setFont(font1);
        instractur_4 = new QRadioButton(groupBox);
        instractur_4->setObjectName("instractur_4");
        instractur_4->setGeometry(QRect(300, 260, 111, 22));
        instractur_4->setFont(font1);
        admin_4 = new QRadioButton(groupBox);
        admin_4->setObjectName("admin_4");
        admin_4->setGeometry(QRect(420, 260, 141, 22));
        admin_4->setFont(font1);
        label_12 = new QLabel(groupBox);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(40, 90, 141, 51));
        label_12->setFont(font);
        userId_4 = new QLineEdit(groupBox);
        userId_4->setObjectName("userId_4");
        userId_4->setGeometry(QRect(180, 100, 221, 31));
        password_4 = new QLineEdit(groupBox);
        password_4->setObjectName("password_4");
        password_4->setGeometry(QRect(220, 190, 221, 31));

        retranslateUi(Signup2);

        QMetaObject::connectSlotsByName(Signup2);
    } // setupUi

    void retranslateUi(QDialog *Signup2)
    {
        Signup2->setWindowTitle(QCoreApplication::translate("Signup2", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Signup2", "signup", nullptr));
        signUp_4->setText(QCoreApplication::translate("Signup2", "Sign up", nullptr));
        label_11->setText(QCoreApplication::translate("Signup2", "Password : ", nullptr));
        student_4->setText(QCoreApplication::translate("Signup2", "Student", nullptr));
        instractur_4->setText(QCoreApplication::translate("Signup2", "Instractur", nullptr));
        admin_4->setText(QCoreApplication::translate("Signup2", "adminstrator", nullptr));
        label_12->setText(QCoreApplication::translate("Signup2", "User Id : ", nullptr));
        userId_4->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Signup2: public Ui_Signup2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUP2_H
