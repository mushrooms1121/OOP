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
void Rectangle::swapByReference(Rectangle& r2) //pass by reference
//癸把计τē ㊣籔砆㊣ 常ㄏノ跑计 狦砆㊣э跑把计计 妓紇臫穦紇臫㊣跑计
{
	Rectangle temp = *this;
	*this = r2;
	r2 = temp;
}
void Rectangle::swapByPointer(Rectangle* r2) //pass by value
//㊣籔砆㊣琌ㄢ縒ミ跑计ㄏノ计 狦砆㊣э把计计 ぃ穦紇臫㊣セō
{
	Rectangle temp = *this;
	*this = *r2;
	*r2 = temp;
}