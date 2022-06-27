#include<iostream>
#include<string.h>

using namespace std;

const int maxx = 31;//nr. caractere
const int dim = 5;//nr. obiecte implicit
class Persoana {
	//char nume[maxx];
	char* nume;
	double greutate;
	int varsta;
public:
	Persoana() {
		nume = new (nothrow) char[maxx];
		strcpy(nume, "Necunoscut");
		greutate = 0.0;
		varsta = 0;
	}
	Persoana(char* nume, double greutate, int varsta) {
		nume = new (nothrow) char[maxx];
		strcpy(this->nume, nume);
		this->greutate = greutate;
		this->varsta = varsta;
	}
	//copy constructor
	Persoana(const Persoana& obj) {
		strcpy(nume, obj.nume);
		greutate = obj.greutate;
		varsta = obj.varsta;
	}
	//operator de asignare
	Persoana& operator= (const Persoana& obj) {
		if (this == &obj)
			return *this;
		delete[] nume;
		nume = new (nothrow) char[strlen(obj.nume) + 1];
		strcpy(nume, obj.nume);
		greutate = obj.greutate;
		varsta = obj.varsta;
		return *this;
	}
	~Persoana() {
		delete[] nume;
	}
	char* getNume() {
		return nume;
	}
	void setNume(char* n) {
		strcpy(nume, n);
	}
	double getGreutate() {
		return greutate;
	}
	void setGreutate(int greutate) {
		this->greutate = greutate;
	}
	int getVarsta() {
		return varsta;
	}
	void setVarsta(int varsta) {
		this->varsta = varsta;
	}
	void display() {
		cout << "\nNume: " << nume;
		cout << "\nGreutate: " << greutate;
		cout << "\nVarsta: " << varsta;
	}
};
//Analize si Persoana sunt in relatie de asociere
class Analize {
	Persoana* p;
	int n;
public:
	Analize() {
		p = new (nothrow) Persoana[dim];
		n = dim;
	}
	Analize(int nr) {
		p = new (nothrow) Persoana[nr];
		n = nr;
	}
	~Analize() {
		delete[] p;
	}
	void setN(int nr) {
		p = new (nothrow) Persoana[nr];
		n = nr;
	}
	void introdu() {
		int j;
		char nume[maxx];
		double greutate;
		int varsta;
		for (j = 0; j < n; j++) {
			cout << "\nDatele pentru persoana: " << j + 1; cout << "\nNume: ";
			cin >> nume;
			cout << "\nGreutate: ";
			cin >> greutate;
			cout << "\nVarsta: ";
			cin >> varsta;
			p[j].setNume(nume);
			p[j].setGreutate(greutate);
			p[j].setVarsta(varsta);
			//p[j] = Persoana(nume, greutate, varsta);
		}
	}

	void afisare() {
		int j;
		char nume[maxx];
		double greutate;
		int varsta;
		for (j = 0; j < n; j++) {
			cout << "\nDatele pentru persoana: " << j + 1; cout << "\nNume: " << p[j].getNume();
			cout << "\nGreutate: " << p[j].getGreutate();
			cout << "\nVarsta: " << p[j].getVarsta();
			//p[j] = Persoana(nume, greutate, varsta);
		}
	}

	void operator[ ](char* nume) {
		int j;
		for (j = 0; j < n; j++)
			if (strcmp(nume, p[j].getNume()) == 0) p[j].display();
	}
	void operator[ ](double greutate) {
		int j;
		for (j = 0; j < n; j++)
			if (greutate == p[j].getGreutate()) p[j].display();
	}
	void operator[ ](int varsta) {
		int j;
		for (j = 0; j < n; j++)
			if (varsta == p[j].getVarsta()) p[j].display();
	}
};