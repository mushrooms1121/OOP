#ifndef Rectangle_H
#define Rectangle_H
#include <iomanip>

class Rectangle
{
public:
	Rectangle(double newWidth, double newHeight);
	double getArea();
	double getPerimeter();
	void setWidth(double newWidth);
	void setHeight(double newHeight);

private:
	double width, height;
};

#endif

