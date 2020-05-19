#include <iostream>
#include <iomanip>
#include "Rectangle.h"
using namespace std;

int main()
{
	double w1, h1, w2, h2;
	cin >> w1 >> h1 >> w2 >> h2;
	Rectangle a1(w1, h1);
	Rectangle a2(w2, h2);
	
	cout << "SwapByReference:" << fixed << setprecision(2) << a1.getArea() << " " << a2.getArea() << " to ";
	a1.swapByReference(a2);
	cout << fixed << setprecision(2) << a1.getArea() << " " << a2.getArea() << endl;

	cout << "SwapByPointer:" << fixed << setprecision(2) << a1.getArea() << " " << a2.getArea() << " to ";
	a1.swapByPointer(&a2);
	cout << fixed << setprecision(2) << a1.getArea() << " " << a2.getArea() << endl;

	system("pause");
	return 0;
}