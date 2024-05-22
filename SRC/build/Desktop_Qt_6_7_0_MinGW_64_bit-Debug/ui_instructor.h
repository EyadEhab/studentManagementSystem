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
    QPushButton *addMaterial;
    QLineEdit *addMaterial_2;
    QPushButton *removeMaterial;
    QLineEdit *removeMaterial_2;
    QLineEdit *addCourse_3;
    QLineEdit *addMaterial_3;
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

    void setupUi(QDialog *instructor)
    {
        if (instructor->objectName().isEmpty())
            instructor->setObjectName("instructor");
        instructor->resize(1003, 987);
        textBrowser = new QTextBrowser(instructor);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(360, 0, 301, 61));
        addCourse = new QPushButton(instructor);
        addCourse->setObjectName("addCourse");
        addCourse->setGeometry(QRect(80, 130, 171, 41));
        addCourse_2 = new QLineEdit(instructor);
        addCourse_2->setObjectName("addCourse_2");
        addCourse_2->setGeometry(QRect(80, 190, 91, 31));
        removeCourse = new QPushButton(instructor);
        removeCourse->setObjectName("removeCourse");
        removeCourse->setGeometry(QRect(80, 240, 171, 41));
        removeCourse_2 = new QLineEdit(instructor);
        removeCourse_2->setObjectName("removeCourse_2");
        removeCourse_2->setGeometry(QRect(80, 300, 91, 31));
        addMaterial = new QPushButton(instructor);
        addMaterial->setObjectName("addMaterial");
        addMaterial->setGeometry(QRect(430, 120, 201, 41));
        addMaterial_2 = new QLineEdit(instructor);
        addMaterial_2->setObjectName("addMaterial_2");
        addMaterial_2->setGeometry(QRect(430, 180, 91, 31));
        removeMaterial = new QPushButton(instructor);
        removeMaterial->setObjectName("removeMaterial");
        removeMaterial->setGeometry(QRect(430, 240, 201, 41));
        removeMaterial_2 = new QLineEdit(instructor);
        removeMaterial_2->setObjectName("removeMaterial_2");
        removeMaterial_2->setGeometry(QRect(430, 300, 91, 31));
        addCourse_3 = new QLineEdit(instructor);
        addCourse_3->setObjectName("addCourse_3");
        addCourse_3->setGeometry(QRect(190, 190, 91, 28));
        addMaterial_3 = new QLineEdit(instructor);
        addMaterial_3->setObjectName("addMaterial_3");
        addMaterial_3->setGeometry(QRect(540, 180, 91, 28));
        getmingrade = new QPushButton(instructor);
        getmingrade->setObjectName("getmingrade");
        getmingrade->setGeometry(QRect(80, 480, 161, 41));
        updateGrade = new QPushButton(instructor);
        updateGrade->setObjectName("updateGrade");
        updateGrade->setGeometry(QRect(80, 360, 161, 41));
        lineEdit_5 = new QLineEdit(instructor);
        lineEdit_5->setObjectName("lineEdit_5");
        lineEdit_5->setGeometry(QRect(430, 530, 91, 26));
        line1 = new QLineEdit(instructor);
        line1->setObjectName("line1");
        line1->setGeometry(QRect(80, 420, 91, 26));
        line2 = new QLineEdit(instructor);
        line2->setObjectName("line2");
        line2->setGeometry(QRect(430, 420, 91, 26));
        getmaxgrade = new QPushButton(instructor);
        getmaxgrade->setObjectName("getmaxgrade");
        getmaxgrade->setGeometry(QRect(430, 360, 201, 41));
        line3 = new QLineEdit(instructor);
        line3->setObjectName("line3");
        line3->setGeometry(QRect(80, 540, 91, 26));
        getAverageGrade = new QPushButton(instructor);
        getAverageGrade->setObjectName("getAverageGrade");
        getAverageGrade->setGeometry(QRect(430, 470, 201, 41));
        label = new QLabel(instructor);
        label->setObjectName("label");
        label->setGeometry(QRect(90, 170, 63, 20));
        label_3 = new QLabel(instructor);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(200, 170, 81, 20));

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
        addMaterial->setText(QCoreApplication::translate("instructor", " Add Material", nullptr));
        removeMaterial->setText(QCoreApplication::translate("instructor", "Remove Material", nullptr));
        addCourse_3->setText(QString());
        getmingrade->setText(QCoreApplication::translate("instructor", "Minimum grade", nullptr));
        updateGrade->setText(QCoreApplication::translate("instructor", "update grade", nullptr));
        getmaxgrade->setText(QCoreApplication::translate("instructor", "Maximum grade", nullptr));
        getAverageGrade->setText(QCoreApplication::translate("instructor", "Average grade", nullptr));
        label->setText(QCoreApplication::translate("instructor", "Course", nullptr));
        label_3->setText(QCoreApplication::translate("instructor", "credit hours", nullptr));
    } // retranslateUi

};

namespace Ui {
    class instructor: public Ui_instructor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INSTRUCTOR_H
