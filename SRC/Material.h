#ifndef MATERIAL_H
#define MATERIAL_H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "Instructor  .h"
#include "Administrator.h"
#include "Student    .h"
#include "pair.h"

class Material : public Material::Course
{
public:
	class Course : public Instructor  , public Administrator, public Student    
	{
	private:
		string courseName;

		string courseCode;

		string instructorIds[MAX_INSTRUCTORS];

		int numInstructors;

		int credits;

		pair<string,float> studentGrades[MAX_STUDENTS];

		int numStudents;


	public:
		void addStudent(int Student*);

		void removeStudent(int Student*);

		void updateGrade(int Student*, int float);

	};


private:
	string materialName;

	string content;

};
#endif
