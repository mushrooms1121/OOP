#include "Course.h"

int main()
{
	Course course1("Date Structures", 10); //給student[capacity]記憶體10個位置
	Course course2("Datebase System", 15);

	course1.addStudent("Peter Jones");
	course1.addStudent("Brian Smith");
	course1.addStudent("Anne Kennedy");

	course2.addStudent("Peter Jones");
	course2.addStudent("Steve Smith");

	cout << "Number of student in course1: " << course1.getNumberOfStudents() << endl;
	string* student = course1.getStudent();
	for (int i = 0; i < course1.getNumberOfStudents(); i++) cout << student[i] << ",";

	cout << "\nNumber of student in course2: " << course2.getNumberOfStudents() << endl;
	student = course2.getStudent();
	for (int i = 0; i < course2.getNumberOfStudents(); i++) cout << student[i] << ",";

	system("pause");
	return 0;
}