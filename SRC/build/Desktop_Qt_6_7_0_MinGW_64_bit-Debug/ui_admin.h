/********************************************************************************
** Form generated from reading UI file 'admin.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_H
#define UI_ADMIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_adminstrator
{
public:
    QGroupBox *groupBox;
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *addCourse;
    QPushButton *removeCourse;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *addCourse1;
    QLineEdit *removeCourse1;
    QLabel *label_4;
    QLabel *label_5;

    void setupUi(QDialog *adminstrator)
    {
        if (adminstrator->objectName().isEmpty())
            adminstrator->setObjectName("adminstrator");
        adminstrator->resize(976, 576);
        groupBox = new QGroupBox(adminstrator);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(10, 20, 941, 551));
        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setGeometry(QRect(350, 60, 181, 20));
        QFont font;
        font.setPointSize(15);
        font.setBold(true);
        label->setFont(font);
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(110, 180, 83, 29));
        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(90, 280, 83, 29));
        addCourse = new QPushButton(groupBox);
        addCourse->setObjectName("addCourse");
        addCourse->setGeometry(QRect(650, 180, 83, 29));
        removeCourse = new QPushButton(groupBox);
        removeCourse->setObjectName("removeCourse");
        removeCourse->setGeometry(QRect(620, 280, 111, 29));
        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(50, 240, 113, 28));
        lineEdit_2 = new QLineEdit(groupBox);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(190, 240, 121, 28));
        lineEdit_3 = new QLineEdit(groupBox);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setGeometry(QRect(70, 320, 121, 28));
        addCourse1 = new QLineEdit(groupBox);
        addCourse1->setObjectName("addCourse1");
        addCourse1->setGeometry(QRect(592, 230, 131, 28));
        removeCourse1 = new QLineEdit(groupBox);
        removeCourse1->setObjectName("removeCourse1");
        removeCourse1->setGeometry(QRect(620, 320, 141, 28));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(220, 210, 63, 20));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(70, 210, 71, 20));

        retranslateUi(adminstrator);

        QMetaObject::connectSlotsByName(adminstrator);
    } // setupUi

    void retranslateUi(QDialog *adminstrator)
    {
        adminstrator->setWindowTitle(QCoreApplication::translate("adminstrator", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("adminstrator", "GroupBox", nullptr));
        label->setText(QCoreApplication::translate("adminstrator", "Adminstrator", nullptr));
        pushButton->setText(QCoreApplication::translate("adminstrator", "add user", nullptr));
        pushButton_2->setText(QCoreApplication::translate("adminstrator", "remove user", nullptr));
        addCourse->setText(QCoreApplication::translate("adminstrator", "add course", nullptr));
        removeCourse->setText(QCoreApplication::translate("adminstrator", "remove course", nullptr));
        label_4->setText(QCoreApplication::translate("adminstrator", "password", nullptr));
        label_5->setText(QCoreApplication::translate("adminstrator", "username", nullptr));
    } // retranslateUi

};

namespace Ui {
    class adminstrator: public Ui_adminstrator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_H
