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
void Rectangle::swapByReference(Rectangle &r2)
{
	Rectangle temp = *this;
	*this = r2;
	r2 = temp;
}
void Rectangle::swapByPointer(Rectangle *r2)
{
	Rectangle temp = *this;
	*this = *r2;
	*r2 = temp;
}