using namespace std;

#ifndef STUDENT_H
#define STUDENT_H
#include <user.h>
#include <QDialog>
#include <QStringList>

namespace Ui {
class student;
}

class student : public QDialog, public user
{
    Q_OBJECT

public:
    explicit student(const QString &userId, const QString &password, QWidget*parent = nullptr);
    ~student();
    void setEnrolledCourses(const QStringList &courses); // Updated to QStringList for better handling
    student(const QString &userId);


private slots:
    void on_next_clicked();
    QStringList readCourseNames();
    void enroll_course(const QString &courseName);
    void drop_course(const QString &courseName);
    void view_grade(const QString &courseName);
    bool course_exists(const QString &courseName);
    QString getUserId();

private:
    Ui::student*ui;
    QString enrolledCourses [5];
     QString m_userId;

};

#endif // STUDENT_H
