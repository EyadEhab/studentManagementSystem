/********************************************************************************
** Form generated from reading UI file 'instructor.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
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
    QLineEdit *addCourse_3;
    QPushButton *getmingrade;
    QPushButton *updateGrade;
    QLineEdit *lineEdit_5;
    QLineEdit *line1;
    QLineEdit *line2;
    QPushButton *getmaxgrade;
    QLineEdit *line3;
    QPushButton *getAverageGrade;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;

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
        addCourse_2->setGeometry(QRect(50, 190, 141, 31));
        removeCourse = new QPushButton(instructor);
        removeCourse->setObjectName("removeCourse");
        removeCourse->setGeometry(QRect(50, 240, 341, 41));
        removeCourse_2 = new QLineEdit(instructor);
        removeCourse_2->setObjectName("removeCourse_2");
        removeCourse_2->setGeometry(QRect(110, 300, 201, 31));
        addCourse_3 = new QLineEdit(instructor);
        addCourse_3->setObjectName("addCourse_3");
        addCourse_3->setGeometry(QRect(230, 190, 151, 28));
        getmingrade = new QPushButton(instructor);
        getmingrade->setObjectName("getmingrade");
        getmingrade->setGeometry(QRect(600, 370, 241, 41));
        updateGrade = new QPushButton(instructor);
        updateGrade->setObjectName("updateGrade");
        updateGrade->setGeometry(QRect(600, 100, 241, 41));
        lineEdit_5 = new QLineEdit(instructor);
        lineEdit_5->setObjectName("lineEdit_5");
        lineEdit_5->setGeometry(QRect(650, 440, 161, 26));
        line1 = new QLineEdit(instructor);
        line1->setObjectName("line1");
        line1->setGeometry(QRect(650, 190, 161, 26));
        line2 = new QLineEdit(instructor);
        line2->setObjectName("line2");
        line2->setGeometry(QRect(650, 550, 161, 26));
        line2->setCursor(QCursor(Qt::ArrowCursor));
        line2->setMouseTracking(false);
        getmaxgrade = new QPushButton(instructor);
        getmaxgrade->setObjectName("getmaxgrade");
        getmaxgrade->setGeometry(QRect(600, 250, 241, 41));
        line3 = new QLineEdit(instructor);
        line3->setObjectName("line3");
        line3->setGeometry(QRect(650, 320, 161, 26));
        getAverageGrade = new QPushButton(instructor);
        getAverageGrade->setObjectName("getAverageGrade");
        getAverageGrade->setGeometry(QRect(600, 480, 241, 41));
        label = new QLabel(instructor);
        label->setObjectName("label");
        label->setGeometry(QRect(72, 160, 91, 20));
        label_3 = new QLabel(instructor);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(270, 160, 81, 20));
        label_2 = new QLabel(instructor);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(170, 280, 101, 20));
        label_4 = new QLabel(instructor);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(690, 170, 81, 20));
        label_5 = new QLabel(instructor);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(690, 300, 91, 20));
        label_6 = new QLabel(instructor);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(690, 420, 81, 20));
        label_7 = new QLabel(instructor);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(690, 530, 63, 20));
        label_8 = new QLabel(instructor);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(690, 530, 81, 20));

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
        addCourse->setText(QCoreApplication::translate("instructor", "Add Course , Credit hour", nullptr));
        addCourse_2->setText(QString());
        removeCourse->setText(QCoreApplication::translate("instructor", "Remove course", nullptr));
        addCourse_3->setText(QString());
        getmingrade->setText(QCoreApplication::translate("instructor", "Minimum grade", nullptr));
        updateGrade->setText(QCoreApplication::translate("instructor", "update grade", nullptr));
        getmaxgrade->setText(QCoreApplication::translate("instructor", "Maximum grade", nullptr));
        getAverageGrade->setText(QCoreApplication::translate("instructor", "Average grade", nullptr));
        label->setText(QCoreApplication::translate("instructor", "Course name", nullptr));
        label_3->setText(QCoreApplication::translate("instructor", "credit hours", nullptr));
        label_2->setText(QCoreApplication::translate("instructor", "Course name", nullptr));
        label_4->setText(QCoreApplication::translate("instructor", "New.grade", nullptr));
        label_5->setText(QCoreApplication::translate("instructor", "MAX. Grade", nullptr));
        label_6->setText(QCoreApplication::translate("instructor", "Min.Grade", nullptr));
        label_7->setText(QString());
        label_8->setText(QCoreApplication::translate("instructor", "Avg.Grade", nullptr));
    } // retranslateUi

};

namespace Ui {
    class instructor: public Ui_instructor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INSTRUCTOR_H
