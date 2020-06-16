#include "Teacher.h"

int main() {
	string n;
	int a;
	double s;
	Teacher t[4];
	for (int i = 0; i < 4; i++) {
		cin >> n >> a >> s;
		t[i] = Teacher(n, a, s); //寫法記得呦
	}

	fstream f;
	f.open("Teacher.txt", ios::out | ios::app); //out檔案開啟為寫入(輸出)狀態,app從檔案結尾寫入(輸出)資料
	for (int i = 0; i < 4; i++) {
		t[i].writeToFile(f);
	}
	f.close();

	f.open("Teacher.txt", ios::in); //檔案開啟為讀取(輸入)狀態
	for (int i = 0; i < 4; i++) {
		t[i].readFromFile(f);
	}
	f.close();

	system("pause");
	return 0;
}