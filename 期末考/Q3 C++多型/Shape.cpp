#include"Shape.h"
Shape::Shape()
{
}
Shape::Shape(string newColor)
{
    color = newColor;
}
void Shape::setColor(string newColor)
{
    color = newColor;
}
string Shape::getColor()
{
    return color;
}
void Shape::toString()
{
    cout << "Shape";
}