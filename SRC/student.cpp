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






bool student::course_exists(const QString &courseName) {


QString fname = "D:\\studentManagementSystem\\studentManagementSystem111111111 - Copy\\SRC\\courses.txt";
QFile file(fname);


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
    qDebug() << "User ID:" << userId;

    // Open the users file for reading and writing
    QString fname = "D:\\studentManagementSystem\\studentManagementSystem111111111 - Copy\\SRC\\Grades.txt";
    QFile file(fname);
    if (!file.open(QIODevice::ReadWrite | QIODevice::Text)) {
        QMessageBox::warning(nullptr, "Error", "Unable to open user file.");
        return;
    }

    QTextStream stream(&file);
    QString content;
    bool userFound = false;

    while (!stream.atEnd()) {
        QString line = stream.readLine();
        QStringList parts = line.split(':');
        qDebug() << "Reading line:" << line;

        // Check if the line corresponds to the current user
        if (parts.size() >= 3 && parts[0] == userId) {
            userFound = true;
            qDebug() << "User found, processing courses...";

            // Extract the list of enrolled courses
            QStringList courses = parts.mid(3);
            qDebug() << "Current courses:" << courses;

            // Check if the course is already enrolled
            if (courses.contains(courseName)) {
                QMessageBox::warning(nullptr, "Error", "Already enrolled in this course.");
                file.close();
                return;
            }

            // Check if the student is already enrolled in 5 courses
            if (courses.size() >= 5) {
                QMessageBox::warning(nullptr, "Error", "Cannot enroll in more than 5 courses.");
                file.close();
                return;
            }

            // Add the new course to the list of courses
            courses.append(courseName);
            qDebug() << "Updated courses:" << courses;

            // Reconstruct the line with the updated course list
            line = parts[0] + ':' + parts[1] + ':' + parts[2];
            for (const QString& course : courses) {
                line += ':' + course;
            }
            qDebug() << "Updated line:" << line;
        }

        content += line + '\n';
    }

    if (userFound) {
        file.resize(0); // Clear the file content
        stream << content; // Write the updated content back to the file
        QMessageBox::warning(nullptr, "Enrolled", "enrolled successfully");
    } else {
        QMessageBox::warning(nullptr, "Error", "User not found.");
    }

    file.close();
}








void student::drop_course(const QString &courseName) {
    qDebug() << "Dropping course:" << courseName;

    // Get the user ID of the student
    QString userId = this->getUserId();

    // Open the users file for reading and writing
    QString fname = "D:\\studentManagementSystem\\studentManagementSystem111111111 - Copy\\SRC\\Grades.txt";
    QFile file(fname);
    if (!file.open(QIODevice::ReadWrite | QIODevice::Text)) {
        QMessageBox::warning(nullptr, "Error", "Unable to open user file.");
        return;
    }

    QTextStream stream(&file);
    QString content;
    bool userFound = false;

    // Read each line from the users file
    while (!stream.atEnd()) {
        QString line = stream.readLine();
        QStringList parts = line.split(':');

        // Check if the line corresponds to the current user
        if (parts.size() >= 3 && parts[0] == userId) {
            userFound = true;

            // Extract the list of enrolled courses
            QStringList courses = parts.mid(3);

            // Remove the course if it exists
            if (!courses.contains(courseName)) {
                QMessageBox::warning(nullptr, "Error", "Not enrolled in this course.");
                file.close();
                return;
            }

            courses.removeAll(courseName);

            // Reconstruct the line with the updated course list
            line = parts[0] + ':' + parts[1] + ':' + parts[2];
            for (const QString& course : courses) {
                line += ':' + course;
            }
        }

        content += line + '\n';
    }

    // If the user was found, rewrite the file with updated content
    if (userFound) {
        file.resize(0); // Clear the file
        stream << content;
        QMessageBox::warning(nullptr, "Dropped", "Dropped Successfully");
    } else {
        QMessageBox::warning(nullptr, "Error", "User not found.");
    }

    file.close();
}

void student::view_grade(const QString &courseName)
{
    qDebug() << "Viewing grade for course:" << courseName;
    // Implement the logic to view grade for the given course
}

QStringList student::readCourseNames()
{
    QStringList courseList;
    QFile file("D:\\studentManagementSystem\\studentManagementSystem111111111 - Copy\\SRC\\courses.txt");

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
