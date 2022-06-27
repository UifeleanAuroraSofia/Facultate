#include<iostream>
using namespace std;

class Animal {
protected:
	int r;
	int m;
	int d;
public:
	Animal() {
		r = 0;
		m = 0;
		d = 0;
	}
	Animal(int r, int m, int d) {
		this->r = r;
		this->m = m;
		this->d = d;
	}
	virtual int respira() = 0;
	virtual int mananca() {
		return m;
	}
	virtual int doarme() {
		return d;
	}
};

class Caine : public Animal {
public:
	Caine(int = 1, int = 1, int = 1);
	Caine(const Caine&);
	int respira() {
		return r;
	}
	int mananca() override {
		return m;
	}
};

Caine::Caine(int r, int m, int d) :Animal(r, m, d) {
	this->r = r;
	this->m = m;
	this->d = d;
}

Caine::Caine(const Caine& obj) {
	r = obj.r;
	m = obj.m;
	d = obj.d;
}

class Peste : public Animal {
public:
	Peste(int = 1, int = 1, int = 1);
	int respira() {
		return r;
	}
	int doarme() override {
		return d;
	}
};

Peste::Peste(int r, int m, int d) :Animal(r, m, d) {
	this->r = r;
	this->m = m;
	this->d = d;
}