#define _CRT_SECURE_NO_WARNINGS

#include<iostream>

#define dim 15

using namespace std;

class Complex{
	double real;
	double imag;
	char* nume;
public:
	Complex() {
		real = 1.0;
		imag = 1.0;
		nume = new (nothrow) char[dim];
		strcpy(nume, "c1");
	}
	Complex(double r, double i){
		real = r = 1.0;
		imag = i = 1.0;
		nume = new (nothrow) char[dim];
		strcpy(nume, "c1");
	}
	Complex(const Complex& copie);
	~Complex();
	double getReal(){
		return real;
	}
	void setReal(double real){
		this->real = real;
	}
	double getImag() {
		return imag;
	}
	void setImag(double imag) {
		this->imag = imag;
	}
	char* getNume() {
		return nume;
	}
	void setNume(char* n) {
		strcpy(nume, n);
	}
	void adunare(Complex nr) {
		real += nr.real;
		imag += nr.imag;
	}
	void scadere(Complex nr) {
		real -= nr.real;
		imag -= nr.imag;
	}
	void inmultire(Complex nr) {
		double aux = real;
		real = real * nr.real - imag * nr.imag;
		imag = imag * nr.real + aux * nr.imag;
	}
	void impartire(Complex nr) {
		double aux = real;
		real = (double)(real * nr.real + imag * nr.imag) / (nr.real * nr.real + nr.imag * nr.imag);
		imag = (double)(imag * nr.real - aux * nr.imag) / (nr.real * nr.real + nr.imag * nr.imag);
	}
};

Complex::Complex(const Complex& copie){
	real = copie.real;
	imag = copie.imag;
	nume = new (nothrow) char[dim];
	strcpy(nume, copie.nume);
	//cout << "\n\tCopy constructor.";
}
Complex::~Complex(){
	//cout << "\n\tDestructor explicit.";
}