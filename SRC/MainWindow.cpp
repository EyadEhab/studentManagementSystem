#include "mainwindow.h"
#include "./ui_mainwindow.h"

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
    int index = 0;
    QString line = stream.readLine();
    QStringList parts = line.split(':');
    while (!stream.atEnd() && index < lineCount) {
    QString typef ="";
    typef = parts[2];
    ++index;
    }
    file.seek(0);
    if(typef=="instractor") {
        instructor** users = new instructor*[lineCount];
        for (int i = 0; i < lineCount; i++) {
            users[i] = new user;
        }
    }
    if(typef=="adminstrator") {
        adminstrator** users = new adminstrator*[lineCount];
        for (int i = 0; i < lineCount; i++) {
            users[i] = new user;
        }
    }
    if(typef=="student") {
        student** users = new student*[lineCount];
        for (int i = 0; i < lineCount; i++) {
            users[i] = new user;
        }
    }

    // Allocate dynamic array to hold the User structs


    // Second pass: read the lines into the array
    int index = 0;
    while (!stream.atEnd() && index < lineCount) {



        if(parts.size()>=3){
            users[index]->setUserId(parts[0]);
            users[index]->setPassword(parts[1]);
            // Assuming parts[3] is not needed for the login check
            ++index;
        }
        }
    }

    file.close();

    QString userId = ui->userId->text();
    QString password = ui->Password->text();
    bool login = false;

    // Example usage: display the parsed user data in the console
    for (int i = 0; i < lineCount; ++i) {
        if (userId == users[i]->getUserId() && password == users[i]->getPassword()) {
            login = true;
            break;
        }
    }

    // Remember to delete the dynamic array when done
    for (int i = 0; i < lineCount; i++) {
        delete users[i];
    }
    delete[] users;

    if (login)
        QMessageBox::information(this, "Login Successful", "Login successful.");
    else
        QMessageBox::information(this, "Error", "Cannot find your account, please sign up first.");
}

void MainWindow::on_Signup_clicked()
{
    Signup2 sign;
    sign.setModal(true);
    sign.exec();
}
