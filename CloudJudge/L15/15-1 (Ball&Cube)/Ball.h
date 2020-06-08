#ifndef Ball_H
#define Ball_H
#include"GeometricObject.h"

class Ball:public GeometricObject //�n�[public��
{
public:
	Ball();
	Ball(double);
	Ball(double, string); //�O�o�إߤ@�ӥi�H��GeometricObject��color������
	void setRadius(double);
	double getRadius();
	double getVolume();
	double getArea();

private:
	double radius;
};

#endif