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

    QStringList parts;
    QString typef;
    while (!stream.atEnd()) {
        QString line = stream.readLine();
        parts = line.split(':');
        if (parts.size() >= 4) {
            typef = parts[3];
            break;
        }
    }

    // Determine the type and allocate users array accordingly
    User** users = nullptr;
    if (typef == "instructor") {
        users = new Instructor*[lineCount];
    } else if (typef == "administrator") {
        users = new Administrator*[lineCount];
    } else if (typef == "student") {
        users = new Student*[lineCount];
    } else {
        QMessageBox::warning(this, "Error", "Unknown user type.");
        return;
    }

    for (int i = 0; i < lineCount; i++) {
        if (typef == "instructor") {
            users[i] = new Instructor;
        } else if (typef == "administrator") {
            users[i] = new Administrator;
        } else if (typef == "student") {
            users[i] = new Student;
        }
    }

    // Second pass: read the lines into the array
    file.seek(0);
    int index = 0;
    while (!stream.atEnd() && index < lineCount) {
        QString line = stream.readLine();
        parts = line.split(':');
        if (parts.size() >= 4) {
            users[index]->setUserId(parts[0]);
            users[index]->setPassword(parts[1]);
            users[index]->setUserName(parts[2]);
            // Assuming parts[3] is the type and already used
            ++index;
        } else {
            qDebug() << "Skipping invalid line: " << line;
        }
    }

    file.close();

    QString userId = ui->userId->text();
    QString password = ui->Password->text();
    bool login = false;

    // Check login credentials
    for (int i = 0; i < lineCount; ++i) {
        if (userId == users[i]->getUserId() && password == users[i]->getPassword()) {
            login = true;
            break;
        }
    }

    // Clean up dynamic memory
    for (int i = 0; i < lineCount; i++) {
        delete users[i];
    }
    delete[] users;

    if (login) {
        QMessageBox::information(this, "Login Successful", "Login successful.");
    } else {
        QMessageBox::information(this, "Error", "Cannot find your account, please sign up first.");
    }
}

void MainWindow::on_Signup_clicked()
{
    Signup2 sign;
    sign.setModal(true);
    sign.exec();
}
