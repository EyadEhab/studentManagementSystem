/********************************************************************************
** Form generated from reading UI file 'student.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
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
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_student
{
public:
    QGroupBox *groupBox;
    QLabel *nameLabel;
    QLabel *idLabel;
    QTextBrowser *textBrowser;
    QTextBrowser *textBrowser_2;
    QLineEdit *courseName;
    QLabel *CourseNameLabel;
    QRadioButton *enroll;
    QRadioButton *drop;
    QRadioButton *viewGrade;
    QPushButton *next;

    void setupUi(QDialog *student)
    {
        if (student->objectName().isEmpty())
            student->setObjectName("student");
        student->resize(1184, 570);
        groupBox = new QGroupBox(student);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(70, 60, 641, 441));
        nameLabel = new QLabel(groupBox);
        nameLabel->setObjectName("nameLabel");
        nameLabel->setGeometry(QRect(110, 100, 63, 20));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        nameLabel->setFont(font);
        idLabel = new QLabel(groupBox);
        idLabel->setObjectName("idLabel");
        idLabel->setGeometry(QRect(120, 170, 51, 31));
        idLabel->setFont(font);
        textBrowser = new QTextBrowser(groupBox);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(180, 90, 271, 41));
        textBrowser_2 = new QTextBrowser(groupBox);
        textBrowser_2->setObjectName("textBrowser_2");
        textBrowser_2->setGeometry(QRect(160, 160, 271, 41));
        courseName = new QLineEdit(groupBox);
        courseName->setObjectName("courseName");
        courseName->setGeometry(QRect(60, 310, 121, 51));
        CourseNameLabel = new QLabel(groupBox);
        CourseNameLabel->setObjectName("CourseNameLabel");
        CourseNameLabel->setGeometry(QRect(70, 270, 101, 31));
        enroll = new QRadioButton(groupBox);
        enroll->setObjectName("enroll");
        enroll->setGeometry(QRect(210, 310, 112, 26));
        drop = new QRadioButton(groupBox);
        drop->setObjectName("drop");
        drop->setGeometry(QRect(350, 310, 112, 26));
        viewGrade = new QRadioButton(groupBox);
        viewGrade->setObjectName("viewGrade");
        viewGrade->setGeometry(QRect(490, 310, 112, 26));
        next = new QPushButton(groupBox);
        next->setObjectName("next");
        next->setGeometry(QRect(330, 360, 121, 41));

        retranslateUi(student);

        QMetaObject::connectSlotsByName(student);
    } // setupUi

    void retranslateUi(QDialog *student)
    {
        student->setWindowTitle(QCoreApplication::translate("student", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("student", "Student", nullptr));
        nameLabel->setText(QCoreApplication::translate("student", "Name: ", nullptr));
        idLabel->setText(QCoreApplication::translate("student", "ID:", nullptr));
        CourseNameLabel->setText(QCoreApplication::translate("student", "Course Name:", nullptr));
        enroll->setText(QCoreApplication::translate("student", "Enroll Course", nullptr));
        drop->setText(QCoreApplication::translate("student", "Drop Course", nullptr));
        viewGrade->setText(QCoreApplication::translate("student", "View Grade", nullptr));
        next->setText(QCoreApplication::translate("student", "Next", nullptr));
    } // retranslateUi

};

namespace Ui {
    class student: public Ui_student {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENT_H
