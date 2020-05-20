#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	vector<vector<int>>m(4, vector<int>(3));
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 3; j++) cin >> m[i][j];
	}
	int* min = min_element(&m[0][0], &m[4][3]);
	cout << "min: " << *min << endl;

	system("pause");
	return 0;
}
