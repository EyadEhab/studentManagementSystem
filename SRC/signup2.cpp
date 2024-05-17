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
    QString fname = "C:\\Users\\Eyad\\OneDrive\\Documents\\stmmmmm\\Users.txt";
    QFile file(fname);
    qDebug() << "file";

    if(file.open(QIODevice::Append | QIODevice::ReadWrite)){
        qDebug() << "writing";
        QTextStream stream(&file);
        QString userId = ui->userId_4->text();
        QString userName = ui->userName_4->text();
        QString password = ui->password_4->text();
        if(ui->admin_4->isChecked()){
            kind="adminstrator";
        }
        if(ui->student_4->isChecked()){
            kind="student";
        }
        if(ui->instractur_4->isChecked()){
            kind="instractor";
        }
        stream << userId;
        stream << ":";
        stream << userName;
        stream << ":";
        stream << password;
        stream << ":";
        stream << kind;
        stream << '\n';

    }
    file.close();
    QMessageBox::information(this, "Account Saved", "You can close the window now, account saved.");

}

