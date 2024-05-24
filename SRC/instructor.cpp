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
    // Open the file in Append mode
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
    bool found = true;

    while (!stream.atEnd()) {
        QString line = stream.readLine();
        parts = line.split(':');

        if (parts.size() >= 4 && parts[0] == userId) {
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
}



void instructor::on_removeCourse_clicked()
{
    QString courseName = ui->removeCourse_2->text();
    qDebug() << "removing course:" << courseName;

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
    bool found = false;

    while (!stream.atEnd()) {
        QString line = stream.readLine();
        parts = line.split(':');

        if (parts.size() >= 4 && parts[0] == userId) {
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


void instructor::on_updateGrade_clicked()
{
    QString studentID = ui->studentid1->text();
    QString courseName = ui->courseName1->text();
    QString newGrade = ui->grade1->text();


}



