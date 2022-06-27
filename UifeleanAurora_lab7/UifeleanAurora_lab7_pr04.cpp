/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Să se scrie o aplicaţie în care se modelează clasa Student cu nume, prenume, numar note si
notele din sesiunea din iarnă declarat printr-un pointer de tip int. Să se afişeze numele
studenţilor din grupă care au restanțe și apoi numele primilor 3 studenți din grupă în ordinea
mediilor, care se va afisa si ea.
*/

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include "UifeleanAurora_lab7_pr04_Headerfile.h"

using namespace std;

void citire_studenti(Student*, int);
void afisare_studenti(Student*);
void afisare_restanteri(Student*, int);
int cmp_media(const void* a, const void* b);

int main() {
	int n;
	Student* studenti;

	cout << "\n\tIntroduceti numarul de studenti: ";
	cin >> n;
	studenti = new (nothrow) Student[n];
	citire_studenti(studenti, n);

	cout << "\n\tStundetii restantieri: ";
	afisare_restanteri(studenti, n);

	cout << "\n\tTop 3 studenti dupa medie: ";
	qsort(studenti, n, sizeof(Student), cmp_media);
	afisare_studenti(studenti);

	studenti->~Student();

	return 0;
}

void citire_studenti(Student* studenti, int n)
{
	string nume, prenume;
	int nr_note, note[7];
	for (int i = 0; i < n; i++) {
		cout << "\n\tStudentul nr." << i;
		cout << "\n\tNume: ";
		cin >> nume;
		(studenti + i)->setNume(nume);
		cout << "\tPrenume: ";
		cin >> prenume;
		(studenti + i)->setPrenume(prenume);
		cout << "\tNr.Note: ";
		cin >> nr_note;
		(studenti + i)->setNr_note(nr_note);
		cout << "\tNote: ";
		for (int i = 0; i < nr_note; i++) {
			cin >> *(note + i);
		}
		(studenti + i)->setNote(note);
	}
}

void afisare_studenti(Student* studenti)
{
	for (int i = 0; i < 3; i++) {
		cout << "\n\n\tStudentul nr." << i;
		cout << "\n\tNume: " << (studenti + i)->getNume();
		cout << "\n\tPrenume: " << (studenti + i)->getPrenume();
		cout << "\n\tMedia: " << (studenti + i)->media();
	}
}

void afisare_restanteri(Student* studenti, int n)
{
	for (int i = 0; i < n; i++) {
		if ((studenti + i)->getNr_note() < 7) {
			cout << "\n\n\tStudentul restantier nr." << i;
			cout << "\n\tNume: " << (studenti + i)->getNume();
			cout << "\n\tPrenume: " << (studenti + i)->getPrenume();
		}
	}
}

int cmp_media(const void* a, const void* b) {
	Student* aa = (Student*)a;
	Student* bb = (Student*)b;
	if (aa->media() < bb->media()) {
		return 1;
	}
	else {
		return 0;
	}
}