#include <iostream>
using namespace std;

template<typename T>
void reverse(const T list[], T newList[], int size)
{
	for (int i = 0, j = size - 1; i < size; i++, j--) newList[j] = list[i];
}

template<typename T>
void printArray(const T list[], int size)
{
	for (int i = 0; i < size; i++) cout << list[i] << " ";
}

int main()
{
	const int SIZE = 6;
	char list1[] = {'a','b','c','d','e','f'},newList[SIZE];
	double list2[] = { 1.1,2.2,3.3,4.4,5.5,6.6 },newList2[SIZE]; //每個都要加newList[SIZE]

	reverse(list1, newList, SIZE);
	cout << "The original array: ";
	printArray(list1, SIZE);
	cout << endl;
	cout << "The reversed array: ";
	printArray(newList, SIZE);
	cout << endl;

	reverse(list2, newList2, SIZE);
	cout << "The original array: ";
	printArray(list2, SIZE);
	cout << endl;
	cout << "The reversed array: ";
	printArray(newList2, SIZE);
	cout << endl;

	system("pause");
	return 0;
}
