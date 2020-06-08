#ifndef Student_H
#define Student_H
#include <string>
#include "Date.h"

class Student
{
public:
	Student(string newName,Date newBirthDay,int newScore);
	void setName(string newName);
	string getName()const;
	void setDate(Date newBirthDay);
	Date getDate()const;
	void setScore(int newScore);
	int getScore()const;
	void print();

private:
	string name;
	Date birthDay;
	int score;
};
#endif