/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Definiți o clasă Complex modelată prin atributele de tip double real, imag și un pointer de tip
char către numele fiecărui număr complex. În cadrul clasei definiți un constructor explicit cu
doi parametri care au implicit valoarea 1.0 și care alocă spațiu pentru nume un șir de maxim
15 caractere, de exemplu "c1". De asemenea, definiți un constructor de copiere pentru clasa
Complex. Clasa va mai conține metode mutator/setter și accesor/getter pentru fiecare membru
al clasei, metode care permit operațiile de bază cu numere complexe și un destructor explicit.
Definiți cel mult 10 numere complexe într-un tablou. Calculați suma numerelor complexe din
tablou, valoare ce va fi folosită pentru a inițializa un nou număr complex, cu numele
"Suma_c". Realizați aceleași acțiuni făcând diferența și produsul numerelor complexe.
*/

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include "UifeleanAurora_lab7_pr06_Headerfile.h"

using namespace std;

void afisare_numar_complex(Complex);
void citire_numere_complexe(Complex*, int);
void adunare_numere_complexe(Complex*, int);
void scadere_numere_complexe(Complex*, int);
void produs_numere_complexe(Complex*, int);

int main()
{
	int n;
	Complex* numere;

	cout << "\n\tIntroduceti numarul de numere complexe: ";
	cin >> n;
	numere = new (nothrow) Complex[n];
	citire_numere_complexe(numere, n);

	adunare_numere_complexe(numere, n);
	scadere_numere_complexe(numere, n);
	produs_numere_complexe(numere, n);

	return 0;
}

void citire_numere_complexe(Complex* nr, int n) {
	double real, imag;
	char* nume;
	nume = new (nothrow) char[dim];
	
	for (int i = 0; i < n; i++) {
		cout << "\n\tComplex Nr." << i;
		cout << "\n\t\tPartea reala: ";
		cin >> real;
		(nr + i)->setReal(real);
		cout << "\t\tPartea imaginara: ";
		cin >> imag;
		(nr + i)->setImag(imag);
		cout << "\t\tNume: ";
		cin >> nume;
		(nr + i)->setNume(nume);
	}
}

void afisare_numar_complex(Complex nr)
{
	cout << nr.getReal();
	if (nr.getImag() > 0.0) {
		cout << " + " << nr.getImag();
	}
	else {
		cout << " - " << -nr.getImag();
	}
}

void adunare_numere_complexe(Complex* nr, int n) {
	Complex local(*(nr + 0));
	for (int i = 1; i < n; i++) {
		local.adunare(*(nr + i));
	}
	cout << "\n\tAdunarea celor " << n << " numere: ";
	afisare_numar_complex(local);
}

void scadere_numere_complexe(Complex* nr, int n) {
	Complex local(*(nr + 0));
	for (int i = 1; i < n; i++) {
		local.scadere(*(nr + i));
	}
	cout << "\n\tDiferenta celor " << n << " numere: ";
	afisare_numar_complex(local);
}

void produs_numere_complexe(Complex* nr, int n) {
	Complex local(*(nr + 0));
	for (int i = 1; i < n; i++) {
		local.inmultire(*(nr + i));
	}
	cout << "\n\tProdusul celor " << n << " numere: ";
	afisare_numar_complex(local);
}