#ifndef Rectangle_H
#define Rectangle_H
#include <iomanip>

class Rectangle
{
public:
	double width, height;

	Rectangle(double newWidth, double newHeight);
	double getArea();
	double getPerimeter();
};
#endif 