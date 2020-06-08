#include <iostream>
#include "Score.h"

int main()
{
	string n1,n2;
	int m1,m2;
	cin >> n1 >> m1 >> n2 >> m2;
	Score s1("John", 90);
	Score s2("Mary", 80);
	s1.setName(n1);
	s2.setMath(m2);

	cout << s1.getName() << " " << s1.getMath() << endl;
	cout << s2.getName() << " " << s2.getMath() << endl;

	system("pause");
	return 0;
}