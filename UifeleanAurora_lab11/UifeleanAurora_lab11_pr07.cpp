/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Scrieţi o aplicaţie C/C++ în care să implementați clasa de bază abstracta PatrulaterAbstract
avand ca atribute protected patru instante ale clasei de baza Punct (o pereche de coordonate x
si y, accesori si mutatori) reprezentand coordonatele colturilor patrulaterului. Declarați două
metode membre pur virtuale pentru calculul ariei și perimetrului figurii definite. Derivați clasa
PatrulaterConcret care implementeaza metodele abstracte mostenite si care contine o metoda
proprie care determina daca patrulaterul este patrat, dreptunghi, patrulater oarecare
(convex/concav). În programul principal instanțiați clasa derivata si apelați metodele
implementate. Ariile se vor calcula functie de tipul patrulaterului. La patrulaterul convex
oarecare aria va fi data de urmatoarea formula care exprima aria functie de laturile a, b, c, d,
semiperimetrul s, si de diagonalele p, q:
A=sqrt {(s-a)(s-b)(s-c)(s-d)-1/4(ac+bd+pq)(ac+bd-pq)}. La patrulaterul concav se va
determina doar perimetrul.
*/

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include "UifeleanAurora_lab11_pr07_Headerfile.h"
using namespace std;

int main() {

	Punct a, b, c, d;
	PatrulaterConcret obj;
	int x, y;

	cout << "\n\tCititi datele a 4 puncte:";
	cout << "\n\t\tA: ";
	cin >> x >> y;
	a.setX(x);
	a.setY(y);
	cout << "\t\tB: ";
	cin >> x >> y;
	b.setX(x);
	b.setY(y);
	cout << "\t\tC: ";
	cin >> x >> y;
	c.setX(x);
	c.setY(y);
	cout << "\t\tD: ";
	cin >> x >> y;
	d.setX(x);
	d.setY(y);
	
	obj.setA(a);
	obj.setB(b);
	obj.setC(c);
	obj.setD(d);

	cout << "\n\tPerimetrul: " << obj.perimetrul();
	cout << "\n\tAria: " << obj.aria();

	return 0;
}