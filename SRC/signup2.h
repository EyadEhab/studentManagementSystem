#ifndef SIGNUP2_H
#define SIGNUP2_H
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
class Signup2;
}

class Signup2 : public QDialog
{
    Q_OBJECT
    QString kind;

public:
    explicit Signup2(QWidget *parent = nullptr);
    ~Signup2();

private slots:
    void on_signUp_4_clicked();

private:
    Ui::Signup2 *ui;
};

#endif // SIGNUP2_H