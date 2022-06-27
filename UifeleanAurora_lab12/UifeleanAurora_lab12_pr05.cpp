/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Supraîncărcaţi operatorii de extracţie şi de inserţie pentru clasa Complex, în care părţile reale
şi imaginare sunt ambele protected de tip real. Derivaţi public o clasă Punct din clasa
Complex, adăugând atributul culoare pentru punctul de coordonate x şi y corespunzător părții
reale, respectiv imaginare a numărului complex. Supraîncărcaţi din nou aceiași operatori de
intrare-ieșire. Instantiati obiecte de tip Complex si Punct si verificati functionalitatea
supraincarcarii operatorilor. Asignati un obiect de tip Punct la unul de tip Complex prin
upcasting si afisati atributele lui.
*/

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include "UifeleanAurora_lab12_pr05_Headerfile.h"

using namespace std;

int main() {

	Complex c1;
	Punct p1;

	cin >> c1 >> p1;
	cout << "\n\tDatele introduse: ";
	cout << c1 << p1;

	c1 = p1;
	cout << "\n\n\tUpcasting (obiect de tip Punct la unul de tip Complex)";
	cout << c1;

	return 0;
}