#ifndef Shape_H
#define Shape_H
#include <iostream>
#include <iomanip>
#include <string> 
using namespace std;

class Shape
{
public:
    Shape();
    Shape(string);
    void setColor(string);
    string getColor();
    virtual void toString() = 0;
    virtual double getVolume() = 0;

private:
    string color;
};
#endif