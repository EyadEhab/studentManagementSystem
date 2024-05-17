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

private:
    Ui::instructor *ui;
};

#endif // INSTRUCTOR_H
