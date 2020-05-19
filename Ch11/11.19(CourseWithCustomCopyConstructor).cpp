#ifndef COURSE_H
#define COURSE_H
#include <string>
#include <iostream>
using namespace std;

class Course
{
public:
	Course(const string& courseName, int capacity);
	Course(const Course&);
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
#include "CourseWithCustomCopyConstructorcpp.h"

Course::Course(const string& courseName, int capacity)
{
	numberOfStudents = 0;
	this->courseName = courseName;
	this->capacity = capacity;
	student = new string[capacity];
}
Course::Course(const Course& course) //新增新的建構子
{
	courseName = course.courseName;
	numberOfStudents = course.numberOfStudents;
	capacity = course.capacity;
	student = new string[capacity];
}
string Course::getCourseName()const
{
	return courseName;
}
void Course::addStudent(const string& name)
{
	if (numberOfStudents >= capacity)
	{
		cout << "The maximum size of array exceeded" << endl;
		cout << "Program terminates now" << endl;
		exit(0);
	}
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
#include "CourseWithCustomCopyConstructorcpp.h"

int main()
{
	Course course1("C++ Programming", 10);
	Course course2(course1);

	course1.addStudent("Peter Pan");
	course2.addStudent("Lisa Ma");

	cout << "student in circle1: " << course1.getStudent()[0] << endl;
	cout << "student in circle2: " << course2.getStudent()[0] << endl;

	system("pause"); 
	return 0;
}
