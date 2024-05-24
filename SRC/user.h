#ifndef USER_H
#define USER_H
#include <QMainWindow>
#include <iostream>
#include <fstream>
#include <cstdio>
#include <string>
#include <QString>
#include <QDebug>
#include <QDir>
#include <QTextStream>

#include <QDialog>
#include <QSpinBox>
#include <QTextEdit>
#include <QComboBox>
#include <QPushButton>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QFile>
#include <QIODevice>

#include <typeinfo>

#include "QMessageBox"

#include <QScopedPointer>


class userData;

class user
{
public:
    user(const QString& id= "",const  QString& pass="");

    QString getUserId() ;
    QString getPassword() ;

    bool authenticate( QString inputPassword) ;
    void setUserId(QString) ;
    void setUserName(QString) ;
    void setPassword(QString) ;

    virtual ~user();


private:

    QString userId;
    QString password;
};

#endif // USER_H
