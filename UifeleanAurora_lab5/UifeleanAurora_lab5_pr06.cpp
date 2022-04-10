/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Să se creeze o clasă care să modeleze numerele complexe. Scrieţi un program care utilizează
această clasă si defineste doua obiecte afisand caracteristicile obiectelor si rezultatele
operatiilor definite (Folositi exemplul 3 cu rezultat in obiectul curent).
*/

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include "Complex_nr.h"

using namespace std;

int main()
{
	Complex_nr numar1, numar2;
	double re1, im1, re2, im2;
	//citire si instantiere
	cout << "\n\tPRIMUL NUMAR. Introduceti partea reala si imaginara: ";
	cin >> re1 >> im1;
	numar1.setReal(re1);
	numar1.setImaginar(im1);
	cout << "\n\tAL DOILEA NUMAR. Introduceti partea reala si imaginara: ";
	cin >> re2 >> im2;
	numar2.setReal(re2);
	numar2.setImaginar(im2);
	/*double re, im;
	cin >> re >> im; //se poate si asa instantia un obiect
	Complex_nr numar1 = Complex_nr(re, im);*/

	cout << "\n\tPRIMUL NUMAR:";
	cout << "\n\tModul: " << numar1.modul();
	cout << "\n\tConjugat: "; 
	(numar1.conjugat()).afisare();

	cout << "\n\n\tAL DOILEA NUMAR:";
	cout << "\n\tModul: " << numar2.modul();
	cout << "\n\tConjugat: ";
	(numar2.conjugat()).afisare();

	cout << "\n\n\tAdunare: ";
	(numar1.adunare(numar2)).afisare();
	cout << "\n\tScadere: ";
	(numar1.scadere(numar2)).afisare();

	return 0;
}