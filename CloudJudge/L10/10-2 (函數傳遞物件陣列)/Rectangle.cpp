#include "Rectangle.h"

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
}
void Rectangle::setHeight(double newHeight)
{
	height = newHeight;
}
double Rectangle::getWidth()
{
	return width;
}
double Rectangle::getHeight()
{
	return height;
}
double Rectangle::getArea()
{
	return width * height;
}