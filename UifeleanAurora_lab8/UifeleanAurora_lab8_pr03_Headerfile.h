#define _CRT_SECURE_NO_WARNINGS

#include<iostream>

using namespace std;

class Repository {
	int a;
	int b;
public: 
	Repository() {
		a = 0;
		b = 0;
	}
	Repository(int a, int b) {
		this->a = a;
		this->b = b;
	}
	void accesor() {
		cout << "\n\tPrima valoare: " << a;
		cout << "\n\tA doua valoare: " << b;
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
	friend class Mathematics;
};

class Mathematics {
public:
	int adunare(Repository obj) {
		return obj.a + obj.b;
	}
	int scadere(Repository obj) {
		return obj.a - obj.b;
	}
	int inmultire(Repository obj) {
		return obj.a * obj.b;
	}
	float impartire(Repository obj) {
		return (float)obj.a / obj.b;
	}
};