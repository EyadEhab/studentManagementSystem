#include "user.h"
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





user::user(const QString& id , const QString& pass):userId(id),password(pass){

}

QString user::getUserId() {
    return userId;}







    bool user::authenticate( QString inputPassword) {
        return (inputPassword == password);
    }
    void user::setUserId(QString id){
        userId=id;
    }
    void user::setPassword(QString pass) {
        password=pass;
    }
    QString user::getPassword() {
        return password;
    }

user::~user() {}
