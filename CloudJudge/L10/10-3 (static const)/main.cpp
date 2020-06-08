#include <iostream>
#include "Rectangle.h"
using namespace std;

int main()
{
	Rectangle rectArray[3];
	double w, h;
	for (int i = 0; i < 3; i++)
	{
		cin >> w >> h;
		rectArray[i].setWidth(w);
		rectArray[i].setHeight(h);

		cout << rectArray[i].getWidth() << " " << rectArray[i].getHeight() << " " << rectArray[i].getArea() << endl;
	}

	cout << rectArray[3].getNumOfRect() << " " << "Rectangles";

	system("pause");
	return 0;
}