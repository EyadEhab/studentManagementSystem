#ifndef START_H
#define START_H

#include <QDialog>

namespace Ui {
class start;
}

class start : public QDialog
{
    Q_OBJECT

public:
    explicit start(QWidget *parent = nullptr);
    ~start();

private slots:
    void on_START_clicked();

private:
    Ui::start *ui;
};

#endif // START_H
