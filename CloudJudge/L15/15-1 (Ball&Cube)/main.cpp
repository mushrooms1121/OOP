#include <iostream>
#include<iomanip>
#include"Ball.h"
#include"Cube.h"
#include"GeometricObject.h"
using namespace std;

int main() {
	double r, l;
	string c1, c2;
	cin >> r >> c1 >> l >> c2;

	Ball b(r, c1);
	Cube c(l, c2);
	cout << "Ball" << endl
		<< fixed << setprecision(1) << "radius:" << b.getRadius() << ", "
		<< "area:" << b.getArea() << ", "
		<< "volume:" << b.getVolume() << ", "
		<< "color:" << b.getColor() << endl;
	cout << "Cube" << endl
		<< fixed << setprecision(1) << "length:" << c.getLength() << ", "
		<< "area:" << c.getArea() << ", "
		<< "volume:" << c.getVolume() << ", "
		<< "color:" << c.getColor() << endl;

	system("pause");
	return 0;
}