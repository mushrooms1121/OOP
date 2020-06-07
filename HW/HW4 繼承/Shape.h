#ifndef Shape_H
#define Shape_H
#include<string>
#include<iostream>
using namespace std;

class Shape
{
public:
	Shape(string,bool);
	void setColor(string);
	string getColor();
	void isFilled(bool);
	bool getFilled();
	virtual double getArea() = 0;
	string toString();

private:
	string color;
	bool filled;
};
#endif