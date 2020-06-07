//²y
#ifndef Ball_H
#define Ball_H
#include<string>
#include"Shape3D.h"
using namespace std;

class Ball:Shape3D
{
public:
	Ball(double,string,bool);
	void setRadius(double);
	double getRadius();
	double getVolume();
	double getArea();
	void toString();

private:
	double radius;
};

#endif