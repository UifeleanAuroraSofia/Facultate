/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Folosind aceeasi clasa Fractie, definiti supraincarcarea operatorilor compusi de asignare si adunare, scadere,
inmultire si impartire(+=, -=, *=, /=) cu metode membre. Supraincarcati operatorii de incrementare si
decrementare post/prefixati care aduna/scade valoarea 1 la un obiect de tip Fractie cu functii membre
(metode). Instantiati doua obiecte de tip Fractie cu date citite de la tastatura. Realizați o copie a lor in alte doua
obiecte. Efectuați operațiile compuse implementate prin metodele clasei folosind copiile obiectelor, asignând
rezultatele obtinute la alte 4 obiecte. Afișați cele 4 rezultate, iar apoi afișați rezultatele după
incrementare/decrementare post/prefixat la cele 4 obiecte obținute.
*/

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include "UifeleanAurora_lab9_pr12_Headerfile.h"

using namespace std;

void afisare_fractie(Fractie f);

int main() {

	Fractie f1, f2, f5, f6, f7, f8;
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

	Fractie f3(f1);
	Fractie f4(f2);

	cout << "\n\n\tOperatii cu cele doua fractii";
	
	f5 += f1;
	cout << "\n\t\tSuma (obiect 5): ";
	afisare_fractie(f5);
	f6 -= f1;
	cout << "\n\t\tDiferenta (obiect 6): ";
	afisare_fractie(f6);
	f7 *= f1;
	cout << "\n\t\tProdus (obiect 7): ";
	afisare_fractie(f7);
	f8 /= f1;
	cout << "\n\t\tCat (obiect 8): ";
	afisare_fractie(f8);

	cout << "\n\n\tOBIECT 5";
	cout << "\n\tIncremetare prefixata: ";
	afisare_fractie(f5++);
	cout << "\n\tIncremetare postfixata: ";
	afisare_fractie(++f5);
	cout << "\n\tDecrementare prefixata: ";
	afisare_fractie(f5--);
	cout << "\n\tDecrementare postfixata: "; 
	afisare_fractie(--f5);

	cout << "\n\n\tOBIECT 6";
	cout << "\n\tIncremetare prefixata: ";
	afisare_fractie(f6++);
	cout << "\n\tIncremetare postfixata: ";
	afisare_fractie(++f6);
	cout << "\n\tDecrementare prefixata: ";
	afisare_fractie(f6--);
	cout << "\n\tDecrementare postfixata: ";
	afisare_fractie(--f6);

	cout << "\n\n\tOBIECT 7";
	cout << "\n\tIncremetare prefixata: ";
	afisare_fractie(f7++);
	cout << "\n\tIncremetare postfixata: ";
	afisare_fractie(++f7);
	cout << "\n\tDecrementare prefixata: ";
	afisare_fractie(f7--);
	cout << "\n\tDecrementare postfixata: ";
	afisare_fractie(--f7);

	cout << "\n\n\tOBIECT 8";
	cout << "\n\tIncremetare prefixata: ";
	afisare_fractie(f8++);
	cout << "\n\tIncremetare postfixata: ";
	afisare_fractie(++f8);
	cout << "\n\tDecrementare prefixata: ";
	afisare_fractie(f8--);
	cout << "\n\tDecrementare postfixata: ";
	afisare_fractie(--f8);

	return 0;
}

void afisare_fractie(Fractie f) {
	cout << f.getA() << "/" << f.getB();
}