#include <iostream>
using namespace std;

int* reverse(int* list, int size) //指標是一種變數 可儲存特定的記憶體位址
{
	for (int i = 0, j = size - 1; i < j; i++, j--)
	{
		int temp = list[j];
		list[j] = list[i];
		list[i] = temp;
	}
	return list;
}

void printArray(const int* list, int size)
{
	for (int i = 0; i < size; i++)
		cout << list[i] << " ";
}

int main()
{
	int list[] = { 1,2,3,4,5,6 };
	int* p = reverse(list, 6);
	printArray(p, 6);

	system("pause");
	return 0;
}