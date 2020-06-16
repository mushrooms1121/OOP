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
    void toString();

private:
    string color;
};
#endif