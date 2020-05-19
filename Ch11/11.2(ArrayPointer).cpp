#include <iostream>
using namespace std;

int main()
{
	int list[6] = { 11,12,13,14,15,16 };

	for (int i = 0; i < 6; i++)
		cout << "address: " << (list + i) << " value: " << *(list + i) << " " << "value: " << list[i] << endl;
	//list的記憶體位置為008FF8A8 所以list+1為008FF8A8+4=008FF8AC

	system("pause");
	return 0;
}
