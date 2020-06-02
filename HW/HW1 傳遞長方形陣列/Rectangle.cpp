#include "Rectangle.h"
int Rectangle::numOfRect = 0;

Rectangle::Rectangle()
{
	width = 1;
	height = 1;
}
Rectangle::Rectangle(double newWidth, double newHeight)
{
	setWidth(newWidth);
	setHeight(newHeight);
}
void Rectangle::setWidth(double newWidth)
{
	width = newWidth;
	numOfRect++;
}
void Rectangle::setHeight(double newHeight)
{
	height = newHeight;
}
double Rectangle::getWidth()const
{
	return width;
}
double Rectangle::getHeight()const
{
	return height;
}
double Rectangle::getArea()const
{
	return width * height;
}
int Rectangle::getNumOfRect()
{
	return numOfRect;
}