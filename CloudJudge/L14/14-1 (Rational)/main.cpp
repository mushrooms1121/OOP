#include"Rational.h"

int main() {

	Rational f1(2, 3);
	Rational f2(5, 7);
	Rational f3(3, 5);

	Rational s1(7, 2);
	Rational s2(5, 6);
	Rational s3(5, 7);

	Rational first = f1 + f2 * f3;
	Rational second = (s1 - s2) / s3;

	cout << "first=" << first.toString() << endl;
	cout << "second=" << second.toString() << endl;

	first++;
	cout << "++first=" << first.toString() << endl;
	second--;
	cout << "--second=" << second.toString() << endl;

	first.compareToVoid(second);

	system("pause");
	return 0;
}