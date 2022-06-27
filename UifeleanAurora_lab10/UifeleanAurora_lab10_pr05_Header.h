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
		double sp = (double)(a + b + c) / 2;
		sp = sp * (sp - a) * (sp - b) * (sp - c);
		return sqrt(sp);
	}
	double inaltime() {
		int maxi_taxi;
		if (a > b) {
			if (b > c) maxi_taxi = a;
		}
		if (a > c) {
			if (c > b) maxi_taxi = a;
		}
		if (b > a) {
			if (a > c) maxi_taxi = b;
		}
		if (b > c) {
			if (c > a) maxi_taxi = b;
		}
		if (c > a) {
			if (a > b) maxi_taxi = c;
		}
		if (c > b) {
			if (b > a) maxi_taxi = c;
		}
		return 2 * aria() / maxi_taxi;
	}
};