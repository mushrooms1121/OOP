#include "CourseWithCustomCopyConstructorcpp.h"

int main()
{
	Course course1("C++ Programming", 10);
	Course course2(course1);

	course1.addStudent("Peter Pan");
	course2.addStudent("Lisa Ma");

	cout << "student in circle1: " << course1.getStudent()[0] << endl;
	cout << "student in circle2: " << course2.getStudent()[0] << endl;

	system("pause"); 
	return 0;
}