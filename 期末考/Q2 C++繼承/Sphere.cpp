#include"Sphere.h"
Sphere::Sphere(double newRadius, string newColor)
{
    setRadius(newRadius);
    setColor(newColor);
}
void Sphere::setRadius(double newRadius)
{
    radius = newRadius;
}
double Sphere::getRadius()
{
    return radius;
}
double Sphere::getVolume()
{
    return 4 * 3.14159 * radius * radius * radius / 3.0;
}
void Sphere::toString()
{
    cout << "Sphere:";
}