#include <iostream>
using namespace std;

int main()
{
	int count = 5;
	int* pCount = &count;

	cout << "The value of count is " << count << endl;
	cout << "The address of count is " << &count << endl; //��count���O�����m
	cout << "The address of count is " << pCount << endl; //��&count �ҥH�Ocount���O�����m
	cout << "The value of count is " << *pCount << endl; //��&count�o�ӰO�����m����

	system("pause");
	return 0;
}