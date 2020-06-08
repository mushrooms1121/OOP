#ifndef Rectangle_H
#define Rectangle_H
#include <iomanip>

class Rectangle
{
public:
	Rectangle();
	Rectangle(double newWidth,double newHeight);
	void setWidth(double newWidth);
	double getWidth();
	void setHeight(double newHeight);
	double getHeight();
	double getArea();
	void swapByReference(Rectangle &r2);
	void swapByPointer(Rectangle *r2);
private:
	double width, height;
};
#endif