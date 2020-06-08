#include <iostream>
#include "Score.h"

Score::Score(string newName, int newMath)
{
	setName(newName);
	setMath(newMath);
}
void Score::setName(string newName)
{
	name = newName;
}
void Score::setMath(int newMath)
{
	math = newMath;
}
string Score::getName()
{
	return name;
}
int Score::getMath()
{
	return math;
}
void Score::print()
{
	cout << getName() << " " << getMath() << endl;
}