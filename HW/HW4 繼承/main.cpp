#include"Ball.h"
#include"Circle.h"
#include"Cube.h"
#include"Rectangle.h"
#include"Shape.h"
#include"Shape2D.h"
#include"Shape3D.h"
#include<iostream>
#include<iomanip>
using namespace std;

//要加位址
bool equalArea(Shape& s1, Shape& s2) { //面積
	return s1.getArea() == s2.getArea();
}

double equalVolume(Shape3D& s31, Shape3D& s32) { //體積
	return s31.getVolume() == s32.getVolume();
}

double equalPerimeter(Shape2D& s21, Shape2D& s22) { //周長
	return s21.getPerimeter() == s22.getPerimeter();
}

void display(Shape& s) {
	cout << s.toString() << s.getColor() << ", " 
		<< fixed << setprecision(2) << s.getArea() << endl;
}

int main() {
	Circle circle(5, "yellow", 1);
	Rectangle rectangle(3, 4, "red", 0);
	Ball ball(5, "blue", 1);
	Cube cube(4, "black", 0);

	display(circle);
	display(rectangle);
	display(ball);
	display(cube);

	cout << "circle " << fixed << setprecision(2) << circle.getPerimeter()
		<< (equalPerimeter(circle, rectangle) ? "=" : "!=")
		<< "rectangle " << rectangle.getPerimeter() << endl;
	cout << "ball " << fixed << setprecision(2) << ball.getVolume()
		<< (equalVolume(circle, rectangle) ? "=" : "!=")
		<< "cube " << cube.getVolume() << endl;

	system("pause");
	return 0;
}