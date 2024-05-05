#ifndef ADMINISTRATOR_H
#define ADMINISTRATOR_H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "User.h"

class Administrator : public User
{
private:
	Administrator* administrators[MAX_ADMINS];

	int numAdmins;


public:
	void addUser(int User*);

	void removeUser(int string);

	void addCourse(int Course*);

	void removeCourse(int string);

};
#endif
