#include<iostream>
using namespace std;

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>

using namespace std;

class Fractie
{
	int a;
	int b;
public:
	static int icount;
	Fractie() {
		a = 0;
		b = 1;
		//cout << "\n\tConstructor fara parametrii";
	}
	Fractie(int a, int b) {
		this->a = a;
		this->b = b;
		//cout << "\n\tConstructori cu parametri";
	}
	Fractie(const Fractie& obj) {
		a = obj.a;
		b = obj.b;
	}
	int getA() {
		return a;
	}
	void setA(int a) {
		this->a = a;
	}
	int getB() {
		return b;
	}
	void setB(int b) {
		this->b = b;
	}
	Fractie &operator+=(Fractie& obj);
	Fractie &operator-=(Fractie& obj);
	Fractie &operator*=(Fractie& obj);
	Fractie &operator/=(Fractie& obj);
	Fractie& operator++();
	Fractie operator++(int);
	Fractie& operator--();
	Fractie operator--(int);
	/*~Fractie() {
		cout << "\n\tDestructor";
	}*/
};

int cmmdc(int a, int b) {
	while (a != b) {
		if (a > b) {
			a = a - b;
		}
		else {
			b = b - a;
		}
	}
	return a;
}
int cmmmc(int a, int b) {
	return ((a * b) / cmmdc(a, b));
}

Fractie &Fractie::operator+=(Fractie& obj) {
	int db = cmmmc(b, obj.getB());
	int dbl = db;
	int aux = db;

	db = db / obj.getB();
	dbl = dbl / obj.getB();

	a = a * db;
	a = (obj.getA() * dbl) + a;
	b = aux;

	return *this;
}
Fractie &Fractie::operator-=(Fractie& obj) {
	int db = cmmmc(b, obj.getB());
	int dbl = db;
	int aux = db;

	db = db / obj.getB();
	dbl = dbl / obj.getB();

	a = a * db;
	a = (obj.getA() * dbl) - a;
	b = aux;

	return *this;
}
Fractie &Fractie::operator*=(Fractie& obj) {
	a = a * obj.getA();
	b = b * obj.getB();

	return *this;
}
Fractie &Fractie::operator/=(Fractie& obj) {
	a = a * obj.getB();
	b = b * obj.getA();

	return *this;
}

Fractie& Fractie::operator++() {
	a = a + a * b;
	return *this;
}

Fractie Fractie::operator++(int) {
	Fractie l = *this;
	++(*this);
	return l;
}

Fractie& Fractie::operator--() {
	a = a - a * b;
	return *this;
}

Fractie Fractie::operator--(int) {
	Fractie l = *this;
	--(*this);
	return l;
}