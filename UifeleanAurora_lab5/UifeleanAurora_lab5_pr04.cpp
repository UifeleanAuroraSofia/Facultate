/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Să se scrie programul care implementează clasa Numar cu un atribut de tip int val şi care, în
cadrul funcţiei main(), declară un obiect de tipul clasei şi apoi un pointer la acesta, prin
intermediul cărora se va afişa pe ecran rezultatul adunării a două numere de tip Numar cu
valorile preluate de la tastatură in cadrul unor obiecte Numar. Implementati metoda int
suma_nr(Numar) care realizeaza suma în cadrul clasei şi o returneaza ca un int, metoda care
insumeaza cele doua obiecte (curent si parametru). Implementati metoda in cadrul clasei si
alta metoda cu acelas scop, dar nume diferit, in afara clasei.
*/

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include "Numar.h"

using namespace std;

int main()
{
	Numar nr, * nr_p;
	nr_p = &nr;
	Numar nr1, nr2;
	int numar1, numar2;
	cout << "\n\tIntroduceti cele doua numere: ";
	cin >> numar1 >> numar2;
	nr1.setNumar(numar1);
	nr2.setNumar(numar2);
	nr = nr1;
	//suma prin referinta
	cout << "\n\tSuma numerelor cu functie inline: " << nr.suma_nr(numar2);
	cout << "\n\tSuma numerelor cu functie in afara clasei: " << nr.suma_nr_afara_clasa(numar2);
	//suma prin adresa
	cout << "\n\tSuma numerelor cu functie inline POINTER: " << nr_p->suma_nr(numar2);
	cout << "\n\tSuma numerelor cu functie in afara clasei POINTER: " << nr_p->suma_nr_afara_clasa(numar2);
	return 0;
}