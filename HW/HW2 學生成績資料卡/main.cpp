#include "StuCard.h"

double* classAver(StuCard stuArray[], int n)
{
	double* average = new double();
	double sum = 0;
	for (int i = 0; i < 5; i++)
	{
		sum += stuArray[i].getScore(n);
	}
	*average = sum / 5;
	return average;
}

int main()
{
	string n;
	bool s;
	double sc1, sc2, sc3;
	int m, d, y;
	StuCard s1("Jerry", 1, 80.0, 70.0, 90.0, Date(3, 20, 1997));
	StuCard s2("John", 1, 85.0, 77.0, 95.0, Date(5, 20, 1995));
	StuCard s3("Mary", 0, 83.0, 75.0, 70.0, Date(2, 18, 2007));
	StuCard s4("Tom", 1, 73.0, 95.0, 67.0, Date(11, 8, 2003));

	cin >> n >> s >> sc1 >> sc2 >> sc3 >> m >> d >> y;
	StuCard s5(n, s, sc1, sc2, sc3, Date(m, d, y));
	StuCard stuArray[5] = { s1,s2,s3,s4,s5 };

	for (int i = 0; i < 5; i++)
	{
		stuArray[i].printCard();
	}
	cout << "Average: " << " " << * classAver(stuArray, 0) << ", " << *classAver(stuArray, 1) << ", " << *classAver(stuArray, 2);
	
	system("pause");
	return 0;
}