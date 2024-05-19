#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H

#include <QDialog>

namespace Ui {
class instructor;
}

class instructor : public QDialog
{
    Q_OBJECT

public:
    explicit instructor(QWidget *parent = nullptr);
    ~instructor();

private slots:
    void on_addCourse_clicked();

    void on_addMaterial_clicked();

    void on_removeCourse_clicked();

    void on_removeMaterial_clicked();

    void on_getmaxgrade_2_clicked();

    void on_getmaxgrade_clicked();

    void on_getmingrade_clicked();

    void on_pushButton_clicked();

    void on_updateGrade_clicked();

    void on_getAverageGrade_clicked();

private:
    Course*[MAX_COURSES] taughtCourses ;
    int numTaughtCourses;
    Ui::instructor *ui;
};

#endif // INSTRUCTOR_H
