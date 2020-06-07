//¶ê
#ifndef Circle_H
#define Circle_H
#include<string>
#include"Shape2D.h"
#include"Shape.h"
using namespace std;

class Circle:Shape2D
{
public:
	Circle(double, string, bool);
	void setRadius(double);
	double getRadius();
	double getPerimeter();
	double getArea();
	void toString();

private:
	double radius;
};

#endif