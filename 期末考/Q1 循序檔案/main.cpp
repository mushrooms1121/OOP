#include "Teacher.h"

int main() {
	string n;
	int a;
	double s;
	Teacher t[4];
	for (int i = 0; i < 4; i++) {
		cin >> n >> a >> s;
		t[i] = Teacher(n, a, s); //�g�k�O�o��
	}

	fstream f;
	f.open("Teacher.txt", ios::out | ios::app); //out�ɮ׶}�Ҭ��g�J(��X)���A,app�q�ɮ׵����g�J(��X)���
	for (int i = 0; i < 4; i++) {
		t[i].writeToFile(f);
	}
	f.close();

	f.open("Teacher.txt", ios::in); //�ɮ׶}�Ҭ�Ū��(��J)���A
	for (int i = 0; i < 4; i++) {
		t[i].readFromFile(f);
	}
	f.close();

	system("pause");
	return 0;
}