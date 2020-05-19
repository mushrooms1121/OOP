#include <iostream>
using namespace std;

void printArray(const int* list, const int size) //也可以寫const int list[] 
{
	for (int i = 0; i < size; i++) cout << list[i] << " ";
}

int main()
{
	int list[6] = { 11,12,13,14,15,16 };
	printArray(list, 6); //不能只寫const int list 這代表是list的位置 但上方函式是要傳入一個值

	system("pause");
	return 0;
}