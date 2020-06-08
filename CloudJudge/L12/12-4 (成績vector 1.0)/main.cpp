#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

double stuAve(vector<double> score)
{
	double total = 0;
	for (int i = 0; i < 3; i++)
	{
		total += score[i];
	}
	return total / 3;
}

double* courseAve(vector<vector<double>> score,int n)
{
	double* average = new double();
	double total = 0;
	for (int i = 0; i < 5; i++) {
		total += score[i][n];
	}
	*average = total / 5;

	return average;
}

int main()
{
	vector<vector<double>> score =
	{
		{80.0, 70.0, 90.0},
		{85.0, 77.0, 95.0},
		{83.0, 75.0, 70.0},
		{73.0, 95.0, 67.0},
		{88.0, 79.0, 71.0}
	};

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << fixed << setprecision(1) << score[i][j] << ",";
		}
		cout << stuAve(score[i]) << endl;
	}
	cout << "Average: " << *courseAve(score,0) << "," << *courseAve(score,1) << "," << *courseAve(score,2) << endl;

	system("pause");
	return 0;
}