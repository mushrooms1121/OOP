#ifndef Teacher_H
#define Teacher_H
#include<iostream>
#include<string>
#include<fstream> //�O�oiclude�o��
#include<iomanip>
using namespace std;

class Teacher
{
public:
	Teacher();
	Teacher(string,int ,double);
	void setName(string);
	void setAge(int);
	void setScore(double);
	string getName();
	int getAge();
	double getScore();
	void readFromFile(istream &in);
	void writeToFile(ostream &out);

private:
	string name;
	int age;
	double score;
};

#endif