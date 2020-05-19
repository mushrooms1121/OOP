#include <iostream>
#include <vector>
using namespace std;

int min(vector<vector<int>>m)
{
	int min = m[0][0];
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 3; j++) min = (min > m[i][j]) ? m[i][j] : min; //if寫法 慢慢改成這種
	}
	return min;
}

int main()
{
	vector<vector<int>>m(4,vector<int>(3)); //vector是這樣宣告 記住!!!

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 3; j++) cin >> m[i][j];
	}
	cout << "min: " << min(m) << endl;

	system("pause");
	return 0;
}
