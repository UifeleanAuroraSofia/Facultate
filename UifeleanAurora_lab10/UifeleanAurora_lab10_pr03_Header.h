#include<iostream>
#include<math.h>
using namespace std;

class Baza {
protected:
	int a;
	int b;
public:
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
};

class Derivata1 : public Baza {
public:
	int plus() {
		return a + b;
	}
	int minus() {
		return a - b;
	}
	int mul() {
		return a * b;
	}
	double imp() {
		return (double)a / b;
	}
};

class Derivata2 : public Derivata1 {
public:
	double radacina(int mul) {
		return sqrt(mul);
	}
	double ridicare_putere(int plus, int minus) {
		return pow(plus, minus);
	}
};