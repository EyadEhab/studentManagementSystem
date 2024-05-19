#include "student.h"
#include "ui_student.h"
#include <QFile>
#include <QTextStream>
#include <QStringList>
#include <QDebug>

student::student(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::student)
{
    ui->setupUi(this);
    connect(ui->pushButton, &QPushButton::clicked, this, &MainWindow::onPushButtonClicked);
}

student::~student()
{
    delete ui;
}


QStringList MainWindow::readCourseNames(const QString &fileName) {
    QStringList courseList;
    QFile file(fileName);
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

void student::on_Next_clicked(){

    qDebug() << "Next";
    QString option = "";

    if (ui->enroll->isChecked()) {
        option = "Enroll Course";
    } else if (ui->drop->isChecked()) {
        option = "Drop Course";
    } else if (ui->viewgrade->isChecked()) {
        option = "View Grade";
    }

    QString courseName = ui->courseName->text().trimmed();
    QStringList courseList = readCourseNames("courses.txt");

    if (courseList.contains(courseName)) {
        qDebug() << "Course name exists";

        if (option == "Enroll Course") {
            enroll_course(courseName);
        } else if (option == "Drop Course") {
            drop_course(courseName);
        } else if (option == "View Grade") {
            view_grade(courseName);
        }
    }
    else {
        qDebug() << "Course does not exist";
        // Optionally, show a message to the user that the course does not exist
    }
}

void MainWindow::enroll_course(const QString &courseName) {

    qDebug() << "Enrolling in course:" << courseName;
    // reading
    QString course = ui -> courseName ->text();


    QString fname = "C:\\Users\\Eyad\\OneDrive\\Documents\\stmmmmm\\Users.txt";
    QFile file(fname);

    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QMessageBox::warning(this, "Error", "Unable to open file.");
        return;
    }

    QTextStream stream(&file);

    // First pass: count the number of valid lines
    int lineCount = 0;
    while (!stream.atEnd()) {
        QString line = stream.readLine();

        ++lineCount;
    }


    // Reset the file stream to the beginning of the file
    file.seek(0);

    // Allocate dynamic array to hold the User structs
    student* users = new student[lineCount];

    // Second pass: read the lines into the array
    int index = 0;
    while (!stream.atEnd() && index < lineCount) {
        QString line = stream.readLine();
        QStringList parts = line.split(':');
        if (parts.size() == 3) {
            users[index].userIdf = parts[0];
            users[index].passwordf = parts[1];
            users[index].typef = parts[2];

            s = parts.size();
            ++index;
        } else if(parts.size()==4){
            users[index].userIdf = parts[0];
            users[index].passwordf = parts[1];
            users[index].typef = parts[2];
            users[index].enrolledcourses[0] = parts[3];

            s = parts.size();
            ++index;
        }else if(parts.size()==5){
            users[index].userIdf = parts[0];
            users[index].passwordf = parts[1];
            users[index].typef = parts[2];
            users[index].enrolledcourses[0] = parts[3];
            users[index].enrolledcourses[1] = parts[4];

            s = parts.size();
            ++index;
        }else if(parts.size()==6){
            users[index].userIdf = parts[0];
            users[index].passwordf = parts[1];
            users[index].typef = parts[2];
            users[index].enrolledcourses[0] = parts[3];
            users[index].enrolledcourses[1] = parts[4];
            users[index].enrolledcourses[2] = parts[5];

            s = parts.size();
            ++index;
        }else if(parts.size()==7){
            users[index].userIdf = parts[0];
            users[index].passwordf = parts[1];
            users[index].typef = parts[2];
            users[index].enrolledcourses[0] = parts[3];
            users[index].enrolledcourses[1] = parts[4];
            users[index].enrolledcourses[2] = parts[5];
            users[index].enrolledcourses[3] = parts[6];

            s = parts.size();
            ++index;
       }else if(parts.size()==8){
            users[index].userIdf = parts[0];
            users[index].passwordf = parts[1];
            users[index].typef = parts[2];
            users[index].enrolledcourses[0] = parts[3];
            users[index].enrolledcourses[1] = parts[4];
            users[index].enrolledcourses[2] = parts[5];
            users[index].enrolledcourses[3] = parts[6];
            users[index].enrolledcourses[4] = parts[7];

            s = parts.size();
            ++index;
            }
        }

        else {
            qDebug() << "Skipping invalid line: " << line;
        }
    }
    // writing
    QFile file("user_data.txt");
    if (!file.open(QIODevice::ReadWrite | QIODevice::Text)) {
        qDebug() << "Could not open file for reading/writing";
        return;
    }

    QString content;
    QTextStream in(&file);
    while (!in.atEnd()) {
        QString line = in.readLine();
        QStringList parts = line.split(':');
        if (parts.size() >= 3 && parts[0] == user.userIdf) {
            line = users.userIdf + ":" + users.passwordf + ":" + users.typef + ":" + users.enrolledcourses.join(",");
        }
        content += line + "\n";
    }
    file.close();

    if (!file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        qDebug() << "Could not open file for writing";
        return;
    }

    QTextStream out(&file);
    out << content;
    file.close();
    }

}

void MainWindow::drop_course(const QString &courseName) {
    // Implement your drop course logic here
    qDebug() << "Dropping course:" << courseName;
}

void MainWindow::view_grade(const QString &courseName) {
    // Implement your view grade logic here
    qDebug() << "Viewing grade for course:" << courseName;
}
