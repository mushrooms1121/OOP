#include "Ball.h"

Ball::Ball() {
	radius = 1;
}
Ball::Ball(double newRadius) {
	setRadius(newRadius);
}
Ball::Ball(double newRadius, string newColor) {
	setRadius(newRadius);
	setColor(newColor);
}
void Ball::setRadius(double newRadius) {
	radius = newRadius;
}
double Ball::getRadius() {
	return radius;
}
double Ball::getVolume() {
	return 4 * 3.14159 * radius * radius * radius / 3; //除三要放在最後面 或是寫4 * 3.14159 * pow(radius,3) / 3
}
double Ball::getArea() {
	return 4 * 3.14159 * radius * radius; //或是寫4*3.14159 * pow(radius,2)
}