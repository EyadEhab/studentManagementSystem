/********************************************************************************
** Form generated from reading UI file 'instructor.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INSTRUCTOR_H
#define UI_INSTRUCTOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_instructor
{
public:
    QTextBrowser *textBrowser;
    QPushButton *addCourse;
    QLineEdit *addCourse_2;
    QPushButton *removeCourse;
    QLineEdit *removeCourse_2;
    QPushButton *updateGrade;
    QLineEdit *studentid1;
    QLabel *label_7;
    QLineEdit *courseName1;
    QLineEdit *grade1;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;

    void setupUi(QDialog *instructor)
    {
        if (instructor->objectName().isEmpty())
            instructor->setObjectName("instructor");
        instructor->resize(1003, 987);
        QFont font;
        font.setBold(false);
        font.setItalic(false);
        font.setUnderline(false);
        font.setStrikeOut(false);
        instructor->setFont(font);
        instructor->setCursor(QCursor(Qt::ArrowCursor));
        instructor->setMouseTracking(false);
        textBrowser = new QTextBrowser(instructor);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(310, 0, 301, 61));
        addCourse = new QPushButton(instructor);
        addCourse->setObjectName("addCourse");
        addCourse->setGeometry(QRect(50, 110, 331, 41));
        addCourse_2 = new QLineEdit(instructor);
        addCourse_2->setObjectName("addCourse_2");
        addCourse_2->setGeometry(QRect(140, 190, 141, 31));
        removeCourse = new QPushButton(instructor);
        removeCourse->setObjectName("removeCourse");
        removeCourse->setGeometry(QRect(50, 240, 341, 41));
        removeCourse_2 = new QLineEdit(instructor);
        removeCourse_2->setObjectName("removeCourse_2");
        removeCourse_2->setGeometry(QRect(110, 300, 201, 31));
        updateGrade = new QPushButton(instructor);
        updateGrade->setObjectName("updateGrade");
        updateGrade->setGeometry(QRect(320, 370, 241, 41));
        studentid1 = new QLineEdit(instructor);
        studentid1->setObjectName("studentid1");
        studentid1->setGeometry(QRect(170, 470, 161, 26));
        label_7 = new QLabel(instructor);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(690, 530, 63, 20));
        courseName1 = new QLineEdit(instructor);
        courseName1->setObjectName("courseName1");
        courseName1->setGeometry(QRect(340, 470, 161, 24));
        grade1 = new QLineEdit(instructor);
        grade1->setObjectName("grade1");
        grade1->setGeometry(QRect(510, 470, 161, 24));
        label = new QLabel(instructor);
        label->setObjectName("label");
        label->setGeometry(QRect(220, 430, 81, 16));
        label_2 = new QLabel(instructor);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(390, 430, 81, 16));
        label_3 = new QLabel(instructor);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(560, 430, 81, 16));
        label_4 = new QLabel(instructor);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(560, 70, 441, 201));
        label_4->setPixmap(QPixmap(QString::fromUtf8("C:/Users/Yassin/Pictures/Screenshots/Screenshot 2024-05-25 221735.png")));

        retranslateUi(instructor);

        QMetaObject::connectSlotsByName(instructor);
    } // setupUi

    void retranslateUi(QDialog *instructor)
    {
        instructor->setWindowTitle(QCoreApplication::translate("instructor", "Dialog", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("instructor", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt; font-weight:700;\">Instructor </span></p></body></html>", nullptr));
        addCourse->setText(QCoreApplication::translate("instructor", "Add Course", nullptr));
        addCourse_2->setText(QString());
        removeCourse->setText(QCoreApplication::translate("instructor", "Remove course", nullptr));
        updateGrade->setText(QCoreApplication::translate("instructor", "update grade", nullptr));
        label_7->setText(QString());
        label->setText(QCoreApplication::translate("instructor", "student Id", nullptr));
        label_2->setText(QCoreApplication::translate("instructor", "course name", nullptr));
        label_3->setText(QCoreApplication::translate("instructor", "grade", nullptr));
        label_4->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class instructor: public Ui_instructor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INSTRUCTOR_H
