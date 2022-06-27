#include<iostream>
using namespace std;

class Baza {
protected:
	int a, b;
public:
	Baza() { a = 1, b = 1; }
	void setA(int a) {
		this->a = a;
	}
	void setB(int b) {
		this->b = b;
	}
	int getA() {
		return a;
	}
	int getB() {
		return b;
	}
	int aduna() {
		return a + b;
	}
	int scade() {
		return a - b;
	}
};
class Derivata : public Baza
{
public:
	int inmulteste() {
		return a * b;
	}
};
