#ifndef Date_H
#define Date_H
#include<string>
#include<sstream>
using namespace std;

class Date
{
public:
    Date();
    Date(int, int, int);
    void setYear(int);
    void setMonth(int);
    void setDay(int);
    int getYear();
    int getMonth();
    int getDay();
    string toString();

private:
    int year, month, day;
};

#endif