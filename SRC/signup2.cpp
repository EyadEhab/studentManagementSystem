#include "signup2.h"
#include "ui_signup2.h"

Signup2::Signup2(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Signup2)
{
    ui->setupUi(this);
}

Signup2::~Signup2()
{
    delete ui;
}

void Signup2::on_signUp_4_clicked()
{
    QString fname1 = "D:\\studentManagementSystem\\studentManagementSystem111111111 - Copy\\SRC\\Users.txt";
    QString fname2 = "D:\\studentManagementSystem\\studentManagementSystem111111111 - Copy\\SRC\\Grades.txt";

    QFile file1(fname1);
    QFile file2(fname2);

    QString userId = ui->userId_4->text().trimmed(); // Trimmed to remove leading and trailing spaces

    if (file1.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QTextStream in(&file1);
        while (!in.atEnd()) {
            QString line = in.readLine();
            QStringList parts = line.split(":");
            if (parts.size() > 0 && parts[0].trimmed() == userId) {
                QMessageBox::warning(this, "Duplicate Username", "This username is already taken. Please choose a different username.");
                file1.close();
                file2.close();
                return; // Exit the function if duplicate username found
            }
        }
        file1.close();
    } else {
        QMessageBox::warning(this, "Error", "Unable to open user file 1.");
        return; // Exit the function if unable to open the file
    }

    // If the control reaches here, it means username is unique, proceed to save the account
    if (file1.open(QIODevice::Append | QIODevice::ReadWrite) && file2.open(QIODevice::Append | QIODevice::ReadWrite)) {
        qDebug() << "writing";
        QTextStream stream1(&file1);
        QTextStream stream2(&file2);

        QString password = ui->password_4->text();
        QString kind;
        if (ui->admin_4->isChecked()) {
            kind = "adminstrator";
        } else if (ui->student_4->isChecked()) {
            kind = "student";
        } else if (ui->instractur_4->isChecked()) {
            kind = "instructor";
        }

        // Write to both files
        stream1 << userId << ":" << password << ":" << kind << '\n';
        if(kind == "student" )
            stream2 << userId << '\n';

        file1.close();
        file2.close();
        QMessageBox::information(this, "Account Saved", "You can close the window now, account saved.");
    } else {
        QMessageBox::warning(this, "Error", "Unable to open user files for writing.");
    }

}
