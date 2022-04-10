/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Să se definească o clasă care implementează metodele:
- int plus(int x, int y), care returnează suma valorilor primite la apelul metodei;
- int minus(int x, int y), care returnează diferenta valorilor primite la apelul metodei;
- int inmultit(int x, int y), care returnează produsul valorilor primite la apelul metodei;
- float impartit(int x, int y), care returnează catul valorilor primite la apelul metodei;
şi apoi să se scrie aplicaţia care utilizează această clasă. Considerati si cazul in care in cadrul
clasei aveti atributele de tip int x si y, caz in care metodele nu vor mai avea parametrii.
Observaţie: În cazul împărţirii, trebuie verificată validitatea operaţiei (împărţitor diferit de
zero). În cazul în care operaţia este imposibilă, trebuie afişat un mesaj de eroare.
*/

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include "Calculator.h"

using namespace std;

int main()
{
	Calculator operatii;
	int nr1, nr2;
	cout << "\n\tIntroduceti doua numere intregi: ";
	cin >> nr1 >> nr2;
	operatii.setCalculator(nr1);

	cout << "\n\tPlus: " << operatii.plus(nr1, nr2);
	cout << "\n\tMinus: " << operatii.minus(nr1, nr2);
	cout << "\n\tInmultit: " << operatii.inmultit(nr1, nr2);
	cout << "\n\tImpartit: " << operatii.inpartit(nr1, nr2);

	return 0;
}