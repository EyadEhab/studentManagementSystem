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









void student::enroll_course(const QString &courseName) {
    qDebug() << "Enrolling in course:" << courseName;

    // Get the user ID of the student
    QString userId = this->getUserId();
    qDebug() << "User ID:" << userId;

    // Open the grades file for reading and writing
    QString fname = "D:\\studentManagementSystem\\studentManagementSystem111111111 - Copy\\SRC\\Grades.txt";
    qDebug() << "1";
    QFile file(fname);
    qDebug() << "2";
    if (!file.open(QIODevice::ReadWrite | QIODevice::Text)) {
        QMessageBox::warning(nullptr, "Error", "Unable to open grades file.");
        return;
    }
    qDebug() << "3";
    QTextStream stream(&file);
    QString content;
    bool userFound = false;

    while (!stream.atEnd()) {
        QString line = stream.readLine();
        QStringList parts = line.split(':');
        qDebug() << "Reading line:" << line;

        // Check if the line corresponds to the current user
        if (parts.size() >= 1 && parts[0] == userId) {
            userFound = true;
            qDebug() << "User found, processing courses...";

            // Extract the list of enrolled courses and grades
            QStringList courses;
            for (int i = 1; i < parts.size(); i += 2) {
                courses.append(parts[i]);
            }
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

            // Add the new course to the list of courses and append a placeholder for the grade
            parts.append(courseName);
            parts.append("N/A"); // Use "N/A" as a placeholder for the grade
            qDebug() << "Updated courses:" << courses;

            // Reconstruct the line with the updated course and grade list
            line = parts.join(':');
            qDebug() << "Updated line:" << line;
        }

        content += line + '\n';
    }

    if (userFound) {
        file.resize(0); // Clear the file content
        stream << content; // Write the updated content back to the file
         QMessageBox::information(nullptr, "Done", "Course Enrolled");
    } else {
        // If the user was not found, add a new line for the user
        QString newLine = userId + ":" + courseName + ":N/A";
        content += newLine + '\n';
    }

    file.close();
}





void student::drop_course(const QString &courseName) {
    qDebug() << "Dropping course:" << courseName;

    // Get the user ID of the student
    QString userId = this->getUserId();
    qDebug() << "User ID:" << userId;

    // Open the grades file for reading and writing
    QString fname = "D:\\studentManagementSystem\\studentManagementSystem111111111 - Copy\\SRC\\Grades.txt";
    QFile file(fname);
    if (!file.open(QIODevice::ReadWrite | QIODevice::Text)) {
        QMessageBox::warning(nullptr, "Error", "Unable to open grades file.");
        return;
    }

    QTextStream stream(&file);
    QString content;
    bool userFound = false;
    bool courseDropped = false;

    while (!stream.atEnd()) {
        QString line = stream.readLine();
        QStringList parts = line.split(':');
        qDebug() << "Reading line:" << line;

        // Check if the line corresponds to the current user
        if (parts.size() >= 2 && parts[0] == userId) {
            userFound = true;
            qDebug() << "User found, processing courses...";

            // Extract the list of enrolled courses and grades
            QStringList newParts;
            newParts.append(parts[0]); // Keep the user ID
            for (int i = 1; i < parts.size(); i += 2) {
                if (parts[i] == courseName) {
                    courseDropped = true;
                    qDebug() << "Course found and will be dropped:" << parts[i];
                    continue; // Skip this course and its grade
                }
                newParts.append(parts[i]);
                newParts.append(parts[i + 1]);
            }

            // Reconstruct the line with the updated course and grade list
            line = newParts.join(':');
            qDebug() << "Updated line after dropping course:" << line;
        }

        content += line + '\n';
    }

    if (userFound) {
        if (courseDropped) {
            file.resize(0); // Clear the file content
            stream << content; // Write the updated content back to the file
            QMessageBox::information(nullptr, "Done", "Course dropped");
        } else {
            QMessageBox::warning(nullptr, "Error", "Course not found.");
        }
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
