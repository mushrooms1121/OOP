#ifndef Point_H
#define Point_H
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

class Point
{
public:
	Point(int,int);
	int getFirstNumber();
	int getSecondNumber();
	Point add(Point);
	Point subtract(Point);
	string toString();

private:
	int firstNumber, secondNumber;
};
#endif
----------------------------------------------------------------------------------------------------------------------------------------
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
