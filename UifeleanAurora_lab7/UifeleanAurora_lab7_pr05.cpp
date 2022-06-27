/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Să se scrie o aplicaţie C/C++ în care se citeşte de la tastatură un punct prin coordonatele x, y,
z. Să se scrie o metodă prin care să se facă translaţia punctului cu o anumită distanţă pe fiecare
dintre cele trei axe. Să se verifice dacă dreapta care uneşte primul punct şi cel rezultat în urma
translaţiei trec printr-un al treilea punct dat de la consolă.
*/

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include "UifeleanAurora_lab7_pr05_Headerfile.h"

using namespace std;

int main() {
	int x, y, z, dis;
	Punct a, b, c;

	cout << "\n\tPRIMUL PUNCT: ";
	cout << "\n\t\tX: ";
	cin >> x;
	a.setX(x);
	cout << "\t\tY: ";
	cin >> y;
	a.setY(y);
	cout << "\t\tZ: ";
	cin >> z;
	a.setZ(z);

	cout << "\n\tIntroduceti o valoare de translatie a punctului pentru a obtine AL DOILEA PUNCT: ";
	cin >> dis;;


	cout << "\n\tAL TREILEA PUNCT: ";
	cout << "\n\t\tX: ";
	cin >> x;
	b.setX(x);
	cout << "\t\tY: ";
	cin >> y;
	b.setY(y);
	cout << "\t\tZ: ";
	cin >> z;
	b.setZ(z);

	if (b.coliniaritate(a, a.translatie(dis))) {
		cout << "\n\tCele trei puncte sunt coliniare";
	}
	else {
		cout << "\n\tCele trei puncte NU sunt coliniare";
	}

	return 0;
}