#ifndef Complex_H
#define Complex_H
#include<string>
#include <sstream>
#include<iostream>
using namespace std;

class Complex
{
public:
	Complex();
	Complex(int a, int b);

	Complex add(const Complex& c2)const;
	Complex subtract(const Complex& c2)const;
	Complex multiply(const Complex& c2)const;

	string toString()const;
	Complex operator+(const Complex& c2) const;
	Complex operator-(const Complex& c2) const;
	Complex operator*(const Complex& c2) const;
	friend ostream& operator<< (ostream&, const Complex&);
	friend istream& operator>> (istream&, Complex);
	int operator[](int index);
	Complex& operator+=(const Complex& c2);
	Complex& operator-=(const Complex& c2);
	Complex& operator*=(const Complex& c2);
	Complex& operator++();
	Complex& operator--();
	Complex operator++(int dummy);
	Complex operator--(int dummy);
	Complex operator+();
	Complex operator-();

private:
	int a, b;
};
#endif // !Complex_H
