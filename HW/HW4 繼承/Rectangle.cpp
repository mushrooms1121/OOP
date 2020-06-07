#include"Rectangle.h"

Rectangle::Rectangle(double newWidth, double newHeight,string newColor,bool newFilled) {
	setWidth(newWidth);
	setHeight(newHeight);
	setColor(newColor);
	isFilled(newFilled);
}
void Rectangle::setWidth(double newWidth) {
	width = newWidth;
}
double Rectangle::getWidth() {
	return width;
}
void Rectangle::setHeight(double newHeight) {
	height = newHeight;
}
double Rectangle::getHeight() {
	return height;
}
double Rectangle::getPerimeter() {
	return (width + height) * 2;
}
double Rectangle::getArea() {
	return width * height;
}
void Rectangle::toString() {
	cout << "rectangle, " << width << ", " << height << ", ";
}