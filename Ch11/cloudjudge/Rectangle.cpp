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
//���ѼƦӨ� �I�s�P�Q�I�s�� ���ϥάۦP���ܼ� �p�G�Q�I�s�̧��ܤF�Ѽƪ��ƭ� �P�˪��v�T�|�v�T��I�s�̪��ܼ�
{
	Rectangle temp = *this;
	*this = r2;
	r2 = temp;
}
void Rectangle::swapByPointer(Rectangle* r2) //pass by value
//�I�s�̻P�Q�I�s�̬O��ӿW�ߪ��ܼƦ��ϥάۦP���ƭ� �p�G�Q�I�s�̧��F�Ѽƪ��ƭ� �ä��|�v�T��I�s�̥���
{
	Rectangle temp = *this;
	*this = *r2;
	*r2 = temp;
}