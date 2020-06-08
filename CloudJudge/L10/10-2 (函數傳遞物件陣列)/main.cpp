#include <iostream>
#include "Rectangle.h"
using namespace std;

double sum(Rectangle rectArray[], int size)
{
	double total = 0;
	for (int i = 0; i < 4; i++)
	{
		total += rectArray[i].getArea();
	}
	return total;
}

void printRectangleArray(Rectangle rectArray[], int size)
{
	for (int i = 0; i < 4; i++)
	{
		cout << rectArray[i].getWidth() << " " << rectArray[i].getHeight() << " " << rectArray[i].getArea() << endl;
	}
	cout << "Total: " << sum(rectArray, size);
}

int main()
{
	Rectangle rectArray[4];
	double w, h;
	for (int i = 0; i < 4; i++)
	{
		cin >> w >> h;
		rectArray[i].setWidth(w);
		rectArray[i].setHeight(h);
	}
	printRectangleArray(rectArray, 4);

	system("pause");
	return 0;
}