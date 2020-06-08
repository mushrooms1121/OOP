#ifndef Ball_H
#define Ball_H
#include"GeometricObject.h"

class Ball:public GeometricObject //要加public呦
{
public:
	Ball();
	Ball(double);
	Ball(double, string); //記得建立一個可以放GeometricObject裡color的物件
	void setRadius(double);
	double getRadius();
	double getVolume();
	double getArea();

private:
	double radius;
};

#endif