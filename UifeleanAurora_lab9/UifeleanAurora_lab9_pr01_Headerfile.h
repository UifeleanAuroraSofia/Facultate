#define _CRT_SECURE_NO_WARNINGS

#include<iostream>

using namespace std;

class Complex
{
	double real;
	double imaginar;
public:
	Complex() {
		real = 0.0;
		imaginar = 0.0;
	}
	int getReal() {
		return real;
	}
	void setReal(double real) {
		this->real = real;
	}
	int getImaginar() {
		return imaginar;
	}
	void setImaginar(double imaginar) {
		this->imaginar = imaginar;
	}
	Complex operator+ (Complex obj);
	Complex operator- (Complex obj);
	friend Complex operator* (Complex& obj1, Complex& obj2);
	friend Complex operator/ (Complex& obj1, Complex& obj2);
};

Complex Complex::operator+ (Complex obj) {
	Complex l;
	l.real = real + obj.real;
	l.imaginar = imaginar + obj.imaginar;
	return l;
}
Complex Complex::operator- (Complex obj) {
	Complex l;
	l.real = real - obj.real;
	l.imaginar = imaginar - obj.imaginar;
	return l;
}

Complex operator* (Complex& obj1, Complex& obj2) {
	Complex l;
	double aux = obj1.real;
	l.real = obj1.real * obj2.real - obj1.imaginar * obj2.imaginar;
	l.imaginar = obj1.imaginar * obj2.real + aux * obj2.imaginar;
	return l;
}

Complex operator/ (Complex& obj1, Complex& obj2) {
	Complex l;
	double aux = obj1.real;
	l.real = (double)(obj1.real * obj2.real + obj1.imaginar * obj2.imaginar) / (obj1.real * obj2.real + obj1.imaginar * obj2.imaginar);
	l.imaginar = (double)(obj1.imaginar * obj2.real - aux * obj2.imaginar) / (obj1.imaginar * obj2.real - aux * obj2.imaginar);
	return l;
}