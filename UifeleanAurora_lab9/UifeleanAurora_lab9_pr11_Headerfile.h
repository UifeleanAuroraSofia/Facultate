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
		icount++;
	}
	Fractie(int a, int b) {
		this->a = a;
		this->b = b;
		//cout << "\n\tConstructori cu parametri";
		icount++;
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
	int accesor() {
		return icount;
	}
	friend Fractie simplifica(Fractie);
	friend Fractie operator+(Fractie &obj1, Fractie &obj2);
	friend Fractie operator-(Fractie &obj1, Fractie &obj2);
	friend Fractie operator*(Fractie &obj1, Fractie &obj2);
	friend Fractie operator/(Fractie &obj1, Fractie &obj2);
	/*~Fractie() {
		cout << "\n\tDestructor cu icount " << icount;
		icount--;
	}*/
};

int Fractie::icount;

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

Fractie simplifica(Fractie obj) {
	Fractie l;
	int c = cmmdc(obj.a, obj.b);
	if (c == 1) {
		cout << "\n\tFractia nu se poate simplifica!";
		l.a = (int)obj.a;
		l.b = (int)obj.b;
		return l;
	}
	else {
		cout << "\n\tFractia se poate simplifica!";
		l.a = (int)obj.a / c;
		l.b = (int)obj.b / c;
		return l;
	}
}

Fractie operator+(Fractie& obj1, Fractie& obj2) {
	Fractie l;
	int db = cmmmc(obj1.getB(), obj2.getB());
	int dbl = db;
	int aux = db;

	db = db / obj1.getB();
	dbl = dbl / obj2.getB();

	obj1.setA(obj1.getA() * db);
	l.setA((obj2.getA() * dbl) + obj1.getA());
	l.setB(aux);

	l = simplifica(l);
	return l;
}
Fractie operator-(Fractie& obj1, Fractie& obj2) {
	Fractie l;
	int db = cmmmc(obj1.getB(), obj2.getB());
	int dbl = db;
	int aux = db;

	db = db / obj1.getB();
	dbl = dbl / obj2.getB();

	obj1.setA(obj1.getA() * db);
	l.setA((obj2.getA() * dbl) - obj1.getA());
	l.setB(aux);

	l = simplifica(l);
	return l;
}
Fractie operator*(Fractie& obj1, Fractie& obj2) {
	Fractie l;
	l.setA(obj1.getA() * obj2.getA());
	l.setB(obj1.getB() * obj2.getB());

	l = simplifica(l);
	return l;
}
Fractie operator/(Fractie& obj1, Fractie &obj2) {
	Fractie l;
	l.setA(obj1.getA() * obj2.getB());
	l.setB(obj1.getB() * obj2.getA());

	l = simplifica(l);
	return l;
}