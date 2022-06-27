/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
La un chioșc se vând ziare, reviste și carți. Fiecare publicație are un nume, o editură, un număr de pagini, un
număr de exemplare per publicație și un preț fără TVA. Scrieți clasa care modelează publicațiile. Adăugați un
membru static valoare_tva (procent) și o metodă statică pentru modificarea valorii TVA-ului. Să se calculeze
suma totală cu TVA pe fiecare tip de publicație (ziare, reviste și carți) și prețul mediu pe pagina la fiecare
publicație în parte. Modificați TVA-ul și refaceți calculele. Afișați editurile ordonate în funcție de încasări.
*/

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include "UifeleanAurora_lab8_pr07_Headerfile.h"

using namespace std;

void citire_publicatii(Publicatie*, int);
float suma_cu_tva(Publicatie, int);
float pret_mediu_pe_pagina(Publicatie, int);
void afisare_publicatii(Publicatie*, int, int);
int cmp_incasari(const void* a, const void* b);

int main() {

	int n, tva;
	Publicatie* publicatii;

	cout << "\n\tIntroduceti numarul de publicatii: ";
	cin >> n;
	publicatii = new (nothrow) Publicatie[n];
	citire_publicatii(publicatii, n);
	
	cout << "\n\n\tEDITURILE ORDONATE IN FUNCTIE DE INCASARI";
	Publicatie::valoare_tva = 19;
	qsort(publicatii, n, sizeof(Publicatie), cmp_incasari);
	afisare_publicatii(publicatii, n, Publicatie::valoare_tva);

	cout << "\n\n\tIntroduceti o valoare de TVA: ";
	cin >> tva;
	cout << "\n\tEDITURILE ORDONATE IN FUNCTIE DE INCASARI";
	Publicatie::modifica_tva(tva);
	qsort(publicatii, n, sizeof(Publicatie), cmp_incasari);
	afisare_publicatii(publicatii, n, Publicatie::valoare_tva);;

	return 0;
}

void citire_publicatii(Publicatie* publicatii, int n) {
	char nume[dim], editura[dim];
	int nr_pagini, nr_exemplare, pret_fara_tva;

	for (int i = 0; i < n; i++) {
		cout << "\n\tNume: ";
		cin >> nume;
		(publicatii + i)->setNume(nume);
		cout << "\tEditura: ";
		cin >> editura;
		(publicatii + i)->setEditura(editura);
		cout << "\tNumar pagini: ";
		cin >> nr_pagini;
		(publicatii + i)->setNr_pagini(nr_pagini);
		cout << "\tNumar exemplare: ";
		cin >> nr_exemplare;
		(publicatii + i)->setNr_exemplare(nr_exemplare);
		cout << "\tPret fara TVA: ";
		cin >> pret_fara_tva;
		(publicatii + i)->setPret_fara_tva(pret_fara_tva);
	}
}

float suma_cu_tva(Publicatie publicatie, int tva) {
	float suma;
	suma = (float)publicatie.getNr_exemplare() * ((float)publicatie.getPret_fara_tva() + (float)(publicatie.getPret_fara_tva() * (float)tva / 100));
	return suma;
}

float pret_mediu_pe_pagina(Publicatie publicatie, int tva) {
	float pret_mp;
	pret_mp = (float)suma_cu_tva(publicatie, tva) / publicatie.getNr_pagini();
	return pret_mp;
}

void afisare_publicatii(Publicatie* publicatii, int n, int tva) {
	for (int i = 0; i < n; i++) {
		cout << "\n\n\tNume: " << (publicatii + i)->getNume();
		cout << "\n\tEditura: " << (publicatii + i)->getEditura();
		cout << "\n\tNumar pagini: " << (publicatii + i)->getNr_pagini();
		cout << "\n\tNumar exemplare: " << (publicatii + i)->getNr_exemplare();
		cout << "\n\tPret fara TVA: " << (publicatii + i)->getPret_fara_tva();
		cout << "\n\tSuma cu TVA: " << suma_cu_tva(*(publicatii + i), tva);
		cout << "\n\tPret mediu pe pagina: " << pret_mediu_pe_pagina(*(publicatii + i), tva);
	}
}

int cmp_incasari(const void* a, const void* b) {
	Publicatie* aa = (Publicatie*)a;
	Publicatie* bb = (Publicatie*)b;
	if (suma_cu_tva(*aa, Publicatie::valoare_tva) < suma_cu_tva(*bb, Publicatie::valoare_tva)) {
		return 1;
	}
	else {
		return 0;
	}
}