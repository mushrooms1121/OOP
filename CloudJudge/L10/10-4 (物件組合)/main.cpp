#include "Date.h"
#include "Student.h"

int main()
{
	string n;
	int y, m, d;
	Date birth1(6, 1, 1999);
	Date birth2(10, 8, 1997);
	Student student1("John", birth1, 90);
	Student student2("Marry", birth2, 80);

	cin >> n >> y >> m >> d;
	student1.setName(n);
	student2.setDate(Date(y, m, d));
	student1.print();
	student2.print();

	system("pause");
	return 0;
}