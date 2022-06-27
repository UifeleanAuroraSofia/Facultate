#include<iostream>
using namespace std;

class Triangle {
protected:
	int a;
	int b;
	int c;
public:
	Triangle() {
		a = 1;
		b = 1;
		c = 1;
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
	int getC() {
		return c;
	}
	void setC(int c) {
		this->c = c;
	}
	int perimetrul() {
		return a + b + c;
	}
};

class Triangle_extended : public Triangle {
public:
	double aria() {
		double sp = (double)(a + b + c)/ 2;
		sp = sp * (sp - a) * (sp - b) * (sp - c);
		return sqrt(sp);
	}
};