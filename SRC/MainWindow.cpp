#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <iostream>
#include <fstream>
#include <cstdio>
#include <string>
#include <QString>
#include <QDebug>
#include<signup2.h>
#include <QDir>
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
struct User {
    QString usernamef;
    QString userIdf;
    QString passwordf;
    QString typef;
};

void MainWindow::on_Login_clicked()

{
    {

        QString userId = ui->userId->text();
        QString Password = ui->Password->text();

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
            if (line.split(':').size() == 4) {
                ++lineCount;
            }
        }

        // Reset the file stream to the beginning of the file
        file.seek(0);

        // Allocate dynamic array to hold the User structs
        User* users = new User[lineCount];

        // Second pass: read the lines into the array
        int index = 0;
        while (!stream.atEnd() && index < lineCount) {
            QString line = stream.readLine();
            QStringList parts = line.split(':');
            if (parts.size() == 4) {
                users[index].usernamef = parts[0];
                users[index].userIdf = parts[1];
                users[index].passwordf = parts[2];
                users[index].typef = parts[3];
                ++index;
            } else {
                qDebug() << "Skipping invalid line: " << line;
            }
        }

        file.close();
        bool login=false;
        // Example usage: display the parsed user data in the console
        for (int i = 0; i < lineCount; ++i) {
           if( userId==users[i].userIdf && Password==users[i].passwordf)
                login=true;
            else login=false;
        }

        // Remember to delete the dynamic array when done
        delete[] users;

        if (login)
            QMessageBox::information(this, "login successfully", "login successfully");
        else QMessageBox::information(this, "error", "cannot find your account please sign up first");
    }
    }









void MainWindow::on_Signup_clicked()
{
    qDebug() << "sign";
    Signup2 sign;
    sign.setModal(true);
    sign.exec();
}















