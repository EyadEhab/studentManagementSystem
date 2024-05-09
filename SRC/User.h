#ifndef USER_H
#define USER_H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>


#ifndef STUDENT_SYSTEM_USER_H
#define STUDENT_SYSTEM_USER_H

#include <string>

using namespace std;

class User {
private:
    string userId;
    string userName;
    string password;

public:
    User(const string& id, const string& name, const string& pass);

    const string& getUserId() const;
    const string& getUserName() const;

    bool authenticate(const string& inputPassword) const;
};

#endif

