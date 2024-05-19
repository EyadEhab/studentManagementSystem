#ifndef STUDENT_H
#define STUDENT_H

#include <QDialog>
#include <QStringList>

namespace Ui {
class student;
}

class student : public QDialog
{
    Q_OBJECT
    
public:
    explicit student(QWidget *parent = nullptr);

    ~student();
    void SetenrolledCourses(string e[]){}
    
private slots:
    void on_Next_clicked();
    QStringList readCourseNames(const QString &fileName);
    void enroll_course(const QString &courseName);
    void drop_course(const QString &courseName);
    void view_grade(const QString &courseName);
    
private:
    Ui::student *ui;
    QString enrolledCourses [5];
};

#endif // STUDENT_H
