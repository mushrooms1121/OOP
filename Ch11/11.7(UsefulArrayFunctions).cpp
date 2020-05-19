#include <iostream>
#include <algorithm> //min_element, max_element, random_shuffle, sort
using namespace std;

void printArray(const int* list, int size)
{
	for (int i = 0; i < size; i++) cout << list[i] << " ";
	cout << endl;
}

int main()
{
	int list[] = { 4,2,3,6,5,1 };
	printArray(list, 6);

	int* min = min_element(list, list + 6); //(list����0��m(first), list����5��m(last))
	int* max = max_element(list, list + 6);
	cout << "The min value is " << *min << " at index " << (min - list) << endl; //index������ 1�b�Ĥ��Ӧ�m(5-0)
	cout << "The max value is " << *max << " at index " << (max - list) << endl;

	random_shuffle(list, list + 6); //�H���~�P
	printArray(list, 6);

	sort(list, list + 6); //�Ƨ� �Ҹեi��Ҫ��禡!!!
	printArray(list, 6);

	int key1 = 4;
	int* p1 = find(list, list + 6, key1); //�d�߱q���w��m�}�l���Ĥ@���X�{���ؼЦr��(first,last,�ؼ�)
	if (p1 != list + 6)
		cout << "The value " << *p1 << " is found at position " << (p1 - list) << endl; 
		//find�|�Ǧ^�ӭȪ���} cout�b�ѰѷӦL�X�ӭ�
	else
		cout << "The value " << *p1 << " is not found" << endl;

	int key2 = 10;
	int* p2 = find(list, list + 6, key2); //�p�G�䤣��ӭ� �|�Ǧ^�Ӱ}�C���̫�@�ӭȪ���}
	if (p2 != list + 6)
		cout << "The value " << *p2 << " is found at position " << (p2 - list) << endl;
	else
		cout << "The value " << *p2 << " is not found" << endl; 
		//�̫�@�ӭȬOlist+6(list[6]) ��list�u��list[5]�Ӥw �õLlist[6]�o�ӭ� �ҥH�ѰѷӥX�Ӷü�

	system("pause");
	return 0;
}