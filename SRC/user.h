#ifndef USER_H
#define USER_H

#include <QMainWindow>
#include <QObject>
#include <QQuickItem>
#include <QSharedDataPointer>
#include <QWidget>

class userData;

class user
{
public:
    user(const QString& id= "", const QString& pass="");

    QString getUserId() ;
    QString getPassword() ;

    bool authenticate( QString inputPassword) ;
    void setUserId(QString) ;
    void setUserName(QString) ;
    void setPassword(QString) ;

    ~user();


private:

    QString userId;
    QString userName;
    QString password;
};

#endif // USER_H
