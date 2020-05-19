#ifndef COURSE_H
#define COURSE_H
#include <string>
#include <iostream>
using namespace std;

class Course
{
public:
	Course(const string& courseName,int capacity);
	string getCourseName()const;
	void addStudent(const string& name);
	void dropStudent()const;
	string* getStudent()const;
	int getNumberOfStudents()const;

private:
	string courseName;
	string* student;
	int numberOfStudents, capacity;
};

#endif

