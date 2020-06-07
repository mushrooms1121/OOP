#ifndef Shape3D_H
#define Shape3D_H
#include"Shape.h"

class Shape3D
{
public:
	Shape3D();
	void setColor(string);
	void isFilled(bool);
	virtual double getVolume() = 0;

private:
	string color;
	bool filled;
};

#endif