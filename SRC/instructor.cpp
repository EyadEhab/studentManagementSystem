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
instructor::instructor(QString id, QString pass): user(id , pass), ui(new Ui::instructor)
{
    ui->setupUi(this);
}

void instructor::on_addCourse_clicked()
{
    course obj(arr[max_course])(QString instructorId,QString instructorname,QString instructorID);

 QString subject = ui->addCourse_2->text();
 QString courses=ui->addCourse_3->text();

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


void instructor::on_updateGrade_clicked()
{
    bool ok;
    int grade=ui->line1->text().toInt(&ok);
}
void instructor::on_getmaxgrade_clicked()

{
    int max = INT_MIN; // Initialize max with the smallest possible integer value
    bool ok;
    QList<int> grades; // Dynamic list to store grades

    QList<QLineEdit*> lineEdits = findChildren<QLineEdit*>(); // Find all QLineEdit children

    // Retrieve grades from the UI
    for (QLineEdit* lineEdit : lineEdits) {
        int grade = lineEdit->text().toInt(&ok);
        if (ok) {
            grades.append(grade);
        }
    }

    if (grades.isEmpty()) {
        qDebug() << "No valid grades found.";
        return;
    }

    // Find the maximum grade
    for (int grade : grades) {
        if (grade > max) {
            max = grade;
        }
    }

    qDebug() << max << '\n';
}




void instructor::on_getAverageGrade_clicked() {
    // Retrieve and filter non-empty grades from the UI
    QList<QString> grades;
    QList<QLineEdit*> lineEdits = findChildren<QLineEdit*>(); // Find all QLineEdit children

    for (QLineEdit* lineEdit : lineEdits) {
        QString text = lineEdit->text();
        if (!text.isEmpty()) {
            grades.append(text);
        }
    }

    double total_grade = 0.0;
    int num_grades = grades.size();

    if (num_grades == 0) {
        qDebug() << "Error: No grades found to calculate average.";
        return;
    }

    // Calculate the total grade and validate each entry
    bool ok;
    for (const auto& current_grade_item : grades) {
        int current_grade = current_grade_item.toInt(&ok);
        if (!ok) {
            // Handle invalid grade found in the list
            qDebug() << "Error: Invalid grade found in the list.";
            return;
        }

        total_grade += static_cast<double>(current_grade);
    }

    // Calculate and display the average grade
    double average = total_grade / num_grades;
    qDebug() << "Average grade:" << average << '\n';
}



