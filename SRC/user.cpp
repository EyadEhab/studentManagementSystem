#include "user.h"






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
