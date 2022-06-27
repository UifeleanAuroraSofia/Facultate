/*Uifelean Aurora Sofia, Seria A, anul I, ETTI, 2114
Scrieți o aplicație C++ în care deschideți un fișier în mod binar pentru citire. Afișați un mesaj
corespunzator dacă fișierul nu a fost creat în prealabil și cereți reintroducerea numelui
fișierului. Presupunând că în fișierul deschis există înregistrări de tip agendă (nume, localitate,
număr de telefon), utilizați supraîncărcarea operatorilor de inserție și extracție pentru afisarea
pe ecran a conținutului fișierului.
*/

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<fstream>

using namespace std;

#define dim 25

class Agenda {
	char* nume;
	char* localitate;
	char* numar_telefon;
public:
	char* getNume() {
		return nume;
	}
	void setNume(char* n) {
		strcpy(nume, n);
	}
	char* getLocalitate() {
		return localitate;
	}
	void setLocalitate(char* l) {
		strcpy(localitate, l);
	}
	char* getNumar_telefon() {
		return numar_telefon;
	}
	void setNumar_telefon(char* nr) {
		strcpy(numar_telefon, nr);
	}
	Agenda() {
		nume = new (nothrow) char[dim];
		localitate = new (nothrow) char[dim];
		numar_telefon = new (nothrow) char[11];
		strcpy(nume, "Aurora");
		strcpy(localitate, "Bistrita");
		strcpy(numar_telefon, "0743844312");
	}
	Agenda(char *n, char *l, char* nr) {
		nume = new (nothrow) char[dim];
		localitate = new (nothrow) char[dim];
		numar_telefon = new (nothrow) char[11];
		strcpy(nume, n);
		strcpy(localitate, l);
		strcpy(numar_telefon, nr);
	}
	friend ifstream& operator>>(ifstream& stream, Agenda &obj);
	friend ostream& operator<<(ostream& stream, Agenda obj);
};

ifstream& operator>>(ifstream& stream, Agenda& obj) {
	stream >> obj.nume >> obj.localitate >> obj.numar_telefon;
	return stream;
}
ostream& operator<<(ostream& stream, Agenda obj) {
	stream << "\n\tNume: " << obj.nume;
	stream << "\n\tLocalitate: " << obj.localitate;
	stream << "\n\tNumar telefon: " << obj.numar_telefon;
	return stream;
}

int main() {

	Agenda* contacte, c;
	char* nume_fis;
	nume_fis = new (nothrow) char[dim];
	ifstream fisier;
	contacte = new (nothrow) Agenda[10];
	
	do {
		cout << "\n\tIntroduceti numele fisierului: ";
		cin >> nume_fis;
		fisier.open(nume_fis, ios::in | ios::binary);
		if (!fisier) {
			cout << "\n\tEroare la deschiderea fisierului! Mai incearca!";
		}
	} while (!fisier);

	int i = 0;
	while (1) {
		fisier >> *(contacte + i);
		cout << *(contacte + i);
		if (fisier.eof()) {
			break;
		}
		fisier >> *(contacte + i);
		cout << *(contacte + i);
	}

	return 0;
}