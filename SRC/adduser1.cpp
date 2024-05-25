#include "adduser1.h"
#include "ui_adduser1.h"

adduser1::adduser1(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::adduser)
{
    ui->setupUi(this);
}

adduser1::~adduser1()
{
    delete ui;
}

void adduser1::on_signUp_4_clicked()
{
    QString fname = "D:\\studentManagementSystem\\studentManagementSystem111111111 - Copy\\SRC\\Users.txt";
    QFile file(fname);


    if(file.open(QIODevice::Append | QIODevice::ReadWrite)){
        qDebug() << "writing";
        QTextStream stream(&file);
        QString userId = ui->userId_4->text();
        QString password = ui->password_4->text();
        QString kind;
        if(ui->admin_4->isChecked()){
            kind="adminstrator";
        }
        if(ui->student_4->isChecked()){
            kind="student";
        }
        if(ui->instractur_4->isChecked()){
            kind="instructor";
        }
        stream << userId;
        stream << ":";
        stream << password;
        stream << ":";
        stream << kind;
        stream << '\n';

    }
    file.close();
    QMessageBox::information(this, "Account Saved", "You can close the window now, account saved.");
}
