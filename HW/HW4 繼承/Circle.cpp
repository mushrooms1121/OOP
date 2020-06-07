#include"Circle.h"

Circle::Circle(double newRadius,string newColor,bool newFilled) {
	setRadius(newRadius);
	setColor(newColor);
	isFilled(newFilled);
}
void Circle::setRadius(double newRadius) {
	radius = newRadius;
}
double Circle::getRadius() {
	return radius;
}
double Circle::getPerimeter() {
	return radius * 2 * 3.14159;
}
double Circle::getArea() {
	return 3.14159 * radius * radius;
}
void Circle::toString() {
	cout <<  "circle, " << radius << ", ";
}