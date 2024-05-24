#include "adminstrator.h"
#include "ui_adminstrator.h"

adminstrator::adminstrator(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::adminstrator)
{
    ui->setupUi(this);
}

adminstrator::adminstrator(QString id, QString pass) : user(id, pass), ui(new Ui::adminstrator)
{
    ui->setupUi(this);
    loadCoursesFromFile();
}

adminstrator::~adminstrator()
{
    delete ui;
}

void adminstrator::on_addCourse_clicked()
{
    QString course = ui->addCourse1->text();
    addCourse(course);
}

void adminstrator::on_removeCourse_clicked()
{
    QString course = ui->removeCourse1->text();
    removeCourse(course);
}

void adminstrator::addCourse(const QString& courseName)
{
    for (const auto& course : courses) {
        if (course.getName() == courseName) {
            qWarning() << "Course already exists!";
            return;
        }
    }
    courses.append(Course(courseName));
    qDebug() << "Course" << courseName << "added successfully.";
    saveCoursesToFile();
}

void adminstrator::removeCourse(const QString& courseName)
{
    for (int i = 0; i < courses.size(); ++i) {
        if (courses[i].getName() == courseName) {
            courses.removeAt(i);
            qDebug() << "Course" << courseName << "removed successfully.";
            saveCoursesToFile();
            return;
        }
    }
    qWarning() << "Course not found!";
}

void adminstrator::listCourses() const
{
    if (courses.isEmpty()) {
        qDebug() << "No courses available.";
        return;
    }

    qDebug() << "Courses:";
    for (const auto& course : courses) {
        qDebug() << course.getName();
    }
}

void adminstrator::saveCoursesToFile()
{
    QFile file("D:\\studentManagementSystem\\studentManagementSystem\\SRC\\courses.txt");
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        qWarning() << "Unable to open file for writing:" << file.errorString();
        return;
    }

    QTextStream out(&file);
    for (const auto& course : courses) {
        out << course.getName() << "\n";
    }

    file.close();
    qDebug() << "Courses saved to file:" << "D:\\studentManagementSystem\\studentManagementSystem\\SRC\\courses.txt";
}

void adminstrator::loadCoursesFromFile()
{
    QFile file("D:\\studentManagementSystem\\studentManagementSystem\\SRC\\courses.txt");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qWarning() << "Unable to open file for reading:" << file.errorString();
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
    qDebug() << "Courses loaded from file:" << "D:\\studentManagementSystem\\studentManagementSystem\\SRC\\courses.txt";
}
