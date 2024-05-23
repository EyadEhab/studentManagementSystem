#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H
#include "user.h"
#include "Course.h"

#include <QDialog>
#include <QStringList>
#include <QFile>
#include <QTextStream>
#include <QStringList>
#include <QDebug>
#include "user.h"
#include "QMessageBox"

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
    void on_removeCourse_clicked();
    void on_updateGrade_clicked();
    addCourse(const QString& );


private:
    Course* taughtCourses[10];
    int numTaughtCourses;
    Ui::instructor *ui;
};

#endif // INSTRUCTOR_H
