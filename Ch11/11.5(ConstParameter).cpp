#include <iostream>
using namespace std;

void printArray(const int* list, const int size) //�]�i�H�gconst int list[] 
{
	for (int i = 0; i < size; i++) cout << list[i] << " ";
}

int main()
{
	int list[6] = { 11,12,13,14,15,16 };
	printArray(list, 6); //����u�gconst int list �o�N��Olist����m ���W��禡�O�n�ǤJ�@�ӭ�

	system("pause");
	return 0;
}