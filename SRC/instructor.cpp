#include "instructor.h"
#include "ui_instructor.h"


instructor::instructor(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::instructor)
{
    ui->setupUi(this);
}
instructor::instructor(QString id, QString pass): user(id , pass), ui(new Ui::instructor)
{
    ui->setupUi(this);
}

instructor::~instructor()
{
    delete ui;
}



void instructor::on_addCourse_clicked()
{
    QString courseName = ui->addCourse_2->text();
    QStringList courseList = readCourseNames();

    if (courseList.contains(courseName)) {
        qDebug() << "Course name exists";
    // Open the file in Append mode
    QString fname = "D:\\studentManagementSystem\\studentManagementSystem111111111 - Copy\\SRC\\Users.txt";
    QFile file(fname);

    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QMessageBox::warning(this, "Error", "Unable to open file.");
        return;
    }
    QTextStream stream(&file);
    QString content;
    QStringList parts;
    QString userId = this->getUserId();
    bool found = true;

    while (!stream.atEnd()) {
        QString line = stream.readLine();
        parts = line.split(':');

        if (parts.size() >= 3 && parts[0] == userId) {
            QStringList courses = parts.mid(3); // Extract courses starting from the 4th part
            if (courses.size() < 5 && !courses.contains(courseName)) {
                courses.append(courseName);
                parts = parts.mid(0, 3) + courses; // Combine user info with updated courses
                found = false;
            }
        }

        content += parts.join(':') + '\n';
    }

    file.close();


    if (!found) {
        if (file.open(QIODevice::WriteOnly | QIODevice::Text)) {
            QTextStream out(&file);
            out << content;
            file.close();
            QMessageBox::information(this, "Success", "Course added successfully.");
        } else {
            QMessageBox::warning(this, "Error", "Unable to open file for writing.");
        }
    } else {
        QMessageBox::warning(this, "Error", "Unable to add in the course.");
    }
}else {
        QMessageBox::warning(this, "Error", "course doesnt exist");
}
}


void instructor::on_removeCourse_clicked()
{
    QString courseName = ui->removeCourse_2->text();
    qDebug() << "removing course:" << courseName;

    QString fname = "D:\\studentManagementSystem\\studentManagementSystem111111111 - Copy\\SRC\\Users.txt";
    QFile file(fname);

    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QMessageBox::warning(this, "Error", "Unable to open file.");
        return;
    }

    QTextStream stream(&file);
    QString content;
    QStringList parts;
    QString userId = this->getUserId();
    bool found = false;

    while (!stream.atEnd()) {
        QString line = stream.readLine();
        parts = line.split(':');

        if (parts.size() >= 3 && parts[0] == userId) {
            QStringList courses = parts.mid(3); // Extract courses starting from the 4th part
            if (courses.contains(courseName)) {
                courses.removeAll(courseName);
                parts = parts.mid(0, 3) + courses; // Combine user info with updated courses
                found = true;
            }
        }

        content += parts.join(':') + '\n';
    }

    file.close();

    if (found) {
        if (file.open(QIODevice::WriteOnly | QIODevice::Text)) {
            QTextStream out(&file);
            out << content;
            file.close();
            QMessageBox::information(this, "Success", "Course removed successfully.");
        } else {
            QMessageBox::warning(this, "Error", "Unable to open file for writing.");
        }
    } else {
        QMessageBox::warning(this, "Error", "Unable to remove the course.");
        }
    }


void instructor::add_grade(const QString &studentId, const QString &courseName, const QString &grade) {
    qDebug() << "Adding or updating grade to course:" << courseName << "for student ID:" << studentId << "Grade:" << grade;

    // Open the grades file for reading and writing
    QString fname = "D:\\studentManagementSystem\\studentManagementSystem111111111 - Copy\\SRC\\Grades.txt";
    QFile file(fname);
    if (!file.open(QIODevice::ReadWrite | QIODevice::Text)) {
        QMessageBox::warning(this, "Error", "Unable to open grades file.");
        return;
    }

    QTextStream stream(&file);
    QString content;
    bool studentFound = false;

    while (!stream.atEnd()) {
        QString line = stream.readLine();
        QStringList parts = line.split(':');

        // Check if the line corresponds to the student
        if (parts.size() >= 1 && parts[0] == studentId) {
            studentFound = true;
            qDebug() << "Student found, processing grades...";

            // Iterate over the courses and grades
            for (int i = 1; i < parts.size(); i += 2) {
                if (parts[i] == courseName) {
                    // Update the grade if the course already exists
                    parts[i + 1] = grade;
                    break;
                }
            }

            // Reconstruct the line with the updated course and grade list
            line = parts.join(':');
            qDebug() << "Updated line:" << line;
        }

        content += line + '\n';
    }

    if (studentFound) {
        file.resize(0); // Clear the file content
        stream << content; // Write the updated content back to the file
        QMessageBox::information(this, "Grade Added", "Grade added or updated successfully.");
    } else {
        QMessageBox::warning(this, "Error", "Student not found.");
    }

    file.close();
}



void instructor::on_updateGrade_clicked()
{
    QString studentID = ui->studentid1->text();
    QString courseName = ui->courseName1->text();
    QString newGrade = ui->grade1->text();
    add_grade(studentID,courseName,newGrade);

}


QStringList instructor::readCourseNames()
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


