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
    QStringList courseList = readCourseNames();

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

 student::student(const QString &userId) : m_userId(userId) {
    // Constructor implementation
}

QString student::getUserId() {
    return m_userId;
}

bool student::course_exists(const QString &courseName) {
    QString courseFile = "D:\\STUDENTproject\\studentManagementSystem\\SRC\\Courses.txt";
    QFile file(courseFile);

    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QMessageBox::warning(nullptr, "Error", "Unable to open course file.");
        return false;
    }

    QTextStream stream(&file);
    while (!stream.atEnd()) {
        QString line = stream.readLine();
        if (line.trimmed() == courseName.trimmed()) {
            file.close();
            return true;
        }
    }

    file.close();
    return false;
}


void student::enroll_course(const QString &courseName) {
    qDebug() << "Enrolling in course:" << courseName;

    // Check if the course exists
    if (!course_exists(courseName)) {
        QMessageBox::warning(nullptr, "Error", "Course does not exist.");
        return;
    }

    // Get the user ID of the student
    QString userId = this->getUserId();

    // Open the users file for reading and writing
    QString fname = "D:\\STUDENTproject\\studentManagementSystem\\SRC\\Users.txt";
    QFile file(fname);
    if (!file.open(QIODevice::ReadWrite | QIODevice::Text)) {
        QMessageBox::warning(nullptr, "Error", "Unable to open user file.");
        return;
    }

    QTextStream stream(&file);
    QString content;

    // Read each line from the users file
    while (!stream.atEnd()) {
        QString line = stream.readLine();
        QStringList parts = line.split(':');

        // Check if the line corresponds to the current user
        if (parts.size() >= 1 && parts[0] == userId) {
            // Append the new course to the user's information
            line += ":" + courseName;
        }
        content += line + '\n';
    }

    file.close();

    // Open the users file for writing
    if (file.open(QIODevice::WriteOnly | QIODevice::Truncate | QIODevice::Text)) {
        QTextStream out(&file);
        out << content;
        file.close();
        QMessageBox::information(nullptr, "Success", "Course enrolled successfully.");
    } else {
        QMessageBox::warning(nullptr, "Error", "Unable to open user file for writing.");
    }
}





void student::drop_course(const QString &courseName)
{
    qDebug() << "Dropping course:" << courseName;

    QString fname = "D:\\STUDENTproject\\studentManagementSystem\\SRC\\Users.txt";
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
    QFile file("D:\\STUDENTproject\\studentManagementSystem\\SRC\\courses.txt");

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

