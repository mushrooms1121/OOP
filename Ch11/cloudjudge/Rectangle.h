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
