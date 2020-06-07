//•ﬂ§Ë≈È
#ifndef Cube_H
#define Cube_H
#include<string>
#include"Shape3D.h"
using namespace std;

class Cube : Shape3D
{
public:
	Cube(double,string,bool);
	void setSide(double);
	double getSide();
	double getVolume();
	double getArea();
	void toSting();

private:
	double side;
};

#endif