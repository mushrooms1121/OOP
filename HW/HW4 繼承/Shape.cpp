#include"Shape.h"

Shape::Shape(string newColor, bool newFilled) {
	setColor(newColor);
	isFilled(newFilled);
}
void Shape::setColor(string newColor) {
	color = newColor;
}
string Shape::getColor() {
	return color;
}
void Shape::isFilled(bool newFilled) {
	filled = newFilled;
}
bool Shape::getFilled() {
	return filled;
}
string Shape::toString() {
	return "shape";
}