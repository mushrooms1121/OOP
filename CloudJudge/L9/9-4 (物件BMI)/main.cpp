#include <iostream>
#include "BMI.h"
using namespace std;

int main()
{
	string n;
	double w, h;
	cin >> n >> w >> h;
	
	BMI b(w, h);
	cout << n << " " << fixed << setprecision(2) << b.getBMI() << endl;

	system("pause");
	return 0;
}