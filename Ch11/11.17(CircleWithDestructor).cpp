#ifndef CIRCLE_H
#define CIRCLE_H

class Circle
{
public:
	Circle();
	Circle(double);
	~Circle();
	double getArea() const;
	double getRadius() const;
	void setRadius(double);
	static int getNumberOfObjects();

private:
	double radius;
	static int numberOfObjects;
};
#endif
----------------------------------------------------------------------------------------------------------------------------------------
#include "CircleWithDestructor.h"

int Circle::numberOfObjects = 0;

Circle::Circle()
{
	radius = 1;
	numberOfObjects++;
}
Circle::Circle(double radius)
{
	this->radius = radius;
	numberOfObjects++;
}
Circle::~Circle()
{
	numberOfObjects--;
}
double Circle::getArea()const
{
	return radius * radius * 3.14159;
}
double Circle::getRadius()const
{
	return radius;
}
void Circle::setRadius(double newRadius)
{
	radius = newRadius;
}
int Circle::getNumberOfObjects()
{
	return numberOfObjects;
}
----------------------------------------------------------------------------------------------------------------------------------------
#include <iostream>
#include "CirclewithDestructor.h"
using namespace std;

int main()
{
	Circle circle1(5);
	Circle circle2(circle1); //複製circle1的值

	cout << "After creating circle2 from circle1: " << endl;
	cout << "\tcircle1.getRandius() returns " << circle1.getRadius() << endl;
	cout << "\tcircle2.getRandius() returns " << circle2.getRadius() << endl;

	circle1.setRadius(10.5);
	circle2.setRadius(20.5);
	cout << "After creating circle1 from circle2: " << endl;
	cout << "\tcircle1.getRandius() returns " << circle1.getRadius() << endl;
	cout << "\tcircle2.getRandius() returns " << circle2.getRadius() << endl;

	system("pause");
	return 0;
}
