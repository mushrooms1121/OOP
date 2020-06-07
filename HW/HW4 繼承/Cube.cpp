#include"Cube.h"

Cube::Cube(double newSide, string newColor, bool newFilled) {
	setSide(newSide);
	setColor(newColor);
	isFilled(newFilled);
}
void Cube::setSide(double newSide) {
	side = newSide;
}
double Cube::getSide() {
	return side;
}
double Cube::getVolume() {
	return side * side * side;
}
double Cube::getArea() {
	return 6 * side * side;
}
void Cube::toSting() {
	cout << "cube, " << side << ", ";
}