#include <iostream>
using namespace std;

int main()
{
	int list[6] = { 11,12,13,14,15,16 };

	for (int i = 0; i < 6; i++)
		cout << "address: " << (list + i) << " value: " << *(list + i) << " " << "value: " << list[i] << endl;
	//list���O�����m��008FF8A8 �ҥHlist+1��008FF8A8+4=008FF8AC

	system("pause");
	return 0;
}