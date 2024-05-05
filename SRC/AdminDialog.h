#ifndef ADMIN_DIALOG_H
#define ADMIN_DIALOG_H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "QMainWindow .h"

class AdminDialog
{
private:
	QMainWindow  qMainWindow ;

protected:
	void addUser();

	void removeUser();

	void addCourse();

	void removeCourse();

};
#endif
