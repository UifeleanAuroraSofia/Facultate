#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<string.h>

using namespace std;

#define dim 30

class Calculator;

class Placa_de_baza {
	char* denumire_procesor;
public:
	Placa_de_baza() {
		denumire_procesor = new (nothrow) char[dim];
		strcpy(denumire_procesor, "Intel");
	}
	char* getDenumire() {
		return denumire_procesor;
	}
	void setDenumire(char* nume) {
		denumire_procesor = new (nothrow) char[dim];
		strcpy(denumire_procesor, nume);
	}
	void tehnician_service(Calculator obj1, Placa_de_baza obj2, int memorie, char* nume);
};

class Calculator {
	int memorie_RAM;
public:
	Calculator() {
		memorie_RAM = 0;
	}
	int getMemorie() {
		return memorie_RAM;
	}
	void setMemorie(int memorie) {
		memorie_RAM = memorie;
	}
	friend void Placa_de_baza::tehnician_service(Calculator obj1, Placa_de_baza obj2, int memorie, char* nume);
};

void Placa_de_baza::tehnician_service(Calculator obj1, Placa_de_baza obj2, int memorie, char* nume) {
	obj1.memorie_RAM = memorie;
	strcpy(denumire_procesor, nume);
	cout << "\n\tDenumirea prodesorului: " << obj2.getDenumire();
	cout << "\n\tMemoria calculatorului: " << obj1.getMemorie();
}