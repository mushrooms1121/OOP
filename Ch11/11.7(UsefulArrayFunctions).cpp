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

	int* min = min_element(list, list + 6); //(list的第0位置(first), list的第5位置(last))
	int* max = max_element(list, list + 6);
	cout << "The min value is " << *min << " at index " << (min - list) << endl; //index為索引 1在第五個位置(5-0)
	cout << "The max value is " << *max << " at index " << (max - list) << endl;

	random_shuffle(list, list + 6); //隨機洗牌
	printArray(list, 6);

	sort(list, list + 6); //排序 考試可能考的函式!!!
	printArray(list, 6);

	int key1 = 4;
	int* p1 = find(list, list + 6, key1); //查詢從指定位置開始的第一次出現的目標字串(first,last,目標)
	if (p1 != list + 6)
		cout << "The value " << *p1 << " is found at position " << (p1 - list) << endl; 
		//find會傳回該值的位址 cout在解參照印出該值
	else
		cout << "The value " << *p1 << " is not found" << endl;

	int key2 = 10;
	int* p2 = find(list, list + 6, key2); //如果找不到該值 會傳回該陣列的最後一個值的位址
	if (p2 != list + 6)
		cout << "The value " << *p2 << " is found at position " << (p2 - list) << endl;
	else
		cout << "The value " << *p2 << " is not found" << endl; 
		//最後一個值是list+6(list[6]) 但list只到list[5]而已 並無list[6]這個值 所以解參照出來亂數

	system("pause");
	return 0;
}