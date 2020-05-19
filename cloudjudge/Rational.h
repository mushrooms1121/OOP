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
----------------------------------------------------------------------------------------------------------------------------------------
#include"Rational.h"

Rational::Rational(int numerator, int denominator) :numerator(0), denominator(0)
{

    int factor = gcd(numerator, denominator);
    this->numerator = ((denominator > 0 ? 1 : 0) * numerator / factor);
    this->denominator = abs(denominator) / factor;

}

int Rational::getNumerator() const
{
    return numerator;
}
int Rational::getDenominator() const
{
    return denominator;
}

int Rational::gcd(int n, int d)
{
    int n1 = abs(n);
    int n2 = abs(d);
    int gcd = 1;

    for (int i = 1; i <= n1 && i <= n2; i++)
    {
        if (n1 % i == 0 && n2 % i == 0)
            gcd = i;
    }

    return gcd;
}

Rational Rational::operator+(const Rational& r2) const
{
    int n = numerator * r2.getDenominator() +
        denominator * r2.getNumerator();
    int d = denominator * r2.getDenominator();
    return Rational(n, d);
}
Rational Rational::operator-(const Rational& r2) const
{
    int n = numerator * r2.getDenominator()
        - denominator * r2.getNumerator();
    int d = denominator * r2.getDenominator();
    return Rational(n, d);
}
Rational Rational::operator*(const Rational& r2) const
{
    int n = numerator * r2.getNumerator();
    int d = denominator * r2.getDenominator();
    return Rational(n, d);
}
Rational Rational::operator/(const Rational& r2) const
{
    int n = numerator * r2.getDenominator();
    int d = denominator * r2.numerator;
    return Rational(n, d);
}

int Rational::compareTo(const Rational& r2) const
{
    Rational temp = *this - r2;
    if (temp.getNumerator() == 0) return 0;
    else if (temp.getNumerator() < 0) return -1;
    else return 1;
}

bool Rational::operator<(const Rational& r2) const
{
    return (compareTo(r2) < 0);
}
bool Rational::operator<=(const Rational& r2) const
{
    return (compareTo(r2) <= 0);
}
bool Rational::operator>=(const Rational& r2) const
{
    return (compareTo(r2) >= 0);
}
bool Rational::operator==(const Rational& r2)const
{
    return (compareTo(r2) == 0);
}
bool Rational::operator!=(const Rational& r2) const
{
    return (compareTo(r2) != 0);
}

bool Rational::operator<<(const Rational& r2)
{
    return (compareTo(r2) << 0);
}
bool Rational::operator>>(const Rational& r2)
{
    return (compareTo(r2) >> 0);
}

int Rational::operator[](int num)
{
    if (num == 0) return numerator;
    else return denominator;
}

Rational Rational::operator+=(const Rational& r2) {
    Rational temp = *this + r2;
    return temp;
}
Rational Rational::operator-=(const Rational& r2)
{
    Rational temp = *this - r2;
    return temp;
}
Rational Rational::operator*=(const Rational& r2)
{
    Rational temp = *this * r2;
    return temp;
}
Rational Rational::operator/=(const Rational& r2)
{
    Rational temp = *this / r2;
    return temp;
}

Rational Rational::operator++(int num)
{
    Rational temp(numerator, denominator);
    numerator += denominator;
    return temp;
}
Rational Rational::operator--(int num)
{
    Rational temp(numerator, denominator);
    numerator -= denominator;
    return temp;
}

Rational& Rational::operator++()
{
    numerator += denominator;
    return *this;
}
Rational& Rational::operator--()
{
    numerator -= denominator;
    return *this;
}

string Rational::toString() const
{
    stringstream ss;
    ss << numerator;

    if (denominator > 1)
        ss << "/" << denominator;

    return ss.str();
}

void Rational::compareToVoid(const Rational& r2)
{
    if (compareTo(r2) == 0) cout << numerator << "/" << denominator << "=" << r2.toString();
    else if (compareTo(r2) < 0) cout << numerator << "/" << denominator << "<" << r2.toString();
    else cout << numerator << "/" << denominator << ">" << r2.toString();
}
----------------------------------------------------------------------------------------------------------------------------------------
