#ifndef Rectangle_H
#define Rectangle_H
#include <iomanip>

class Rectangle
{
public:
	Rectangle();
	Rectangle(double newWidth, double newHeight);
	void setWidth(double newWidth);
	void setHeight(double newHeight);
	double getWidth()const;
	double getHeight()const;
	double getArea()const;
	static int getNumOfRect();
private:
	static int numOfRect;
	double width, height;
};
#endif