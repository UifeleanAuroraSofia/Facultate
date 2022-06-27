/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Folosind modelul claselor de la mostenirea publica, implementaţi două clase, astfel:
- clasa de bază contine metode pentru:
-codarea unui şir de caractere (printr-un algoritm oarecare- recomandat XOR cu o
masca fixa) => public;
-afişarea şirului original şi a celui rezultat din transformare = > public;
- clasa derivata contine o metoda pentru:
-scrirea rezultatului codării într-un fişier, la sfârşitul acestuia.
Fiecare inregistrare are forma: nr_inregistrare: şir_codat;
Accesul la metodele ambelor clase se face prin intermediul unui obiect rezultat prin
instanţierea clasei derivate. Programul care foloseşte clasele citeşte un şir de caractere de la
tastatură şi apoi, în funcţie de opţiunea utilizatorului, afişează rezultatul codării sau îl scrie în
fişier.
*/

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include "UifeleanAurora_lab10_pr02_Header.h"

using namespace std;

int main()
{
	Derivata obiect_derivat;
	int nr;
	char c[dim], l;
	cout << "\n\tNumar de inregistrare: ";
	cin >> nr;
	cout << "\tSir de caractere: ";
	cin >> c;
	obiect_derivat.setC(c);

	cout << "\n\tUnde sa se scrie fisierul? (consola - c sau fisier - f): ";
	cin >> l;
	switch (l) {
	case 'c':
		obiect_derivat.afisare_in_consola();
		break;
	case 'f':
		obiect_derivat.afisare_in_fisier();
		break;
	}

	return 0;
}
