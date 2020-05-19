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