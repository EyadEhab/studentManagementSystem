#include "start.h"
#include "ui_start.h"
#include "mainwindow.h"
#include <QDialog>

start::start(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::start)
{
    ui->setupUi(this);
}

start::~start()
{
    delete ui;
}

void start::on_START_clicked()
{
    MainWindow *startWindow = new MainWindow; // Assuming 'start' is another MainWindow
    startWindow->show();

    // Optionally disable the current window while the new one is open
    this->setEnabled(false);

    // Connect to the close event of the new window to re-enable the current window
    connect(startWindow, &MainWindow::destroyed, this, [this]() {
        this->setEnabled(true);
    });
}

