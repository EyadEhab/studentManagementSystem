#include <QApplication>
#include <iostream>
#include <QDebug>
#include <start.h>
using namespace std;

int main(int argc, char *argv[])
{
    qDebug() << "starting";
    QApplication a(argc, argv);
    qDebug() << "starting";
    start w;
    w.show();
    return a.exec();
}
