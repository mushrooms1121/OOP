#ifndef COURSE_H
#define COURSE_H
#include <string>
#include <iostream>
using namespace std;

class Course
{
public:
	Course(const string& courseName, int capacity);
	string getCourseName()const;
	void addStudent(const string& name);
	void dropStudent(const string& name);
	string* getStudent()const;
	int getNumberOfStudents()const;

private:
	string courseName;
	string* student;
	int numberOfStudents, capacity;
};

#endif
----------------------------------------------------------------------------------------------------------------------------------------
#include "Course.h"

Course::Course(const string& courseName, int capacity)
{
	numberOfStudents = 0;
	this->courseName = courseName;
	this->capacity = capacity;
	student = new string[capacity];
}
string Course::getCourseName()const
{
	return courseName;
}
void Course::addStudent(const string& name)
{
	student[numberOfStudents] = name;
	numberOfStudents++;
}
void Course::dropStudent(const string& name){}
string* Course::getStudent()const
{
	return student;
}
int Course::getNumberOfStudents()const
{
	return numberOfStudents;
}
----------------------------------------------------------------------------------------------------------------------------------------
