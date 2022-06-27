/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Să se scrie programul care considera o clasa MyClass cu trei atribute de tip int. Clasa considera pe baza
mecanismului de supraincarcare metode publice int myFunction(…), care în funcţie de numărul de parametri
primiţi, returnează fie valoarea primită (1 parametru), fie produsul variabilelor de intrare (0-toti, 2, 3
parametrii). Instantiati un obiect din clasa in main(), setati atributele cu metode setter adecvate din clasa si
afisati valorile la apelurile metodelor.
*/

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include "UifeleanAurora_lab9_pr07_Headerfile.h"

using namespace std;

int main() {

	MyClass nr;
	int a, b, c;
	cout << "\n\tIntroduceti 3 numere: ";
	cin >> a >> b >> c;
	nr.setA(a);
	nr.setB(b);
	nr.setC(c);
	cout << "\n\tFunctia myFunction cu un parametru: ";
	cout << nr.myFunction(a);
	cout << "\n\tFunctia myFunction cu doi parametri (produsul primelor doua): ";
	cout << nr.myFunction(a, b);
	cout << "\n\tFunctia myFunction cu trei parametri (produsul celor 3): ";
	cout << nr.myFunction(a, b, c);
	return 0;
}