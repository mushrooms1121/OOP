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
	this->radius = radius; //也可以打成(*this).radius
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
#include "CircleWithDestructor.h"
using namespace std;

int main()
{
	Circle* pCircle1 = new Circle();
	Circle* pCircle2 = new Circle();
	Circle* pCircle3 = new Circle();

	cout << "Number of circle objects created: " << Circle::getNumberOfObjects() << endl;
	delete pCircle1;
	cout << "Number of circle objects created: " << Circle::getNumberOfObjects() << endl;

	system("pause");
	return 0;
}
