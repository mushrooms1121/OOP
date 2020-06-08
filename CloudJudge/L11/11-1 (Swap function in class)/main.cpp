#include <iostream>
#include "Rectangle.h"
using namespace std;

int main()
{
	double w1, h1, w2, h2;
	cin >> w1 >> h1 >> w2 >> h2;
	Rectangle r1(w1, h1);
	Rectangle r2(w2, h2);
	r1.swapByReference(r2);
	r1.swapByPointer(&r2);

	cout << "SwapByReference:" <<fixed << setprecision(2) << r1.getArea() << " " << r2.getArea() << " to ";
	r1.swapByReference(r2);
	cout << fixed << setprecision(2) << r1.getArea() << " " << r2.getArea() << endl;

	cout << "SwapByPointer:" << fixed << setprecision(2) << r1.getArea() << " " << r2.getArea() << " to ";
	r1.swapByPointer(&r2);
	cout<< fixed << setprecision(2) << r1.getArea() << " " << r2.getArea() << endl;

	system("pause");
	return 0;
}