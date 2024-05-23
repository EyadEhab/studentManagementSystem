#include "adminstrator.h"
#include "ui_adminstrator.h"

adminstrator::adminstrator(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::adminstrator)
{
    ui->setupUi(this);
    fname = "D:\\studentManagementSystem\\studentManagementSystem\\SRC\\courses.txt";
    loadCoursesFromFile(fname);
}

adminstrator::~adminstrator()
{
    delete ui;
}

void adminstrator::on_addCourse_clicked()
{
    QString course = ui->addCourse1->text();
    addCourse(course);
    saveCoursesToFile(fname);
}

void adminstrator::on_removeCourse_clicked()
{
    QString course = ui->removeCourse1->text();
    removeCourse(course);
    saveCoursesToFile(fname);
}

void adminstrator::addCourse(const QString& courseName) {
    for (const auto& course : courses) {
        if (course.getName() == courseName) {
            qWarning() << "Course already exists!";
            return;
        }
    }
    courses.append(Course(courseName));
    qDebug() << "Course" << courseName << "added successfully.";
}

void adminstrator::removeCourse(const QString& courseName) {
    for (int i = 0; i < courses.size(); ++i) {
        if (courses[i].getName() == courseName) {
            courses.removeAt(i);
            qDebug() << "Course" << courseName << "removed successfully.";
            return;
        }
    }
    qWarning() << "Course not found!";
}

void adminstrator::listCourses() const {
    if (courses.isEmpty()) {
        qDebug() << "No courses available.";
        return;
    }

    qDebug() << "Courses:";
    for (const auto& course : courses) {
        qDebug() << course.getName();
    }
}

void adminstrator::saveCoursesToFile(const QString& fileName) const {
    QFile file(fileName);
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text | QIODevice::Truncate)) {
        qWarning() << "Cannot open file for writing:" << file.errorString();
        return;
    }

    QTextStream out(&file);
    for (const auto& course : courses) {
        out << course.getName() << "\n";
    }

    file.close();
    qDebug() << "Courses saved to file:" << fileName;
}

void adminstrator::loadCoursesFromFile(const QString& fileName) {
    QFile file(fileName);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qWarning() << "Cannot open file for reading:" << file.errorString();
        return;
    }

    QTextStream in(&file);
    while (!in.atEnd()) {
        QString line = in.readLine().trimmed();
        if (!line.isEmpty()) {
            bool courseExists = false;
            for (const auto& course : courses) {
                if (course.getName() == line) {
                    courseExists = true;
                    break;
                }
            }
            if (!courseExists) {
                courses.append(Course(line));
            }
        }
    }

    file.close();
    qDebug() << "Courses loaded from file:" << fileName;
}
