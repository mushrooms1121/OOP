#include "Point.h"

int main()
{
	int x[3], y[3];
	for (int i = 0; i < 3; i++) cin >> x[i] >> y[i];

	Point point1(x[0], y[0]);
	Point point2(x[1], y[1]);
	Point point3(x[2], y[2]);

	cout << point1.toString() << "+" << point2.toString() << "-" << point3.toString() << "="
		<< ((point1.add(point2)).subtract(point3)).toString() << endl;

	system("pause");
	return 0;
	//輸入1,0,-3,1,-4,3(一個逗號一次enter)
}