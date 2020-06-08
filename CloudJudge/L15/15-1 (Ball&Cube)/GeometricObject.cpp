#include"GeometricObject.h"

GeometricObject::GeometricObject(){
	color = "blue";
}
GeometricObject::GeometricObject(string newColor){
	setColor(newColor);
}
void GeometricObject::setColor(string newColor) {
	color = newColor;
}
string GeometricObject::getColor() {
	return color;
}