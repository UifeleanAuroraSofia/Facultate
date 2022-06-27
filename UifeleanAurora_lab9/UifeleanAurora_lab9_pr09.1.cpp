/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Să se definească clasa Student având ca date membre private: numele (pointer șir de caractere), note (pointer de
tip întreg) și nr_note (int). Clasa mai conține un constructor cu parametri, un constructor de copiere/move, o
metoda de supraîncărcare a operatorului de atribuire, o metodă de setare a notelor, o metodă de afișare a
atributelor și un destructor. Să se instanțieze obiecte folosind constructorul cu parametri, un alt obiect ca si
clona va fi obtinut folosind constructorul de copiere, afișând de fiecare data atributele obiectului creat.
Realizați o operație de copiere a unui obiect în alt obiect, ambele fiind create in prealabil. Afișati rezultatul
copierii. Analizati metodele utilizate. Realizati o alta implementare in care numele e dat printr-un sir de
caractere fix sau pseudo container string, iar note e un tablou de dimensiune fixa specificat printr-o constanta,
atributul nr_note fiind eliminat.
*/

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include "UifeleanAurora_lab9_pr09.1_Headerfile.h"

using namespace std;

void citire_studenti(Student* studenti, int n);
void afisare_studenti(Student* studenti, int n);

int main() {

	int n;
	Student* studenti;

	do {
		cout << "\n\tIntroduceti numarul de studenti: ";
		cin >> n;
		if (n < 2) {
			cout << "\tMinimul este de 2 studenti!";
		}
	} while (n < 2);
	studenti = new (nothrow) Student[n];
	citire_studenti(studenti, n);
	cout << "\n\tStudentii cititi sunt: ";
	afisare_studenti(studenti, n);

	Student strain1 = *(studenti + 0);
	cout << "\n\n\tDatele studentului strain cu copy-constructor de la primul student";
	afisare(strain1);

	*(studenti + 0) = *(studenti + 1);
	cout << "\n\tDatele studentului nr.1 o sa fie copiate in datele studentului nr.0";
	afisare(*(studenti + 0));

	return 0;
}

void citire_studenti(Student* studenti, int n) {
	char* nume;
	int nr_note;
	nume = new (nothrow) char[dim];

	for (int i = 0; i < n; i++) {
		cout << "\n\tStudent nr." << i;
		cout << "\n\tNumele: ";
		cin >> nume;
		(studenti + i)->setNumele(nume);
		cout << "\tNumarul de note: ";
		cin >> nr_note;
		(studenti + i)->setNr_note(nr_note);
		int *note = new (nothrow) int[nr_note];
		cout << "\tNotele: ";
		for (int i = 0; i < nr_note; i++) {
			cin >> note[i];
		}
		(studenti + i)->setNote(note);
		delete[]note;
	}
}

void afisare_studenti(Student* studenti, int n) {
	for (int i = 0; i < n; i++) {
		cout << "\n\tStudentul nr." << i;
		afisare(*(studenti + i));
	}
}