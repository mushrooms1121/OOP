#ifndef Cube_H
#define Cube_H
#include"GeometricObject.h"

class Cube:public GeometricObject //�n�[public��
{
public:
	Cube();
	Cube(double);
	Cube(double, string); //�O�o�إߤ@�ӥi�H��GeometricObject��color������
	void setLength(double newLength);
	double getLength();
	double getVolume();
	double getArea();

private:
	double length;
};

#endif