#include "adminstrator.h"
#include "ui_adminstrator.h"
#include "adduser.h"


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
    QFile file("D:\\studentManagementSystem\\studentManagementSystem111111111 - Copy\\SRC\\courses.txt");
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        qWarning() << "Unable to open file for writing:" << file.errorString();
        return;
    }

    QTextStream out(&file);
    for (const auto& course : courses) {
        out << course.getName() << "\n";
    }

    file.close();
    qDebug() << "Courses saved to file:" << "D:\\studentManagementSystem\\studentManagementSystem111111111 - Copy\\SRC\\courses.txt";
}

void adminstrator::loadCoursesFromFile()
{
    QFile file("D:\\studentManagementSystem\\studentManagementSystem111111111 - Copy\\SRC\\courses.txt");
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
    qDebug() << "Courses loaded from file:" << "D:\\studentManagementSystem\\studentManagementSystem111111111 - Copy\\SRC\\courses.txt";
}




void adminstrator::on_removeUser_clicked()
{
    QString removeuser = ui->removed->text();
    QString fname = "D:\\studentManagementSystem\\studentManagementSystem111111111 - Copy\\SRC\\Users.txt";
    QFile file(fname);

    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QMessageBox::warning(this, "Error", "Unable to open file.");
        return;
    }

    QTextStream stream(&file);
    QStringList parts;
    QString typef;
    bool account = false;

    while (!stream.atEnd()) {
        QString line = stream.readLine();
        parts = line.split(':');
        if (parts.size() >= 3 && parts[0] == removeuser) {
            typef = parts[2];
            account = true;
            break;
        }
    }

    file.close();

    if (!account) {
        QMessageBox::information(this, "Error", "Invalid username or password.");
        return;
    }
    // write file new users



    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QMessageBox::warning(this, "Error", "Unable to open file.");
        return;
    }


    QString content;


    bool removed = false;

    while (!stream.atEnd()) {
        QString line = stream.readLine();
        parts = line.split(':');

        if (parts.size() >= 3 && parts[0] == removeuser) {
            content += "";
            removed = true;

        }else content += parts.join(':') + '\n';


    }

    file.close();

    if (removed) {
        if (file.open(QIODevice::WriteOnly | QIODevice::Text)) {
            qDebug() << "removed done writing now";
            QTextStream out(&file);
            out << content;
            file.close();
            QMessageBox::information(this, "Success", "User Removed successfully.");
        } else {
            QMessageBox::warning(this, "Error", "Unable to open file for writing.");
        }
    } else {
        QMessageBox::warning(this, "Error", "Unable to enroll in the course.");
    }
}







void adminstrator::on_adduser_clicked()
{
    qDebug() << "adduser";
    adduser adduser;
    adduser.setModal(true);
    adduser.exec();
}

