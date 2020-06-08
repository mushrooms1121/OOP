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