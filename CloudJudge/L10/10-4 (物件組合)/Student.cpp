#include "Student.h"

Student::Student(string newName, Date newBirthDay, int newScore)
{
	setName(newName);
	setDate(newBirthDay);
	setScore(newScore);
}
void Student::setName(string newName)
{
	name = newName;
}
string Student::getName()const
{
	return name;
}
void Student::setDate(Date newBirthDay)
{
	birthDay = newBirthDay;
}
Date Student::getDate()const
{
	return birthDay;
}
void Student::setScore(int newScore)
{
	score = newScore;
}
int Student::getScore()const
{
	return score;
}
void Student::print()
{
	cout << name << " ";
	birthDay.print();
	cout << " " << score << endl;
}