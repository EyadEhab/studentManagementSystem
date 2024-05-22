#include "Course.h"

void Course::addStudent(student* student) {
    // Check if the student array is full
    if (studentCount >= MAX_STUDENTS) {
        qDebug() << "Error: Maximum number of students reached.";
        return;
    }

    // Add the student to the studentGrades array
    studentGrades[studentCount] = std::make_pair(student->getName(), 0.0f); // Assuming student has a getName() method
    studentCount++;
}

void Course::removeStudent(student* student) {
    // Find the student in the array and remove them
    for (int i = 0; i < studentCount; ++i) {
        if (studentGrades[i].first == student->getName()) {
            // Shift the elements after the removed student
            for (int j = i; j < studentCount - 1; ++j) {
                studentGrades[j] = studentGrades[j + 1];
            }
            studentCount--;
            return;
        }
    }
    qDebug() << "Error: Student not found.";
}

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
