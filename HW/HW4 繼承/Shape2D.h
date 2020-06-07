#ifndef Shape2D_H
#define Shape2D_H
#include"Shape.h"

class Shape2D
{
public:
	Shape2D();
	void setColor(string);
	void isFilled(bool);
	virtual double getPerimeter() = 0;

private:
	string color;
	bool filled;
};

#endif