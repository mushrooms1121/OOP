#include "Course.h"

int main()
{
	Course course1("C++", 10);
	Course course2(course1); //�ΤF�P�@�ӰO����

	course1.addStudent("Peter Pan"); //�]���W����copy �ҥH�쥻student�OPeter
	course2.addStudent("Lisa Ma"); //��ӤSadd Lisa�л\�W�쥻��Peter

	cout << "student in circle1: " << course1.getStudent()[0] << endl; //�ҥH�L�X���student���ȳ��OLisa
	cout << "student in circle2: " << course2.getStudent()[0] << endl;

	system("pause");
	return 0;
}