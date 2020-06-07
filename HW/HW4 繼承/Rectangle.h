//ช๘ค่ล้
#ifndef Rectangle_H
#define Rectangle_H
#include<string>
#include"Shape2D.h"
using namespace std;

class Rectangle:Shape2D
{
public:
	Rectangle(double,double,string,bool);
	void setWidth(double);
	double getWidth();
	void setHeight(double);
	double getHeight();
	double getPerimeter();
	double getArea();
	void toString();

private:
	double width, height;
};

#endif