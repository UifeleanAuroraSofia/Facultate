/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Definţi o clasă numită Number care are o variabilă private de tip double. Clasa mai conţine un constructor
explicit vid și unul cu un parametru şi o metodă accesor care afişează valoarea variabilei din clasă. Scrieţi o
clasă numită Mathemathics, care supraîncarcă operatorii specifici operațiilor aritmetice elementare (+, -, *, /).
Clasa are ca atribut un obiect instanțiat din prima clasa. Operațiile artimetice se efectuează asupra datelor
obținute din obiectul de tip Number
*/

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include "UifeleanAurora_lab9_pr10_Headerfile.h"

using namespace std;

int main() {

	Mathematics a, b;
	Number nr1, nr2;
	double n1, n2;
	cout << "\n\tIntroduceti doua numere reale: ";
	cin >> n1 >> n2;
	nr1.setNr(n1);
	nr2.setNr(n2);
	a.setNumar(nr1);
	b.setNumar(nr2);

	Mathematics c = a + b;
	cout << "\n\tSuma celor doua numere: " << c.getNumar().getNr();
	Mathematics d = a - b;
	cout << "\n\tDiferenta celor doua numere: " << d.getNumar().getNr();
	Mathematics e = a * b;
	cout << "\n\tProdusul celor doua numere: " << e.getNumar().getNr();
	Mathematics f = a / b;
	cout << "\n\tCatul celor doua numere: " << f.getNumar().getNr();

	return 0;
}