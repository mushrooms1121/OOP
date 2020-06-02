#include "Date.h"

Date::Date()
{
	month = 1;
	day = 1;
	year = 1;
}
Date::Date(int newMonth, int newDay, int newYear)
{
	setMonth(newMonth);
	setDay(newDay);
	setYear(newYear);
}
void Date::setMonth(int newMonth)
{
	month = newMonth;
}
void Date::setDay(int newDay)
{
	day = newDay;
}
void Date::setYear(int newYear)
{
	year = newYear;
}
int Date::getMonth()const
{
	return month;
}
int Date::getDay()const
{
	return day;
}
int Date::getYear()const
{
	return year;
}