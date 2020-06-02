#ifndef StuCard_H
#define StuCard_H
#include "Date.h"
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class StuCard
{
public:
	StuCard();
	StuCard(string newName, bool newSex, double newScore1, double newScore2, double newScore3, Date newBirthDay);
	void setName(string newName);
	void setSex(bool newSex);
	void setScore(int);
	void setDate(Date newBirthDay);
	string getName()const;
	bool getSex()const;
	double getScore(int)const;
	Date getDate()const;
	double average();
	int getAge(int)const;
	void printCard();

private:
	string name;
	bool sex;
	double scoreAry[3];
	Date birthday;
};
#endif 
