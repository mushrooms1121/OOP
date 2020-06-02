#ifndef Date_H
#define Date_H

class Date
{
public:
	Date();
	Date(int newMonth, int newDay, int newYear);
	void setMonth(int newMonth);
	void setDay(int newDay);
	void setYear(int newYear);
	int getMonth()const;
	int getDay()const;
	int getYear()const;

private:
	int month, day, year;
};
#endif
