#define _CRT_SECURE_NO_WARNINGS

#include<iostream>

using namespace std;

class Pair{
	int* x;
	int* y;
public:
	Pair() {
		x = new (nothrow) int;
		y = new (nothrow) int;
		*x = (int)0;
		*y = (int)0;
	}
	Pair(int a, int b) {
		x = new (nothrow) int;
		y = new (nothrow) int;
		*x = (int)a;
		*y = (int)b;
	}
	Pair(int a) {
		x = new (nothrow) int;
		y = new (nothrow) int;
		*x = (int)a;
		*y = (int)0;
	}
	Pair(Pair& obiect);
	Pair(Pair&& obiect);
	~Pair() {
		if (x != nullptr) {
			cout << "\n\tDestructor pointer normal";
		} 
		else {
			cout << "\n\tDestructor pointer nullptr";
		}
		delete x;
	}
	int getX() {
		return *x;
	}
	void setX(int a) {
		*x = a;
	}
	int getY() {
		return *y;
	}
	void setY(int b) {
		*y = b;
	}
	Pair sum(Pair obiect);
	double media();
};

Pair::Pair(Pair& obiect) {
	x = new (nothrow) int;
	y = new (nothrow) int;
	*x = (int)*(obiect.x);
	*y = (int)*(obiect.y);
}

Pair::Pair(Pair&& obiect) {
	x = obiect.x;
	y = obiect.y;
	obiect.x = nullptr;
	obiect.y = nullptr;
}

Pair Pair::sum(Pair obiect) {
	Pair l;
	l.x = new (nothrow) int;
	l.y = new (nothrow) int;
	*(l.x) = *x + (int)*(obiect.x);
	*(l.y) = *y + (int)*(obiect.y);
	return l;
}

double Pair::media() {
	return (double)(*x + *y) / 2;
}