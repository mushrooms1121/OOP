#ifndef GeometricObject_H
#define GeometricObject_H
#include<string>
using namespace std;

class GeometricObject
{
public:
	GeometricObject();
	GeometricObject(string);
	void setColor(string);
	string getColor();

private:
	string color;
};

#endif