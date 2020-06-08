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
	return length * length * length; //或是pow(length,3)
}
double Cube::getArea() {
	return 6 * length * length; //或是寫6*pow(length,2)s
}