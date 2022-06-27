/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Scrieţi o aplicaţie C/C++ în care să implementați clasa Punct cu atributele private x si y. Implementați o funcție
friend care să calculeze si sa afiseze aria și perimetrul a doua forme geometrice definite de două puncte,
considerând că aceasta are doua puncte ca si parametrii P0(x0,y0) și P1 (x1,y1). Adăugați funcției un
parametru întreg figura prin care să indicați cele doua figuri geometrice ce sunt definite de punctele (x0, y0) si
(x1, y1). Astfel, pentru un cerc, figura=1, coordonatele (x0, y0) și (x1, y1) vor reprezenta două puncte
complementare pe cerc (diametrul). Dacă este triunghi dreptunghic, punctele definesc ipotenuza iar figura va fi
=2; Celelalte laturi ale triunghiului se vor determina pornind de la cele doua puncte. Coordonatele punctelor si
apoi selecția figurii geometrice se va realiza introducând de la tastatura parametrii.
*/

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include "UifeleanAurora_lab8_pr06_Headerfile.h"

using namespace std;

int main() {

	int x, y, figura;
	Punct a, b;

	cout << "\n\tPRIMUL PUNCT";
	cout << "\n\t\tX: ";
	cin >> x;
	a.setX(x);
	cout << "\t\tY: ";
	cin >> y;
	a.setY(y);

	cout << "\n\tAL DOILEA PUNCT";
	cout << "\n\t\tX: ";
	cin >> x;
	b.setX(x);
	cout << "\t\tY: ";
	cin >> y;
	b.setY(y);

	cout << "\n\tA carei figura geometrica formata din cele doua puncte doriti sa aflati perimetrul si aria?";
	cout << "\n\t\t1.Cerc\n\t\t2.Triunghi dreptunghic";
	
	do {
		cout << "\n\tApasati tasta corespunzatoare numerotarii acestora: ";
		cin >> figura;
		if (figura != 1 && figura != 2) {
			cout << "\n\tCod incorect. ";
		}
	} while (figura != 1 && figura != 2);

	aria_perimetrul(a, b, figura);

	return 0;
}