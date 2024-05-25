/********************************************************************************
** Form generated from reading UI file 'student.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENT_H
#define UI_STUDENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_student
{
public:
    QGroupBox *groupBox;
    QLineEdit *courseName;
    QLabel *CourseNameLabel;
    QRadioButton *enroll;
    QRadioButton *drop;
    QRadioButton *viewGrade;
    QPushButton *next;
    QLabel *label;

    void setupUi(QDialog *student)
    {
        if (student->objectName().isEmpty())
            student->setObjectName("student");
        student->resize(1184, 570);
        groupBox = new QGroupBox(student);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(0, -10, 2101, 611));
        courseName = new QLineEdit(groupBox);
        courseName->setObjectName("courseName");
        courseName->setGeometry(QRect(250, 120, 121, 51));
        CourseNameLabel = new QLabel(groupBox);
        CourseNameLabel->setObjectName("CourseNameLabel");
        CourseNameLabel->setGeometry(QRect(260, 90, 101, 31));
        enroll = new QRadioButton(groupBox);
        enroll->setObjectName("enroll");
        enroll->setGeometry(QRect(50, 250, 112, 26));
        drop = new QRadioButton(groupBox);
        drop->setObjectName("drop");
        drop->setGeometry(QRect(230, 250, 112, 26));
        viewGrade = new QRadioButton(groupBox);
        viewGrade->setObjectName("viewGrade");
        viewGrade->setGeometry(QRect(410, 250, 112, 26));
        next = new QPushButton(groupBox);
        next->setObjectName("next");
        next->setGeometry(QRect(240, 350, 121, 41));
        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setGeometry(QRect(580, -10, 1471, 601));
        label->setPixmap(QPixmap(QString::fromUtf8("C:/Users/Yassin/Pictures/Screenshots/Screenshot 2024-05-25 220912.png")));

        retranslateUi(student);

        QMetaObject::connectSlotsByName(student);
    } // setupUi

    void retranslateUi(QDialog *student)
    {
        student->setWindowTitle(QCoreApplication::translate("student", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("student", "Student", nullptr));
        CourseNameLabel->setText(QCoreApplication::translate("student", "Course Name:", nullptr));
        enroll->setText(QCoreApplication::translate("student", "Enroll Course", nullptr));
        drop->setText(QCoreApplication::translate("student", "Drop Course", nullptr));
        viewGrade->setText(QCoreApplication::translate("student", "View Grade", nullptr));
        next->setText(QCoreApplication::translate("student", "Next", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class student: public Ui_student {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENT_H
