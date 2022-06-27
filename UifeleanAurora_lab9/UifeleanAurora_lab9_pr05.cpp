/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Să se supraîncarce operatorul [ ] astfel încât, folosit fiind asupra unor obiecte din clasa Departament, ce
contine un tablou de obiecte de tip Angajat (clasa Angajat contine variabilele nume (şir de caractere) şi salariu
(double)), să returneze toată informaţia legată de angajatul al cărui număr de ordine este trimis ca parametru.
*/

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include "UifeleanAurora_lab9_pr05_Headerfile.h"

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
	return 0;
}