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
