#include <iostream>
using namespace std;

void swap1(int n1, int n2) //沒有傳值也沒有傳位置 只有在函式裡面交換 但main函式裡不會交換
{
	int temp = n1;
	n1 = n2;
	n2 = temp;
}

void swap2(int& n1, int& n2) //call by referrence 為C++標準用法
{
	int temp = n1;
	n1 = n2;
	n2 = temp;
}

void swap3(int* p1, int* p2) //變數為指標 但在main函式需要用(&,&)來做呼叫 為C標準用法
{
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

void swap4(int* &p1, int* &p2)
{
	int* temp = p1;
	p1 = p2;
	p2 = temp;
}

int main()
{
	int num1 = 1,num2 = 2;

	cout << "Before invoking the swap function,num1 is" << num1 << " and num2 is " << num2 << endl;
	swap1(num1, num2);
	cout << "After invoking the swap function,num1 is" << num1 << " and num2 is " << num2 << endl;

	cout << "Before invoking the swap function,num1 is" << num1 << " and num2 is " << num2 << endl;
	swap2(num1, num2); //有交換
	cout << "After invoking the swap function,num1 is" << num1 << " and num2 is " << num2 << endl;

	cout << "Before invoking the swap function,num1 is" << num1 << " and num2 is " << num2 << endl;
	swap3(&num1, &num2); // 有交換
	cout << "After invoking the swap function,num1 is" << num1 << " and num2 is " << num2 << endl;

	int* p1 = &num1, * p2 = &num2;

	cout << "Before invoking the swap function,p1 is" << p1 << " and p2 is " << p2 << endl;
	swap4(p1, p2); //有交換
	cout << "After invoking the swap function,num1 is" << num1 << " and num2 is " << num2 << endl;

	system("pause");
	return 0;
}