
#include<iostream>
#include<string.h>

using namespace std;

#define dim 30

class Publicatie {
	char* nume;
	char* editura;
	int nr_pagini;
	int nr_exemplare;
	int pret_fara_tva;
public:
	Publicatie() {
		nume = new (nothrow) char[dim];
		editura = new (nothrow) char[dim];
		nr_pagini = 0;
		nr_exemplare = 0;
		pret_fara_tva = 0;
	}
	char* getNume() {
		return nume;
	}
	void setNume(char* n) {
		strcpy(nume, n);
	}
	char* getEditura() {
		return nume;
	}
	void setEditura(char* e) {
		strcpy(editura, e);
	}
	int getNr_pagini() {
		return nr_pagini;
	}
	void setNr_pagini(int nr_pagini) {
		this->nr_pagini = nr_pagini;
	}
	int getNr_exemplare() {
		return nr_exemplare;
	}
	void setNr_exemplare(int nr_exemplare) {
		this->nr_exemplare = nr_exemplare;
	}
	int getPret_fara_tva() {
		return pret_fara_tva;
	}
	void setPret_fara_tva(int pret_fara_tva) {
		this->pret_fara_tva = pret_fara_tva;
	}

	static int valoare_tva;
	static void modifica_tva(int tva_nou) {
		valoare_tva = tva_nou;
	}
};

int Publicatie::valoare_tva;