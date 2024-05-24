#ifndef ADDUSER_H
#define ADDUSER_H
#include <QDialog>
#include <QSpinBox>
#include <QTextEdit>
#include <QComboBox>
#include <QPushButton>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QFile>
#include <QIODevice>
#include <QTextStream>
#include<string>
#include<QMessageBox>
#include <QWidget>
#include <iostream>


namespace Ui {
class adduser;
}

class adduser : public QDialog
{
    Q_OBJECT

public:
    explicit adduser(QWidget *parent = nullptr);
    ~adduser();
private slots:
    void on_signUp_4_clicked();


private:
    Ui::adduser *ui;
};

#endif // ADDUSER_H
