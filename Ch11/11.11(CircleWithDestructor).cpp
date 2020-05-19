#include "CircleWithDestructor.h"

int Circle::numberOfObjects = 0;

Circle::Circle()
{
	radius = 1;
	numberOfObjects++;
}
Circle::Circle(double radius)
{
	this->radius = radius; //¤]¥i¥H¼g(*this).radius
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