#define _CRT_SECURE_NO_WARNINGS

#include<iostream>

using namespace std;

class Fractie
{
	int a;
	int b;
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
public:
	Fractie() {
		a = 0;
		b = 1;
	}
	Fractie(int a, int b) {
		this->a = a;
		this->b = b;
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
	Fractie simplifica() {
		Fractie l;
		int c = cmmdc(a, b);
		if (c == 1) {
			cout << "\n\tFractia nu se poate simplifica!";
			l.a = (int)a;
			l.b = (int)b;
			return l;
		}
		else {
			cout << "\n\tFractia se poate simplifica!";
			l.a = (int)a / c;
			l.b = (int)b / c;
			return l;
		}
	}
	Fractie adunare(Fractie obiect) {
		Fractie l;
		int db = cmmmc(b, obiect.b);
		int dbl = db;
		int aux = db;

		db = db / b;
		dbl = dbl / obiect.b;

		a = a * db;
		l.a = (obiect.a * dbl) + a;
		l.b = aux;

		return l;
	}
	Fractie scadere(Fractie obiect) {
		Fractie l;
		int db = cmmmc(b, obiect.b);
		int dbl = db;
		int aux = db;

		db = db / b;
		dbl = dbl / obiect.b;

		a = a * db;
		l.a = (obiect.a * dbl) - a;
		l.b = aux;

		return l;
	}
	Fractie inmultire(Fractie obiect) {
		Fractie l;
		l.a = a * obiect.a;
		l.b = b * obiect.b;
		return l;
	}
	Fractie impartire(Fractie obiect) {
		Fractie l;
		l.a = a * obiect.b;
		l.b = b * obiect.a;
		return l;
	}
};

