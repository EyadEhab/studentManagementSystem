#include "user.h"






user::user(const QString& id , const QString& name , const QString& pass):userId(id),userName(name),password(pass){

}

QString user::getUserId() {
    return userId;}

QString  user::getUserName()
    {return userName;}


    bool user::authenticate( QString inputPassword) {
        return (inputPassword == password);
    }
    void user::setUserId(QString id){
        userId=id;
    }
    void user::setUserName(QString name) {
        userName = name;
    }
    void user::setPassword(QString pass) {
        password=pass;
    }
    QString user::getPassword() {
        return password;
    }

user::~user() {}
