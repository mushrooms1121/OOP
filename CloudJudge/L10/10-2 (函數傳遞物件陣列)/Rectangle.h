#ifndef Rectangle_H
#define Rectangle_H
#include <iomanip>

class Rectangle
{
public:
	Rectangle();
	Rectangle(double newWidth,double newHeight);
	void setWidth(double newWidth);
	void setHeight(double newHeight);
	double getWidth();
	double getHeight();
	double getArea();
private:
	double width, height;
};
#endif