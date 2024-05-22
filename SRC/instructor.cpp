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

void instructor::on_addCourse_clicked()
{
    course obj(arr[max_course])(QString instructorId,QString instructorname,QString instructorID);

 QString subject = ui->addCourse_2->currentText();
 QString courses=ui->addCourse_3->currentText();

  int size = courses.size();

    QString* subjectArray = new QString[size];


    for (int i = 0; i < size; ++i) {
        subjectArray[i] = courses[i];
    }

    delete[] subjectArray;

        }







void instructor::on_removeCourse_clicked()
{
   QString courseName=ui->removeCourse_2->text();

    int size[courses];
   for( int i=0 ; i<size;i++)
        if (course[i]==courseName)
           QString arr[new_courses]=course.slice(0,i).concat(course.slice(i+1));


}




void instructor::on_addMaterial_clicked()
{
    Material obj(arr[max_material])(QString MaterialName,QString content);
    QString subject=ui->addMaterial_2>text();
    QString courses=ui->addMaterial_3>text();

}


void instructor::on_removeMaterial_clicked()
{
    QString MaterialName=ui->removeMaterial_2->text();

    int size[Materials];
    for( int i=0 ; i<size;i++)
        if (mateial[i]==MaterialName)
            QString arr[new_materials]=Material.slice(0,i).concat(Material.slice(i+1));
}
void instructor::on_updateGrade_clicked()
{
    bool ok;
    int grade=ui->line1->text().toInt(&ok);
}
void instructor::on_getmaxgrade_clicked()
{
    max=0;
    int grade=ui->line2->text().toInt(&ok);
    for (int i=0;i<5;i++){
        if(max>grade[i]){
            max=grade[i];
        }
    }
    qDebug<<max<<'\n';
}
void instructor::on_getmingrade_clicked()
{
    int grade=ui->line3->text().toInt(&ok);
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
    int grade=ui->line4->text().toInt(&ok);
    for (int i=0;i<5;i++){
        average+=grade[i];
    }
    average/=5;

    qDebug<<average<<endl;
}
