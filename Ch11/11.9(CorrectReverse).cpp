#ifndef CIRCLE_H
#define CIRCLE_H

class Circle
{
public:
	Circle();
	Circle(double);
	~Circle();
	double getArea() const;
	double getRadius() const;
	void setRadius(double);
	static int getNumberOfObjects();

private:
	double radius;
	static int numberOfObjects;
};
#endif


#include <iostream>
using namespace std;

int* reverse(const int* list, int size)
	{
		int* result =new int[size]; //動態配置(例如:size是5 但要存10筆 那麼size就可以輕鬆存10筆)
		//new會記憶體的每一格初始化 所以就不會有亂數產生
		for (int i = 0, j = size - 1; i < size; i++, j--) result[j] = list[i];
		return result;
	}

void printArray(const int* list, int size)
{
	for (int i = 0; i < size; i++) cout << list[i] << " ";
}

int main()
{
	int list[] = { 1,2,3,4,5,6 };
	int* p = reverse(list, 6);
	printArray(p,6);

	system("pause");
	return 0;
}
