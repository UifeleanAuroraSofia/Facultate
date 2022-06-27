#include<iostream>
using namespace std;

#define dim 30

class Angajat {
	char* nume;
	double salariu;
public:
	Angajat() {
		nume = new (nothrow) char[dim];
		salariu = 0.0;
	}
	char* getNume() {
		return nume;
	}
	void setNume(char* n) {
		strcpy(nume, n);
	}
	double getSalariu() {
		return salariu;
	}
	void setSalariu(double salariu) {
		this->salariu = salariu;
	}
	friend void afisare(Angajat a);
	void* operator new(size_t marime);
	void operator delete(void* p);
};

class Departament {
	Angajat* angajati;
	int nr_angajati;
public:
	Departament() {
		angajati = new (nothrow) Angajat[nr_angajati];
	}
	Departament(int n) {
		angajati = new (nothrow) Angajat[n];
		nr_angajati = n;
	}
	Angajat* getAngajati() {
		return angajati;
	}
	Angajat operator[](int poz) {
		return angajati[poz];
	}
	void citire_angajati();
};

void* Angajat::operator new(size_t marime) {
	return malloc(marime);
}

void Angajat::operator delete(void* p) {
	free(p);
}

void afisare(Angajat a) {
	cout << "\n\tDatele angajatului: ";
	cout << "\n\t\tNume: " << a.getNume();
	cout << "\n\t\tSalariu: " << a.getSalariu();
}

void Departament::citire_angajati() {
	char* nume;
	double salariu;
	nume = new (nothrow) char[dim];
	for (int i = 0; i < nr_angajati; i++) {
		cout << "\n\tAngajatul nr." << i;
		cout << "\n\tNume: ";
		cin >> nume;
		(angajati + i)->setNume(nume);
		cout << "\tSalariu: ";
		cin >> salariu;
		(angajati + i)->setSalariu(salariu);
	}
}
