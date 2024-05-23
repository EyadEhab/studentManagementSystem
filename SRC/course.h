#ifndef COURSE_H
#define COURSE_H

#include <QString>

class Course {
public:
    Course(const QString& courseName) : name(courseName) {}

    QString getName() const {
        return name;
    }

private:
    QString name;
};

#endif // COURSE_H
