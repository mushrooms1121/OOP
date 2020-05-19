#include <iostream>
#include <iomanip>
#include "Rectangle.h"
using namespace std;

void swapByReference(Rectangle& r1, Rectangle& r2)
{
	Rectangle temp = r1;
	r1 = r2;
	r2 = temp;
}
void swapByPointer(Rectangle* r1, Rectangle* r2)
{
	Rectangle temp = *r1;
	*r1 = *r2;
	*r2 = temp;
}

int main()
{
	double w1, h1, w2, h2;
	cin >> w1 >> h1 >> w2 >> h2;
	Rectangle a1(w1, h1);
	Rectangle a2(w2, h2);

	cout << "SwapByReference:" << fixed << setprecision(2) << a1.getArea() << " " << a2.getArea() << " to ";
	swapByReference(a1,a2);
	cout << fixed << setprecision(2) << a1.getArea() << " " << a2.getArea() << endl;

	cout << "SwapByPointer:" << fixed << setprecision(2) << a1.getArea() << " " << a2.getArea() << " to ";
	swapByPointer(&a1,&a2);
	cout << fixed << setprecision(2) << a1.getArea() << " " << a2.getArea() << endl;

	system("pause");
	return 0;
}