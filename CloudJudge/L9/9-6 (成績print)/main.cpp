#include <iostream>
#include "Score.h"

int main()
{
	string n;
	int m;
	cin >> n >> m;
	Score s1("John", 90);
	Score s2("Mary", 80);
	s1.setName(n);
	s2.setMath(m);

	s1.print();
	s2.print();

	system("pause");
	return 0;
}