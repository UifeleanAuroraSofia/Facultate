/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Să se scrie programul care utilizează o clasă numită Calculator şi care are în componenţa sa metodele publice
supraincarcate:
- int calcul(int x) care returnează pătratul valorii primite;
- int calcul(int x, int y) care returnează produsul celor două valori primite;
- double calcul(int x, int y, int z) care returnează rezultatul înlocuirii în formula f(x,y,z) = (x-y)(x+z)/2. a
valorilor primite;
Programul primeşte din linia de comandă toţi parametrii necesari pentru toate aceste metode ale clasei.
Considerați și cazul în care toate aceste metode sunt statice. E posibil să aveți în același timp metode publice
statice și non-statice? Analizati si cazul in care clasa are 3 atribute private de tip int, x, y, z, care sunt
modificate cu metode setter adecvate. Ce trebuie sa modificati pentru a putea efectua operatiile cerute?
*/

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include "UifeleanAurora_lab9_pr08_Headerfile.h"

using namespace std;

int main() {
	Calculator c;
	int x, y, z;
	double d = 1;
	cout << "\n\tIntroduceti de la tastatura 3 valori";
	cout << "\n\t\tx: ";
	cin >> x;
	cout << "\t\ty: ";
	cin >> y;
	cout << "\t\tz: ";
	cin >> z;
	cout << "\n\tNESTATIC:";
	cout << "\n\tPatratul lui x: " << c.calcul(x);
	cout << "\n\tProdusul lui x si y: " << c.calcul(x, y);
	cout << "\n\tRezultatul f(x,y,z) = (x-y)(x+z)/2: " << c.calcul(x, y, z);
	cout << "\n\tSTATIC:";
	cout << "\n\tPatratul lui x: " << Calculator::calcul(x, d);
	cout << "\n\tProdusul lui x si y: " << Calculator::calcul(x, y, d);
	cout << "\n\tRezultatul f(x,y,z) = (x-y)(x+z)/2: " << Calculator::calcul(x, y, z, d);
	return 0;
}