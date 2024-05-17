#include "instructor.h"
#include "ui_instructor.h"

instructor::instructor(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::instructor)
{
    ui->setupUi(this);
}

instructor::~instructor()
{
    delete ui;
}
