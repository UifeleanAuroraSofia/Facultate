#include<iostream>
using namespace std;


class Complex {
protected:
	double re;
	double im;
public:
	Complex() = default;
	Complex(double re, double im) {
		this->re = re;
		this->im = im;
	}
	friend istream& operator >>(istream& stream, Complex& obj);
	friend ostream& operator <<(ostream& stream, Complex obj);
};

class Punct : public Complex {
private:
	char culoare;
public:
	Punct() = default;
	Punct(double x, double y) {
		re = x;
		im = y;
	}
	friend istream& operator >>(istream& stream, Punct& obj);
	friend ostream& operator <<(ostream& stream, Punct obj);
};

istream& operator >>(istream& stream, Complex& obj) {
	cout << "\n\tRe: ";
	stream >> obj.re;
	cout << "\tIm: ";
	stream >> obj.im;
	return stream;
}

ostream& operator <<(ostream& stream, Complex obj) {
	cout << "\n\tDate despre numarul complex";
	stream << "\n\tRe: " << obj.re;
	stream << "\n\tIm: " << obj.im;
	return stream;
}

istream& operator >>(istream& stream, Punct& obj) {
	cout << "\n\tX: ";
	stream >> obj.re;
	cout << "\tY: ";
	stream >> obj.im;
	cout << "\tCuloare: ";
	stream >> obj.culoare;
	return stream;
}

ostream& operator <<(ostream& stream, Punct obj) {
	cout << "\n\tDate despre punct";
	stream << "\n\tX: " << obj.re;
	stream << "\n\tY: " << obj.im;
	stream << "\n\tCuloare: " << obj.culoare;
	return stream;
}