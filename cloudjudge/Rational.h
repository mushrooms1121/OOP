#ifndef Rational_H
#define Rational_H

#include<iostream>
#include<string>
#include<sstream>
#include<cstdlib>
using namespace std;

class Rational
{
public:

	Rational(int numerator, int denominator);

	int getNumerator() const;
	int getDenominator() const;

	int gcd(int n, int d);

	Rational operator+(const Rational& r2) const;
	Rational operator-(const Rational& r2) const;
	Rational operator*(const Rational& r2) const;
	Rational operator/(const Rational& r2) const;

	int compareTo(const Rational& r2) const;

	bool operator<(const Rational& r2) const;
	bool operator<=(const Rational& r2) const;
	bool operator>=(const Rational& r2) const;
	bool operator==(const Rational& r2)const;
	bool operator!=(const Rational& r2) const;

	bool operator<<(const Rational& r2);
	bool operator>>(const Rational& r2);

	int operator[](int num);

	Rational operator+=(const Rational& r2);
	Rational operator-=(const Rational& r2);
	Rational operator*=(const Rational& r2);
	Rational operator/=(const Rational& r2);

	Rational operator++(int num);
	Rational operator--(int num);

	Rational& operator++();
	Rational& operator--();

	void compareToVoid(const Rational& r2);
	string toString() const;

private:

	int numerator;
	int denominator;

};


#endif