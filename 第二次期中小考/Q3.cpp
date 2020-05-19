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
----------------------------------------------------------------------------------------------------------------------------------------
#include "Point.h"

int main()
{
	int x[3], y[3];
	for (int i = 0; i < 3; i++) cin >> x[i] >> y[i];

	Point point1(x[0], y[0]);
	Point point2(x[1], y[1]);
	Point point3(x[2], y[2]);

	cout << point1.toString() << "+" << point2.toString() << "-" << point3.toString() << "="
		<< ((point1.add(point2)).subtract(point3)).toString() << endl;

	system("pause");
	return 0;
	//¿é¤J1,0,-3,1,-4,3(¤@­Ó³r¸¹¤@¦¸enter)
}
