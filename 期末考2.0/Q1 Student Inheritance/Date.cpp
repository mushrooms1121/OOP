#include"Date.h"

Date::Date(){}
Date::Date(int newYear, int newMonth, int newDay){
    year = newYear;
    month = newMonth;
    day = newDay;
}
void Date::setYear(int newYear){
    year = newYear;
}
void Date::setMonth(int newMonth){
    month = newMonth;
}
void Date::setDay(int newDay){
    day = newDay;
}
int Date::getYear(){
    return year;
}
int Date::getMonth(){
    return month;
}
int Date::getDay(){
    return day;
}