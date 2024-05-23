#ifndef MAINWINDOW_H
#define MAINWINDOW_H


#include <signup2.h>

#include <user.h>

#include <adminstrator.h>
#include <student.h>
#include <instructor.h>



using namespace std;

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    
private slots:
    
    void on_Signup_clicked();

    void on_Login_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
