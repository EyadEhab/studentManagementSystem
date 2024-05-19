#include "instructor.h"
#include "ui_instructor.h"

instructor::instructor(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::instructor)
{
    ui->setupUi(this);
}

instructor::~instructor()
{
    delete ui;
}


void instructor::on_updateGrade_clicked()
{
    bool ok;
    int grade=ui->line1->text().toInt(&ok);
}
void instructor::on_getmaxgrade_clicked()
{
    max=0;
    for (int i=0;i<5;i++){
        if(max>grade[i]){
            max=grade[i];
        }
    }
    qDebug<<max<<endl;
}
void instructor::on_getmingrade_clicked()
{
    min=max;
    for (int i=0;i<5;i++){
        if(min<grade[i]){
            min=grade[i];
        }
    }
    qDebug<<min<<endl;
}
void instructor::on_getAverageGrade_clicked()
{
    average=0;
    for (int i=0;i<5;i++){
        average+=grade[i];
        }
    average/=5;

    qDebug<<average<<endl;
}









