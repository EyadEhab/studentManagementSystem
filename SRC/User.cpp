#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "User.h"


boolean User::authenticate()
{

	return 0;
}
User::User(const string& id, const string& name, const string& pass) :
        userId(id), userName(name), password(pass) {}

    const string& User::getUserId() const { return userId; }
    const string& User::getUserName() const { return userName; }

    bool User::authenticate(const string& inputPassword) const {
        return inputPassword == password;
    }
