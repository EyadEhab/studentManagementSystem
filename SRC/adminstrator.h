#ifndef ADMINSTRATOR_H
#define ADMINSTRATOR_H

#include <QDialog>

namespace Ui {
class adminstrator;
}

class adminstrator : public QDialog
{
    Q_OBJECT

public:
    explicit adminstrator(QWidget *parent = nullptr);
    ~adminstrator();

private:
    Ui::adminstrator *ui;
};

#endif // ADMINSTRATOR_H
