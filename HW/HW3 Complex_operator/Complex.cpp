#include "Complex.h"

Complex::Complex() {
	a = 0;
	b = 0;
}
Complex::Complex(int a, int b) {
	this->a = a;
	this->b = b;
}

Complex Complex::add(const Complex& c2)const {
	int f = a + c2.a;
	int s = b + c2.b;
	return Complex(f, s);
}
Complex Complex::subtract(const Complex& c2)const {
	int f = a - c2.a;
	int s = b - c2.b;
	return Complex(f, s);
}
Complex Complex::multiply(const Complex& c2)const {//(a+bi)×(c+di)=(ac−bd)+(bc+ad)i
	int f = a * c2.a - b * c2.b;
	int s = b * c2.a + a * c2.b;	
	return Complex(f, s);
}
string Complex::toString() const{
	stringstream ss;
	if (b >= 0)
		ss << "(" << a << "+" << b << "i)";
	else
		ss << "(" << a << b << "i)";
	return ss.str();
}

Complex Complex::operator+(const Complex& c2) const {
	return add(c2);
}
Complex Complex::operator-(const Complex& c2) const {
	return subtract(c2);
}
Complex Complex::operator*(const Complex& c2) const {
	return multiply(c2);
}
ostream& operator<< (ostream& out, const Complex& c) {
	if (c.b >= 0)
		out << c.a << "+" << c.b << "i";
	else
		out << c.a << c.b << "i";
	return out;
}
istream& operator>> (istream& in, Complex c) {
	in >> c.a >> c.b;
	return in;
}
int Complex::operator[](int index) {
	if (index == 0)
		return a;
	else
		return b;
}
Complex& Complex::operator+=(const Complex& c2) {
	*this = add(c2);
	return *this;
}
Complex& Complex::operator-=(const Complex& c2) {
	*this = subtract(c2);
	return *this;
}
Complex& Complex::operator*=(const Complex& c2) {
	*this = multiply(c2);
	return *this;
}
Complex& Complex::operator++() {
	a += 1;
	return *this;
}
Complex& Complex::operator--() {
	a -= 1;
	return *this;
}
Complex Complex::operator++(int dummy) {
	Complex temp(a, b);
	a += b;;
	return temp;
}
Complex Complex::operator--(int dummy) {
	Complex temp(a, b);
	a -= b;
	return temp;
}
Complex Complex::operator+() {
	return *this;
}
Complex Complex::operator-() {
	return Complex(-a, b);
}