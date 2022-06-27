/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Să se supraîncarce operatorii new şi delete într-una din clasele cu care s-a lucrat anterior, în vederea alocarii şi
eliberarii de memorie pentru un obiect din clasa respectivă.
*/

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include "UifeleanAurora_lab9_pr06_Headerfile.h"

using namespace std;

int main() {
	int n, index;
	cout << "\n\tIntroduceti numarul de angajati: ";
	cin >> n;
	Departament a(n);
	a.citire_angajati();
	cout << "\n\tIntroduceti numarul de index al angajatului: ";
	cin >> index;
	Angajat angajatul = a[index];
	afisare(angajatul);
	delete(a.getAngajati());
	return 0;
}