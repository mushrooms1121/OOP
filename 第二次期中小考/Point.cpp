#include "Point.h"

Point::Point(int a, int b)
{
	firstNumber = a;
	secondNumber = b;
}
int Point::getFirstNumber()
{
	return firstNumber;
}
int Point::getSecondNumber()
{
	return secondNumber;
}
Point Point::add(Point a)
{
	int f = firstNumber + a.getFirstNumber();
	int s = secondNumber + a.getSecondNumber();
	return Point(f, s);
}
Point Point::subtract(Point b)
{
	int f = firstNumber - b.getFirstNumber();
	int s = secondNumber - b.getSecondNumber();
	return Point(f, s);
}
string Point::toString()
{
	stringstream ss;
	ss << "(" << firstNumber << "," << secondNumber << ")";
	return ss.str();
}