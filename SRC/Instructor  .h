#ifndef INSTRUCTOR  _H
#define INSTRUCTOR  _H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "Course.h"

class Instructor  
{
private:
	string instructorId;

	string instructorName;

	Course* taughtCourses[MAX_COURSES];

	int numTaughtCourses;


public:
	void addCourse(int Course*);

	void removeCourse(int Course*);

	void addMaterial(int Course*, int Material*);

	void removeMaterial(int Course*, int Material*);

	void updateGrade(int Course*, int Student*, int grade);

	float getMaxGrade(int Course*);

	float getMinGrade(int Course*);

	float getAverageGrade(int Course*);

};
#endif
