#include "Course.h"

int main()
{
	Course course1("C++", 10);
	Course course2(course1); //用了同一個記憶體

	course1.addStudent("Peter Pan"); //因為上面有copy 所以原本student是Peter
	course2.addStudent("Lisa Ma"); //後來又add Lisa覆蓋上原本的Peter

	cout << "student in circle1: " << course1.getStudent()[0] << endl; //所以印出兩個student的值都是Lisa
	cout << "student in circle2: " << course2.getStudent()[0] << endl;

	system("pause");
	return 0;
}