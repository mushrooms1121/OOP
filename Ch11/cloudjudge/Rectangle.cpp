#ifndef Rectangle_H
#define Rectangle_H

class Rectangle
{
public:
	Rectangle(double width, double height);
	void setWidth(double newWidth);
	double getWidth();
	void setHeight(double newHeight);
	double getHeight();
	double getArea();

private:
	double width, height;
};
#endif
----------------------------------------------------------------------------------------------------------------------------------------
#include "Rectangle.h"

Rectangle::Rectangle(double width, double height)
{
	this->width = width;
	this->height = height;
}
void Rectangle::setWidth(double newWidth)
{
	width = newWidth;
}
double Rectangle::getWidth()
{
	return width;
}
void Rectangle::setHeight(double newHeight)
{
	height = newHeight;
}
double Rectangle::getHeight()
{
	return height;
}
double Rectangle::getArea()
{
	return width * height;
}
----------------------------------------------------------------------------------------------------------------------------------------
#include <iostream>
#include <iomanip>
#include "Rectangle.h"
using namespace std;

void swapByReference(Rectangle& r1, Rectangle& r2)
{
	Rectangle temp = r1;
	r1 = r2;
	r2 = temp;
}
void swapByPointer(Rectangle* r1, Rectangle* r2)
{
	Rectangle temp = *r1;
	*r1 = *r2;
	*r2 = temp;
}

int main()
{
	double w1, h1, w2, h2;
	cin >> w1 >> h1 >> w2 >> h2;
	Rectangle a1(w1, h1);
	Rectangle a2(w2, h2);

	cout << "SwapByReference:" << fixed << setprecision(2) << a1.getArea() << " " << a2.getArea() << " to ";
	swapByReference(a1,a2);
	cout << fixed << setprecision(2) << a1.getArea() << " " << a2.getArea() << endl;

	cout << "SwapByPointer:" << fixed << setprecision(2) << a1.getArea() << " " << a2.getArea() << " to ";
	swapByPointer(&a1,&a2);
	cout << fixed << setprecision(2) << a1.getArea() << " " << a2.getArea() << endl;

	system("pause");
	return 0;
}
