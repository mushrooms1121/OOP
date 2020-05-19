#include <iostream>
using namespace std;

int main()
{
	int count = 5;
	int* pCount = &count;

	cout << "The value of count is " << count << endl;
	cout << "The address of count is " << &count << endl; //為count的記憶體位置
	cout << "The address of count is " << pCount << endl; //為&count 所以是count的記憶體位置
	cout << "The value of count is " << *pCount << endl; //為&count這個記憶體位置的值

	system("pause");
	return 0;
}