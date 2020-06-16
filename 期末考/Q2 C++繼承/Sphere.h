#ifndef Sphere_H
#define Sphere_H
#include"Shape.h"
class Sphere : public Shape
{
public:
    Sphere(double, string);
    void setRadius(double);
    double getRadius();
    double getVolume();
    void toString();

private:
    double radius;
};
#endif