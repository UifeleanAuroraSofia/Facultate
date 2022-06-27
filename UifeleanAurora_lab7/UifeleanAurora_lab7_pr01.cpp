/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Modificaţi exemplul 3 astfel încât să permită obtinerea unui nou punct, avand coordonatele
obtinute prin adunarea coordonatelor a două astfel de puncte. Numele noului punct va fi
rezultat prin concatenarea numelor celor două puncte. Adaugati si testati o metoda care
calculeaza distanta de la un punct la origine. Modificați clasa astfel încât sa eliminați metoda
afis() folosind in schimb metode accesor adecvate. Eliminați de asemenea atributul
lungime_sir modificând adecvat metodele clasei. Adaugati si un move constructor. Testati
utilizand si functii specifice sirurilor de caractere din VC++1y/2z (strcpy_s( ) si strcat_s( )).
*/

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include "UifeleanAurora_lab7_pr01_Headerfile.h"

using namespace std;

int main() {
	CPunctText p1;
	CPunctText p2;
	int x1, y1, x2, y2;
	string nume;
	cout << "\n\tPRIMUL PUNCT:";
	cout << "\n\tX: ";
	cin >> x1;
	p1.setX(x1);
	cout << "\tY: ";
	cin >> y1;
	p1.setY(y1);
	cout << "\tNume: ";
	cin >> nume;
	p1.setSNume(nume);
	cout << "\n\tAL DOILEA PUNCT:";
	cout << "\n\tX: ";
	cin >> x2;
	p2.setX(x2);
	cout << "\tY: ";
	cin >> y2;
	p2.setY(y2);
	cout << "\tNume: ";
	cin >> nume;
	p2.setSNume(nume);

	CPunctText p3(p1);
	p3.adunare(p2);
	cout << "\n\tAdunarea celor doua puncte: ";
	cout << "\n\tX: " << p3.getX();
	cout << "\n\tY: " << p3.getY();
	cout << "\n\tNume: " << p3.getSNume();

	return 0;
}