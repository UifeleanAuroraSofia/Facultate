/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Considerati o clasa Pair care are doua atribute de tip pointeri spre int, *x si *y. Definiti un
constructor fara parametri care initializeaza zonele cu 0, cu doi parametri care initializeaza
zonele cu valorile specificate ca si parametrii, un constructor cu un parametru care apeleaza
constructorul cu doi parametrii cu valori date de parametru si 0. Clasa are un copy constructor,
un move constructor, un destructor (care distinge obiectele care sunt temporare) si seteri si
geteri care gestioneaza adecvat atributele. Se defineste o metoda sum() care are ca si
parametru un obiect Pair si returneaza un obiect Pair suma a obiectului curent cu cel dat ca si
parametru. Clasa mai contine o metoda media() care returneaza media aritmetica de tip double
a continutului de la cele doua atribute. Instantiati 3 obiecte folosind constructorii fara
parametrii, cu un parametru, cu doi parametri. Modificati valorile la obiectul instantiat fara
parametrii cu seteri. Afisati valorile de la adresa atributelor si media. Afisati valorile de la
adresele atributelor celorlalte obiecte. Adunati primele doua obiecte intr-un nou obiect rezultat
si afisati rezultatul. Considerati mesaje adecvate in constructori si destructori. Urmariti
apelurile realizate.
*/

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include "UifeleanAurora_lab7_pr07_Headerfile.h"

int main() {
	int a = 2, b = 3, c = 4;
	Pair ob1;
	Pair ob2(a);
	Pair ob3(b, c);

	ob1.setX(a);
	ob1.setY(b);

	cout << "\n\tOBIECT 1";
	cout << "\n\t\tX: " << ob1.getX();
	cout << "\n\t\tY: " << ob1.getY();
	cout << "\n\t\tMedia " << ob1.media();
	cout << "\n\tOBIECT 2";
	cout << "\n\t\tX: " << ob2.getX();
	cout << "\n\t\tY: " << ob2.getY();
	//cout << "\n\t\tMedia " << ob2.media();
	cout << "\n\tOBIECT	3";
	cout << "\n\t\tX: " << ob3.getX();
	cout << "\n\t\tY: " << ob3.getY();
	//cout << "\n\t\tMedia " << ob3.media();
	Pair ob4 = ob1.sum(ob2);
	cout << "\n\tOBIECT	4";
	cout << "\n\t\tX: " << ob4.getX();
	cout << "\n\t\tY: " << ob4.getY();

	return 0;
}