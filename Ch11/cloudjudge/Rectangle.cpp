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
