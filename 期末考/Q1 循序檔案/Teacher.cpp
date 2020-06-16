#include "Teacher.h"

Teacher::Teacher() {
	this->name = name;
	this->age = age;
	this->score = score;
}
Teacher::Teacher(string newName, int newAge, double newScore) {
	setName(newName);
	setAge(newAge);
	setScore(newScore);
}
void Teacher::setName(string newName) {
	name = newName;
}
void Teacher::setAge(int newAge) {
	age = newAge;
}
void Teacher::setScore(double newScore) {
	score = newScore;
}
string Teacher::getName() {
	return name;
}
int Teacher::getAge() {
	return age;
}
double Teacher::getScore() {
	return score;
}
void Teacher::readFromFile(istream &in) { 
	string newName;
	int NewAge;
	double NewScore;
	in >> newName >> NewAge >> NewScore;
	cout << newName << " " << NewAge << " " 
		<< fixed << setprecision(1) << NewScore << endl;
}
void Teacher::writeToFile(ostream &out) {
	out << name << " " << age << " " << fixed << setprecision(1) << score << endl;
}