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
#include "Course.h"

int main()
{
	Course course1("C++", 10);
	Course course2(course1); //用了同一個記憶體

	course1.addStudent("Peter Pan"); //因為上面有copy 所以原本student是Peter
	course2.addStudent("Lisa Ma"); //後來又add Lisa覆蓋上原本的Peter

	cout << "student in circle1: " << course1.getStudent()[0] << endl; //所以印出兩個student的值都是Lisa
	cout << "student in circle2: " << course2.getStudent()[0] << endl;

	system("pause");
	return 0;
}
