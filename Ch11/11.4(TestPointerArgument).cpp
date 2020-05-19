#include <iostream>
using namespace std;

void swap1(int n1, int n2) //�S���ǭȤ]�S���Ǧ�m �u���b�禡�̭��洫 ��main�禡�̤��|�洫
{
	int temp = n1;
	n1 = n2;
	n2 = temp;
}

void swap2(int& n1, int& n2) //call by referrence ��C++�зǥΪk
{
	int temp = n1;
	n1 = n2;
	n2 = temp;
}

void swap3(int* p1, int* p2) //�ܼƬ����� ���bmain�禡�ݭn��(&,&)�Ӱ��I�s ��C�зǥΪk
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
	swap2(num1, num2); //���洫
	cout << "After invoking the swap function,num1 is" << num1 << " and num2 is " << num2 << endl;

	cout << "Before invoking the swap function,num1 is" << num1 << " and num2 is " << num2 << endl;
	swap3(&num1, &num2); // ���洫
	cout << "After invoking the swap function,num1 is" << num1 << " and num2 is " << num2 << endl;

	int* p1 = &num1, * p2 = &num2;

	cout << "Before invoking the swap function,p1 is" << p1 << " and p2 is " << p2 << endl;
	swap4(p1, p2); //���洫
	cout << "After invoking the swap function,num1 is" << num1 << " and num2 is " << num2 << endl;

	system("pause");
	return 0;
}