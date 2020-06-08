#ifndef Cube_H
#define Cube_H
#include"GeometricObject.h"

class Cube:public GeometricObject //要加public呦
{
public:
	Cube();
	Cube(double);
	Cube(double, string); //記得建立一個可以放GeometricObject裡color的物件
	void setLength(double newLength);
	double getLength();
	double getVolume();
	double getArea();

private:
	double length;
};

#endif