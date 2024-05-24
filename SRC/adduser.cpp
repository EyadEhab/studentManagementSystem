#include "adduser.h"
#include "ui_adduser.h"

adduser::adduser(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::adduser)
{
    ui->setupUi(this);
}

adduser::~adduser()
{
    delete ui;
}

void adduser::on_signUp_4_clicked()
{
    QString fname = "D:\\studentManagementSystem\\studentManagementSystem\\SRC\\Users.txt";
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
