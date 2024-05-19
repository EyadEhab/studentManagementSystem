#include "adminstrator.h"
#include "ui_adminstrator.h"

adminstrator::adminstrator(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::adminstrator)
{
    ui->setupUi(this);
}

adminstrator::~adminstrator()
{
    delete ui;
}
