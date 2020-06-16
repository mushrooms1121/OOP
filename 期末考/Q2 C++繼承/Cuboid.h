#ifndef Cuboid_H
#define Cuboid_H
#include"Shape.h"
class Cuboid : public Shape
{
public:
    Cuboid(double, double, double, string);
    void setLength(double);
    void setWidth(double);
    void setHeight(double);
    double getLength();
    double getWidth();
    double getHeight();
    double getVolume();
    void toString();

private:
    double length, width, height;
};
#endif