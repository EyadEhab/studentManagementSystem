#ifndef STUDENT    _H
#define STUDENT    _H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "User.h"
#include "Course.h"

class Student     : public User
{
private:
	string studentId;

	string studentName;

	Course* enrolledCourses[MAX_COURSES];

	float* grades[MAX_COURSES];

	int numEnrolledCourses;


public:
	void enrollCourse(int Course*);

	void dropCourse(int Course*);

	float viewGrade(int Course*);

	float getAverageGrade();

};
#endif
