#ifndef STUDENT_H
#define STUDENT_H
#include "user.h"

#include <QDialog>
#include <QStringList>
#include <QFile>
#include <QTextStream>
#include <QStringList>
#include <QDebug>
#include "user.h"
#include "QMessageBox"



namespace Ui {
class student;
}

class student : public QDialog, public user
{
    Q_OBJECT
    
public:
    explicit student(QWidget *parent = nullptr);
    student(QString id, QString pass);

    ~student();
    void setEnrolledCourses(const QString e[]);
    
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
