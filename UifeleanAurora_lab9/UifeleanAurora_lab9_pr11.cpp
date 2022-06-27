/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Considerati clasa Fractie care are doua atribute intregi private a si b pentru numarator si numitor, doua metode
de tip set() respectiv get() pentru fiecare din atributele clasei. Declarati o metoda simplifica() care simplifica un
obiect Fractie. Considerati o variabila privata statica intreaga icount, care va fi initializata cu 0 si incrementata
in cadrul constructorilor din clasa. Definiti un constructor explicit fara parametri care initializeaza a cu 0 si b
cu 1, si un constructor explicit cu doi parametri care înainte de apel va verifica posibilitatea definirii unei
fractii (b!=0). Definiti un destructor explicit care afiseaza un mesaj si contorul icount. Supraincarcati operatorii
de adunare, scadere, inmultire si impartire (+,-,*,/) a fractiilor folosind functii friend care si simplifica daca e
cazul rezultatele obtinute. Instantiati doua obiecte de tip Fractie cu date citite de la tastatura. Afisati atributele
initiale ale obiectelor. Printr-o metoda accesor, afisati contorul icount. Efectuati operatiile implementate prin
functiile friend, initializand alte 4 obiecte cu rezultatele obtinute. Afisati rezultatele si contorul dupa ultima
operatie folosind o metoda accesor adecvata.
*/

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include "UifeleanAurora_lab9_pr11_Headerfile.h"

using namespace std;

void afisare_fractie(Fractie);

int main() {

	Fractie f1, f2;
	int a, b;
	cout << "\n\tIntroduceti datele a doua fractii";
	cout << "\n\tFRACTIA 1";
	cout << "\n\t\tNumarator: ";
	cin >> a;
	f1.setA(a);
	cout << "\t\tNumitor: ";
	cin >> b;
	f1.setB(b);
	cout << "\n\tFRACTIA 2";
	cout << "\n\t\tNumarator: ";
	cin >> a;
	f2.setA(a);
	cout << "\t\tNumitor: ";
	cin >> b;
	f2.setB(b);

	cout << "\n\tFractiile introduse sunt: ";
	cout << "\n\t\tFRACTIE 1: ";
	afisare_fractie(f1);
	cout << "\n\t\tFRACTIE 2: ";
	afisare_fractie(f2);

	cout << "\n\n\tContorul icount este egal cu: " << f1.accesor();

	cout << "\n\n\tOperatii cu cele doua fractii";
	Fractie f3 = f1 + f2;
	cout << "\n\t\tSuma: ";
	afisare_fractie(f3);
	Fractie f4 = f1 - f2;
	cout << "\n\t\tDiferenta: ";
	afisare_fractie(f4);
	Fractie f5 = f1 * f2;
	cout << "\n\t\tProdus: ";
	afisare_fractie(f5);
	Fractie f6 = f1 / f2;
	cout << "\n\t\tCat: ";
	afisare_fractie(f6);

	cout << "\n\n\tContorul icount este egal cu: " << f1.accesor();

	return 0;
}

void afisare_fractie(Fractie f) {
	cout << f.getA() << "/" << f.getB();
}