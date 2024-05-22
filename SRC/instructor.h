#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H
#include "user.h"
#include "Course.h"

#include <QDialog>
using namespace std;


namespace Ui {
class instructor;
}

class instructor : public QDialog, public user
{
    Q_OBJECT

public:
    explicit instructor(QWidget *parent = nullptr);
    instructor(QString , QString);

    ~instructor();

private slots:
    void on_addCourse_clicked();

    void on_addMaterial_clicked();

    void on_removeCourse_clicked();

    void on_removeMaterial_clicked();

    void on_getmaxgrade_clicked();

    void on_getmingrade_clicked();

    void on_updateGrade_clicked();

    void on_getAverageGrade_clicked();

private:
    Course* taughtCourses[10];
    int numTaughtCourses;
    Ui::instructor *ui;
};

#endif // INSTRUCTOR_H
