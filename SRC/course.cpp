#include "Course.h"

Course::Course(const QString & course):courseName(course){}




void Course::updateGrade(student* student, float grade) {
    // Find the student in the array and update their grade
    for (int i = 0; i < studentCount; ++i) {
        if (studentGrades[i].first == student->getName()) {
            studentGrades[i].second = grade;
            return;
        }
    }
    qDebug() << "Error: Student not found.";
}
