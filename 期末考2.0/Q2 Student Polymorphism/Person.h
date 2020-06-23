#ifndef Person_H
#define Person_H
#include<string>
#include"Date.h"
using namespace std;

class Person
{
public:
    Person();
    void setName(string);
    void setBirthday(Date);
    string getName();
    Date getBirthday();
    virtual string toString() = 0;

private:
    string name;
    Date birthday;
};

#endif