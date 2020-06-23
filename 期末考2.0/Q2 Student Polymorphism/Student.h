#ifndef Student_H
#define Student_H
#include"Person.h"
#include<iomanip>

class Student : public Person
{
public:
    Student(string, int, int, Date);
    void setMathScore(int);
    void setChineseScore(int);
    int getMathScore();
    int getChineseScore();
    double average();
    string toString();

private:
    int mathScore, chineseScore;
};
#endif
