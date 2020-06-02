#include "StuCard.h"
Date d;

StuCard::StuCard()
{
	sex = 1;
	scoreAry[0] = 1;
	scoreAry[1] = 1;
	scoreAry[2] = 1;
}

StuCard::StuCard(string newName, bool newSex, double newScore1, double newScore2, double newScore3, Date newBirthDay)
{
	setName(newName);
	setSex(newSex);
	scoreAry[0] = newScore1;
	scoreAry[1] = newScore2;
	scoreAry[2] = newScore3;
	setDate(newBirthDay);
}
void StuCard::setName(string newName)
{
	name = newName;
}
void StuCard::setSex(bool newSex)
{
	sex = newSex;
}
void StuCard::setScore(int a)
{
	return ;
}
void StuCard::setDate(Date newBirthDay)
{
	birthday = newBirthDay;
}
string StuCard::getName()const
{
	return name;
}
bool StuCard::getSex()const
{
	return sex;
}
double StuCard::getScore(int i)const
{
	return scoreAry[i];
}
Date StuCard::getDate()const
{
	return birthday;
}
double StuCard::average()
{
	double sum = 0;
	for (int i = 0; i < 3; i++)
	{
		sum += scoreAry[i];
	}
	return sum / 3.0;
}
int StuCard::getAge(int year) const
{
	return year - birthday.getYear();
}
void StuCard::printCard()
{
	cout << name << ", " << sex << ", ";
	for (int i = 0; i < 3; i++)
	{
		cout << fixed << setprecision(1) << scoreAry[i] << ", ";
	}
	cout << birthday.getMonth() << "/" << birthday.getDay() << "/" << birthday.getYear() << ", ";
	cout << fixed << setprecision(1) << average() << ", " << getAge(2020) << endl;
}