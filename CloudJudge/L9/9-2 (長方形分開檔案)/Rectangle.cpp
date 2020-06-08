#include "Rectangle.h"

Rectangle::Rectangle(double newWidth, double newHeight)
{
	width = newWidth;
	height = newHeight;
}
double Rectangle::getArea()
{
	return width * height;
}
double Rectangle::getPerimeter()
{
	return (width + height) * 2;
}