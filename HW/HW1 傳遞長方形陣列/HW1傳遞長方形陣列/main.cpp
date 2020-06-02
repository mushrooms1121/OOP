#include <iostream>
#include "Rectangle.h"
using namespace std;

void sum(Rectangle rectArray[], int size)
{
	int total = 0;
	for (int i = 0; i < size; i++)
	{
		total += rectArray[i].getArea();
	}
	cout << "Area: " << total << endl;
}

int main()
{
	double w, h;
	Rectangle rectArray[5] = {};
	Rectangle r;

	for (int i = 0; i < 5; i++)
	{
		cin >> w >> h;
		rectArray[i].setWidth(w);
		rectArray[i].setHeight(h);
		cout << rectArray[i].getArea() << " ";
	}

	cout << endl;
	cout << "Total: " << r.getNumOfRect() << " " << "rectangles" << endl;
	sum(rectArray,5);
}