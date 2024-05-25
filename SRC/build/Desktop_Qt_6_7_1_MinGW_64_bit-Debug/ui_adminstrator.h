/********************************************************************************
** Form generated from reading UI file 'adminstrator.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINSTRATOR_H
#define UI_ADMINSTRATOR_H

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
    QPushButton *plus;
    QPushButton *removed_2;
    QPushButton *addCourse;
    QPushButton *removeCourse;
    QLineEdit *removed;
    QLineEdit *addCourse1;
    QLineEdit *removeCourse1;

    void setupUi(QDialog *adminstrator)
    {
        if (adminstrator->objectName().isEmpty())
            adminstrator->setObjectName("adminstrator");
        adminstrator->resize(976, 576);
        groupBox = new QGroupBox(adminstrator);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(0, 30, 1021, 551));
        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setGeometry(QRect(340, 80, 161, 51));
        QFont font;
        font.setPointSize(15);
        font.setBold(true);
        label->setFont(font);
        plus = new QPushButton(groupBox);
        plus->setObjectName("plus");
        plus->setGeometry(QRect(90, 190, 83, 29));
        removed_2 = new QPushButton(groupBox);
        removed_2->setObjectName("removed_2");
        removed_2->setGeometry(QRect(80, 280, 101, 29));
        addCourse = new QPushButton(groupBox);
        addCourse->setObjectName("addCourse");
        addCourse->setGeometry(QRect(640, 178, 101, 31));
        removeCourse = new QPushButton(groupBox);
        removeCourse->setObjectName("removeCourse");
        removeCourse->setGeometry(QRect(640, 280, 111, 29));
        removed = new QLineEdit(groupBox);
        removed->setObjectName("removed");
        removed->setGeometry(QRect(70, 320, 121, 28));
        addCourse1 = new QLineEdit(groupBox);
        addCourse1->setObjectName("addCourse1");
        addCourse1->setGeometry(QRect(620, 230, 141, 28));
        removeCourse1 = new QLineEdit(groupBox);
        removeCourse1->setObjectName("removeCourse1");
        removeCourse1->setGeometry(QRect(620, 320, 141, 28));

        retranslateUi(adminstrator);

        QMetaObject::connectSlotsByName(adminstrator);
    } // setupUi

    void retranslateUi(QDialog *adminstrator)
    {
        adminstrator->setWindowTitle(QCoreApplication::translate("adminstrator", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("adminstrator", "ADMINSTRATOR", nullptr));
        label->setText(QCoreApplication::translate("adminstrator", "Adminstrator", nullptr));
        plus->setText(QCoreApplication::translate("adminstrator", "Add user", nullptr));
        removed_2->setText(QCoreApplication::translate("adminstrator", "Remove user", nullptr));
        addCourse->setText(QCoreApplication::translate("adminstrator", "add course", nullptr));
        removeCourse->setText(QCoreApplication::translate("adminstrator", "remove course", nullptr));
    } // retranslateUi

};

namespace Ui {
    class adminstrator: public Ui_adminstrator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINSTRATOR_H
