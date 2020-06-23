#ifndef Date_H
#define Date_H

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

private:
    int year, month, day;
};

#endif