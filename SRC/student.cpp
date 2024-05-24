#include "student.h"
#include "ui_student.h"

student::student(const QString &userId, const QString &password, QWidget *parent)
    : QDialog(parent), user(userId, password), ui(new Ui::student)
{
    ui->setupUi(this);
}

student::~student()
{
    delete ui;
}


void student::setEnrolledCourses(const QStringList &courses)
{
    for (int i = 0; i < 5; ++i) {
        this->enrolledCourses[i] = courses[i];
    }
}



void student::on_next_clicked()
{
    qDebug() << "Next";
    QString option = "";

    if (ui->enroll->isChecked()) {
        option = "Enroll Course";
    } else if (ui->drop->isChecked()) {
        option = "Drop Course";
    } else if (ui->viewGrade->isChecked()) {
        option = "View Grade";
    }

    QString courseName = ui->courseName->text().trimmed();
    QStringList courseList = readCourseNames("D:\studentManagementSystem\studentManagementSystem\SRC\courses.txt");

    if (courseList.contains(courseName)) {
        qDebug() << "Course name exists";

        if (option == "Enroll Course") {
            enroll_course(courseName);
        } else if (option == "Drop Course") {
            drop_course(courseName);
        } else if (option == "View Grade") {
            view_grade(courseName);
        }
    } else {
        qDebug() << "Course does not exist";
    }
}

void student::enroll_course(const QString &courseName)
{
    qDebug() << "Enrolling in course:" << courseName;

    QString fname = "C:\\Users\\Eyad\\OneDrive\\Documents\\stmmmmm\\Users.txt";
    QFile file(fname);

    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QMessageBox::warning(this, "Error", "Unable to open file.");
        return;
    }

    QTextStream stream(&file);
    QString content;
    QStringList parts;
    QString userId = this->getUserId();
    bool enrolled = false;

    while (!stream.atEnd()) {
        QString line = stream.readLine();
        parts = line.split(':');

        if (parts.size() >= 4 && parts[0] == userId) {
            QStringList courses = parts.mid(3); // Extract courses starting from the 4th part
            if (courses.size() < 5 && !courses.contains(courseName)) {
                courses.append(courseName);
                parts = parts.mid(0, 3) + courses; // Combine user info with updated courses
                enrolled = true;
            }
        }

        content += parts.join(':') + '\n';
    }

    file.close();

    if (enrolled) {
        if (file.open(QIODevice::WriteOnly | QIODevice::Text)) {
            QTextStream out(&file);
            out << content;
            file.close();
            QMessageBox::information(this, "Success", "Course enrolled successfully.");
        } else {
            QMessageBox::warning(this, "Error", "Unable to open file for writing.");
        }
    } else {
        QMessageBox::warning(this, "Error", "Unable to enroll in the course.");
    }
}

void student::drop_course(const QString &courseName)
{
    qDebug() << "Dropping course:" << courseName;

    QString fname = "C:\\Users\\Eyad\\OneDrive\\Documents\\stmmmmm\\Users.txt";
    QFile file(fname);

    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QMessageBox::warning(this, "Error", "Unable to open file.");
        return;
    }

    QTextStream stream(&file);
    QString content;
    QStringList parts;
    QString userId = this->getUserId();
    bool dropped = false;

    while (!stream.atEnd()) {
        QString line = stream.readLine();
        parts = line.split(':');

        if (parts.size() >= 4 && parts[0] == userId) {
            QStringList courses = parts.mid(3); // Extract courses starting from the 4th part
            if (courses.contains(courseName)) {
                courses.removeAll(courseName);
                parts = parts.mid(0, 3) + courses; // Combine user info with updated courses
                dropped = true;
            }
        }

        content += parts.join(':') + '\n';
    }

    file.close();

    if (dropped) {
        if (file.open(QIODevice::WriteOnly | QIODevice::Text)) {
            QTextStream out(&file);
            out << content;
            file.close();
            QMessageBox::information(this, "Success", "Course dropped successfully.");
        } else {
            QMessageBox::warning(this, "Error", "Unable to open file for writing.");
        }
    } else {
        QMessageBox::warning(this, "Error", "Unable to drop the course.");
    }
}

void student::view_grade(const QString &courseName)
{
    qDebug() << "Viewing grade for course:" << courseName;
    // Implement the logic to view grade for the given course
}

QStringList student::readCourseNames()
{
    QStringList courseList;
    QFile file("D:\\studentManagementSystem\\studentManagementSystem\\SRC\\courses.txt");

    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qDebug() << "Could not open file for reading";
        return courseList;
    }

    QTextStream in(&file);
    while (!in.atEnd()) {
        QString line = in.readLine();
        courseList.append(line.trimmed());
    }
    file.close();
    return courseList;
}



