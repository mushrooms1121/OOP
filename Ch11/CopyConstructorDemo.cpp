#include <iostream>
#include "CirclewithDestructor.h"
using namespace std;

int main()
{
	Circle circle1(5);
	Circle circle2(circle1); //½Æ»scircle1ªº­È

	cout << "After creating circle2 from circle1: " << endl;
	cout << "\tcircle1.getRandius() returns " << circle1.getRadius() << endl;
	cout << "\tcircle2.getRandius() returns " << circle2.getRadius() << endl;

	circle1.setRadius(10.5);
	circle2.setRadius(20.5);
	cout << "After creating circle1 from circle2: " << endl;
	cout << "\tcircle1.getRandius() returns " << circle1.getRadius() << endl;
	cout << "\tcircle2.getRandius() returns " << circle2.getRadius() << endl;

	system("pause");
	return 0;
}