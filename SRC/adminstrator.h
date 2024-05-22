#ifndef ADMINSTRATOR_H
#define ADMINSTRATOR_H
#include "user.h"

#include <QDialog>

namespace Ui {
class adminstrator;
}

class adminstrator : public QDialog, public user
{
    Q_OBJECT

public:
    explicit adminstrator(QWidget *parent = nullptr);
    ~adminstrator();

private:
    Ui::adminstrator *ui;
};

#endif // ADMINSTRATOR_H
