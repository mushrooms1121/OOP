#include"Cube.h"

Cube::Cube() {
	length = 1;
}
Cube::Cube(double newLength) {
	setLength(newLength);
}
Cube::Cube(double newLength, string newColor) {
	setLength(newLength);
	setColor(newColor);
}
void Cube::setLength(double newLength) {
	length = newLength;
}
double Cube::getLength() {
	return length;
}
double Cube::getVolume() {
	return length * length * length; //�άOpow(length,3)
}
double Cube::getArea() {
	return 6 * length * length; //�άO�g6*pow(length,2)s
}