#include"Ball.h"

Ball::Ball(double newRadius, string newColor, bool newFilled) {
	setRadius(newRadius);
	setColor(newColor);
	isFilled(newFilled);
}
void Ball::setRadius(double newRadius) {
	radius = newRadius;
}
double Ball::getRadius() {
	return radius;
}
double Ball::getVolume() {
	return 4 / 3 * 3.14159 * radius * radius * radius;
}
double Ball::getArea() {
	return 4 * 3.14159 * radius * radius;
}
void Ball::toString() {
	cout << "Ball ," << radius << ", ";
}