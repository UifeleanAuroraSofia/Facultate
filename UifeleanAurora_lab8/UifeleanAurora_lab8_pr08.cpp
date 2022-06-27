/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Considerati clasa Fractie care are doua atribute intregi private a si b pentru numarator si numitor, doua metode
de tip set( ) respectiv get( ) pentru fiecare din atributele clasei. Declarati o functie friend simplifica( ) care are
ca si parametru un obiect al clasei, returnand un alt obiect simplificat. Considerați o variabila private statica
întreagă icount, care va fi initializata cu 0 si incrementata in cadrul constructorilor din clasa. Definiti un
constructor explicit fara parametri care initializeaza a cu 0 si b cu 1, si un constructor explicit cu doi parametri
care va putea fi apelat daca se verifica posibilitatea definirii unei fractii (b!=0). Definiti un destructor explicit
care afiseaza si decrementeaza contorul icount. Definti o functie friend _f_aduna_fractie(...) care are ca si
parametri doua obiecte de tip Fractie si returneaza suma obiectelor in alt obiect Fractie. Analog definiti functii
friend pentru scadere, inmultire si impartire. Instantiati doua obiecte de tip Fractie cu date citite de la tastatura.
Afisati atributele initiale si cele obtinute dupa apelul functiei simplifica( ). Printr-o metoda accesor, afisati
contorul icount. Efectuati operatiile implementate prin functiile friend ale clasei, initializand alte 4 obiecte cu
rezultatele obtinute. Afisati rezultatele si contorul dupa ultima operatie folosind o metoda accesor adecvata.
*/

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include "UifeleanAurora_lab8_pr08_Headerfile.h"

using namespace std;

int main() {
	int a1, b1, a2, b2;
	Fractie fr1, fr2;

	do {
		cout << "\n\tFRACTIE 1";
		cout << "\n\t\tNumarator: ";
		cin >> a1;
		fr1.setA(a1);
		cout << "\t\tNumitor: ";
		cin >> b1;
		fr1.setB(b1);
		cout << "\n\tFRACTIE 2";
		cout << "\n\t\tNumarator: ";
		cin >> a2;
		fr2.setA(a2);
		cout << "\t\tNumitor: ";
		cin >> b2;
		fr2.setB(b2);
		if (b1 == 0 || b2 == 0) {
			cout << "\n\tDate invalide! Incercati din nou!";
		}
	} while (b1 == 0 || b2 == 0);

	cout << "\n\tFRACTIE 1";
	cout << "\n\t\tNumarator: " << fr1.getA();
	cout << "\n\t\tNumitor: " << fr1.getB();
	cout << "\n\tFRACTIE 2";
	cout << "\n\t\tNumarator: " << fr2.getA();
	cout << "\n\t\tNumitor: " << fr2.getB();
	cout << "\n\n\tNumarul de fractii este: " << Fractie::icount;

	fr1 = simplifica(fr1);
	fr2 = simplifica(fr2);
	cout << "\n\tFRACTIILE SIMPLIFICATE";
	cout << "\n\tFRACTIE 1";
	cout << "\n\t\tNumarator: " << fr1.getA();
	cout << "\n\t\tNumitor: " << fr1.getB();
	cout << "\n\tFRACTIE 2";
	cout << "\n\t\tNumarator: " << fr2.getA();
	cout << "\n\t\tNumitor: " << fr2.getB();

	Fractie fr5 = adunare(fr1, fr2);
	cout << "\n\tSUMA FRACTIILOR";
	cout << "\n\t\tNumarator: " << fr5.getA();
	cout << "\n\t\tNumitor: " << fr5.getB();

	Fractie fr6 = scadere(fr1, fr2);
	cout << "\n\tSCADERE FRACTIILOR";
	cout << "\n\t\tNumarator: " << fr6.getA();
	cout << "\n\t\tNumitor: " << fr6.getB();

	Fractie fr7 = inmultire(fr1, fr2);
	cout << "\n\tPRODUS FRACTIILOR";
	cout << "\n\t\tNumarator: " << fr7.getA();
	cout << "\n\t\tNumitor: " << fr7.getB();

	Fractie fr8 = impartire(fr1, fr2);
	cout << "\n\tCAT FRACTIILOR";
	cout << "\n\t\tNumarator: " << fr8.getA();
	cout << "\n\t\tNumitor: " << fr8.getB();

	cout << "\n\n\tNumarul de fractii este " << Fractie::icount;

	return 0;
}