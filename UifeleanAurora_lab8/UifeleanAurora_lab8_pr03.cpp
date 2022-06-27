/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Definţi o clasă numită Repository care are două variabile private de tip întreg. Clasa mai conţine un constructor
explicit vid si unul cu 2 parametri şi o metodă accesor care afişează valorile variabilelor din clasă. Scrieţi o
clasă numită Mathemathics, friend cu prima clasă, care implementează operaţiile aritmetice elementare (+, -, *,
/) asupra variabilelor din prima clasa. Fiecare metoda primeşte ca parametru un obiect al clasei Repository.
*/

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include "UifeleanAurora_lab8_pr03_Headerfile.h"

using namespace std;

int main() {

	int a, b;
	Repository obj;
	Mathematics operatie;
	
	cout << "\n\tIntroduceti doua numere intregi de la tastatura: ";
	cin >> a >> b;
	obj.setA(a);
	obj.setB(b);
	obj.accesor();

	cout << "\n\tSuma: " << operatie.adunare(obj);
	cout << "\n\tDiferenta: " << operatie.scadere(obj);
	cout << "\n\tProdus: " << operatie.inmultire(obj);
	cout << "\n\tCat: " << operatie.impartire(obj);

	return 0;
}