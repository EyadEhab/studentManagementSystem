#ifndef COURSE_H
#define COURSE_H

#include <QString>
#include <QDebug>
#include <utility>
#include <string>
#include "student.h"

const int MAX_STUDENTS = 100;

class Course
{
public:
    Course(const QString& name = "") : courseName(name) {}

    void addStudent(student* student);
    void removeStudent(student* student);
    void updateGrade(student* student, float grade);

private:
    QString courseName;
    std::pair<QString, float> studentGrades[MAX_STUDENTS];
};

#endif // COURSE_H
