/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Modelați clasa Student care să conțină atributele private nume, prenume, note (tablou 7 valori
int), grupa. Alocați dinamic memorie pentru n studenți. Calculați media cu o metoda din clasa
și sortați studenții după medie, afisând datele fiecărui student (nume, prenume, grupa, medie).
Implementati si destructorul clasei care să afișeze un mesaj.
*/

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include "UifeleanAurora_lab7_pr03_Headerfile.h"

using namespace std;

void citire_studenti(Student*, int);
void afisare_studenti(Student*, int);
int cmp_media(const void* a, const void* b);

int main(){
	int n;
	Student* studenti;

	cout << "\n\tIntroduceti numarul de studenti: ";
	cin >> n;
	studenti = new (nothrow) Student[n];
	citire_studenti(studenti, n);

	qsort(studenti, n, sizeof(Student), cmp_media);
	afisare_studenti(studenti, n);

	studenti->~Student();

	return 0;
}

void citire_studenti(Student* studenti, int n)
{
	string nume, prenume;
	int grupa, note[7];
	for (int i = 0; i < n; i++) {
		cout << "\n\tStudentul nr." << i;
		cout << "\n\tNume: ";
		cin >> nume;
		(studenti + i)->setNume(nume);
		cout << "\tPrenume: ";
		cin >> prenume;
		(studenti + i)->setPrenume(prenume);
		cout << "\tNote: ";
		for (int i = 0; i < 7; i++) {
			cin >> *(note + i);
		}
		(studenti + i)->setNote(note);
		cout << "\tGrupa: ";
		cin >> grupa;
		(studenti + i)->setGrupa(grupa);
	}
}

void afisare_studenti(Student* studenti, int n)
{
	int note[7];
	for (int i = 0; i < n; i++) {
		cout << "\n\n\tStudentul nr." << i;
		cout << "\n\tNume: " << (studenti + i)->getNume();
		cout << "\n\tPrenume: " << (studenti + i)->getPrenume();
		cout << "\n\tNote: ";
		for (int j = 0; j < 7; j++) {
			cout << *(((studenti + i)->getNote()) + j);
		}
		cout << "\n\tGrupa: " << (studenti + i)->getGrupa();
	}
}

int cmp_media(const void* a, const void* b) {
	Student* aa = (Student*)a;
	Student* bb = (Student*)b;
	if (aa->media() < bb->media()){
		return 1;
	}
	else {
		return 0;
	}
}