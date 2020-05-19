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
void Course::dropStudent()const{}
string* Course::getStudent()const
{
	return student;
}
int Course::getNumberOfStudents()const
{
	return numberOfStudents;
}
----------------------------------------------------------------------------------------------------------------------------------------
#include "Course.h"

int main()
{
	Course course1("Date Structures", 10); //µ¹student[capacity]°O¾ÐÅé10­Ó¦ì¸m
	Course course2("Datebase System", 15);

	course1.addStudent("Peter Jones");
	course1.addStudent("Brian Smith");
	course1.addStudent("Anne Kennedy");

	course2.addStudent("Peter Jones");
	course2.addStudent("Steve Smith");

	cout << "Number of student in course1: " << course1.getNumberOfStudents() << endl;
	string* student = course1.getStudent();
	for (int i = 0; i < course1.getNumberOfStudents(); i++) cout << student[i] << ",";

	cout << "\nNumber of student in course2: " << course2.getNumberOfStudents() << endl;
	student = course2.getStudent();
	for (int i = 0; i < course2.getNumberOfStudents(); i++) cout << student[i] << ",";

	system("pause");
	return 0;
}
