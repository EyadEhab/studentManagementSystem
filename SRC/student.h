#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "instructor.h"
#include "adminstrator.h"
#include "student.h"
#include <QMessageBox>
#include <QFile>
#include <QTextStream>
#include <QDebug>
#include <typeinfo>
#include <QScopedPointer>

using namespace std;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_Login_clicked()
{
    QString fname = "D:\\studentManagementSystem\\studentManagementSystem\\SRC\\Users.txt";
    QString userId = ui->userId->text();
    QString password = ui->Password->text();
    QFile file(fname);

    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QMessageBox::warning(this, "Error", "Unable to open file.");
        return;
    }

    QTextStream stream(&file);
    QStringList parts;
    QString typef;
    bool loginSuccessful = false;

    while (!stream.atEnd()) {
        QString line = stream.readLine();
        parts = line.split(':');
        if (parts.size() >= 3 && parts[0] == userId && parts[1] == password) {
            typef = parts[2];
            loginSuccessful = true;
            break;
        }
    }

    file.close();

    if (!loginSuccessful) {
        QMessageBox::information(this, "Error", "Invalid username or password.");
        return;
    }

    QScopedPointer<user> users;

    if (typef == "instructor") {
        users.reset(new instructor(userId, password));
    } else if (typef == "administrator") {
        users.reset(new adminstrator(userId, password));
    } else if (typef == "student") {
        users.reset(new student(userId, password));
    } else {
        QMessageBox::warning(this, "Error", "Unknown user type.");
        return;
    }

    QMessageBox::information(this, "Login Successful", "Login successful.");

    qDebug() << "Type of users: " << typeid(*users).name();

    if (typeid(*users) == typeid(instructor)) {
        qDebug() << "Opening instructor dialog";
        instructor* instructorDialog = static_cast<instructor*>(users.data());
        instructorDialog->setModal(true);
        instructorDialog->exec();
    } else if (typeid(*users) == typeid(adminstrator)) {
        qDebug() << "Opening adminstrator dialog";
        adminstrator* adminstratorDialog = static_cast<adminstrator*>(users.data());
        adminstratorDialog->setModal(true);
        adminstratorDialog->exec();
    } else if (typeid(*users) == typeid(student)) {
        qDebug() << "Opening student dialog";
        student* studentDialog = static_cast<student*>(users.data());
        studentDialog->setModal(true);
        studentDialog->exec();
    } else {
        QMessageBox::information(this, "Error", "Invalid username or password.");
    }

    // No need to delete users, QScopedPointer will handle it
}

void MainWindow::on_Signup_clicked()
{
    Signup2 sign;
    sign.setModal(true);
    sign.exec();
}
