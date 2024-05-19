#ifndef COURSE_H
#define COURSE_H
#include <QMainWindow>
#include <iostream>
#include <fstream>
#include <cstdio>
#include <string>
#include <QString>
#include <QDebug>
#include<signup2.h>
#include <QDir>
#include <user.h>
#include <QTextStream>
#include <QMainWindow>
#include <QDialog>
#include <QSpinBox>
#include <QTextEdit>
#include <QComboBox>
#include <QPushButton>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QFile>
#include <QIODevice>
#include <QTextStream>
#include <utility>
#include <string>

class Course
{
public:
    Course();
    void addStudent(Student*);
    void removeStudent(Student*);
    updataGrade(Student* , float);

private:
    QString courseName;
    QString courseCode;
    QString instuctorId[MAX_INSTRUCTORS];
    int numInstructors;
    int credits;
    pair<QString, float> studentGrades[MAX_STUDENTS];
    int numStudents;


};

#endif // COURSE_H
