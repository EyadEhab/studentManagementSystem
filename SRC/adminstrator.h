#ifndef ADMINSTRATOR_H
#define ADMINSTRATOR_H

#include "user.h"
#include "course.h"
#include <QDialog>
#include <QList>
#include <QString>
#include <QFile>
#include <QTextStream>
#include <QDebug>

namespace Ui {
class adminstrator;
}

class adminstrator : public QDialog, public user
{
    Q_OBJECT

public:
    explicit adminstrator(QWidget *parent = nullptr);
    adminstrator(QString id,QString pass);
    ~adminstrator();

private slots:
    void on_addCourse_clicked();
    void on_removeCourse_clicked();

    void on_pushButton_clicked();

    void on_removeUser_clicked();

    void on_addperson_clicked();


    void on_add_clicked();

    void on_plus_clicked();

private:
    void addCourse(const QString& courseName);
    void removeCourse(const QString& courseName);
    void listCourses() const;
    void saveCoursesToFile() ;
    void loadCoursesFromFile();

    Ui::adminstrator *ui;
    QList<Course> courses;
    QString fname;
};

#endif // ADMINSTRATOR_H
