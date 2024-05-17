#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

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
    void on_pushButton_clicked();
    
    void on_Signup_clicked();

    void on_Login_clicked();

    void on_Login_clicked(bool checked);

    void on_groupBox_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
