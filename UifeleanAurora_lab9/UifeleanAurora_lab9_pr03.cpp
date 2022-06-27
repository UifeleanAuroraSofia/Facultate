/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Pornind de la exemplul 4b, introduceti metode de tip set la atributele clasei Persoana, astfel incat introducerea
datelor sa fie facuta cu metoda introdu( ) si metode setter in loc de constructor. Preluati optiunile cu
confirmare, la fel ca la exemplul 4a. Continuati la optiune gresita dand un mesaj adecvat. Asigurati consistenta
supraincarcarii operatorilor de indexare (cand nu se gaseste obiectul). Considerati atributul nume de tip char *,
alocarea spatiului fiind facuta in constructori. Definiti copy constructorul si supraincarcati operatorul de
asignare in cadrul clasei Persoana. Introduceti destructori in ambele clase. Considerati acum procesul de
sortare dupa aceleasi chei ca si la cautare cu afisarea rezultatelor in ordine descrescatoare. Verificati
functionalitatea elementelor introduse.
*/

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include "UifeleanAurora_lab9_pr03_Headerfile.h"

using namespace std;

int cmp_nume(const void* a, const void* b);
int cmp_greutate(const void* a, const void* b);
int cmp_varsta(const void* a, const void* b);

int main() {

	int n;
	char c;
	char nume[maxx];
	double greutate;
	int varsta;
	cout << "\nCate persoane? ";
	cin >> n;
	Analize *a;
	a->setN(n);
	a->introdu();
	/*while (1)
	{
		cout << "\nOptiunea (g-greutate, n-nume, v-varsta, e-exit) ?";
		cin >> c;
		switch (toupper(c))
		{
		case 'G':double g;
			cout << "Greutatea: ";
			cin >> g;
			a[g];
			break;
		case 'N':char n[maxx];
			cout << "Numele: ";
			cin >> n;
			a[n];
			break;
		case 'V':int v;
			cout << "Varsta: ";
			cin >> v;
			a[v];
			break;
		case 'E':
			cout << "Ati terminat introducerea datelor!";
			return 0;
		}//end switch-case
	}//end while
	*/

	cout << "Sortare dupa (v = varsta, g = greutate, n = nume, e=exit)? ";
	cin >> c;
	switch (toupper(c)) {
	case 'V': { qsort(a, n, sizeof(a), cmp_varsta); break; }
	case 'G': { qsort(a, n, sizeof(a), cmp_varsta); break; }
	case 'N': { qsort(a, n, sizeof(a), cmp_varsta); break; }
	case 'E': return 0;
	}
	a->afisare();

	return 0;
}

int cmp_nume(const void* a, const void* b) {
	Persoana* aa = (Persoana*)a;
	Persoana* bb = (Persoana*)b;
	if (aa->getNume() < bb->getNume()) {
		return 1;
	}
	else {
		return -1;
	}
}

int cmp_greutate(const void* a, const void* b) {
	Persoana* aa = (Persoana*)a;
	Persoana* bb = (Persoana*)b;
	if (aa->getGreutate() < bb->getGreutate()) {
		return 1;
	}
	else {
		return -1;
	}
}

int cmp_varsta(const void* a, const void* b) {
	Persoana* aa = (Persoana*)a;
	Persoana* bb = (Persoana*)b;
	if (aa->getVarsta() < bb->getVarsta()) {
		return 1;
	}
	else {
		return -1;
	}
}