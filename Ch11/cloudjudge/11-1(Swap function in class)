#ifndef Rectangle_H
#define Rectangle_H

class Rectangle
{
public:
	Rectangle(double width,double height);
	void setWidth(double newWidth);
	double getWidth();
	void setHeight(double newHeight);
	double getHeight();
	double getArea();
	void swapByReference(Rectangle& r2);
	void swapByPointer(Rectangle* r2);

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
void Rectangle::swapByReference(Rectangle& r2) //pass by reference
//對於參數而言 呼叫與被呼叫者 都使用相同的變數 如果被呼叫者改變了參數的數值 同樣的影響會影響到呼叫者的變數
{
	Rectangle temp = *this;
	*this = r2;
	r2 = temp;
}
void Rectangle::swapByPointer(Rectangle* r2) //pass by value
//呼叫者與被呼叫者是兩個獨立的變數但使用相同的數值 如果被呼叫者更改了參數的數值 並不會影響到呼叫者本身
{
	Rectangle temp = *this;
	*this = *r2;
	*r2 = temp;
}
----------------------------------------------------------------------------------------------------------------------------------------
#include <iostream>
#include <iomanip>
#include "Rectangle.h"
using namespace std;

int main()
{
	double w1, h1, w2, h2;
	cin >> w1 >> h1 >> w2 >> h2;
	Rectangle a1(w1, h1);
	Rectangle a2(w2, h2);
	
	cout << "SwapByReference:" << fixed << setprecision(2) << a1.getArea() << " " << a2.getArea() << " to ";
	a1.swapByReference(a2);
	cout << fixed << setprecision(2) << a1.getArea() << " " << a2.getArea() << endl;

	cout << "SwapByPointer:" << fixed << setprecision(2) << a1.getArea() << " " << a2.getArea() << " to ";
	a1.swapByPointer(&a2);
	cout << fixed << setprecision(2) << a1.getArea() << " " << a2.getArea() << endl;

	system("pause");
	return 0;
}
