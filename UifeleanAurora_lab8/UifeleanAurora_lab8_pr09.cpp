/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Considerați problema referitoare la gestiunea CNP-ului dintr-un laborator anterior, la care sa validați complet
CNP-ul (zi corecta funcție de luna corecta si an corect, inclusiv anii bisecți), in care sa introduceți cu
confirmare mai multe date de tip Person, afișând la final câte obiecte au data introdusă corect. Contorizati
folosind atribute statice private.
*/

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include "UifeleanAurora_lab8_pr09_Headerfile.h"

using namespace std;

int main() {
	int gender = 0;
	Person p1;
	char c = 'y', aux_string[dim_sir];

	do {

		cout << "\nEnter Name: ";
		cin >> aux_string;//Popescu
		p1.setNume(aux_string);
		cout << "\nEnter SurName: ";
		//cin >> aux_string;//Bitanescu
		cin.ignore();
		gets_s(aux_string, dim_sir);//Preia Prenume si cu spatiu
		p1.setPrenume(aux_string);
		cout << "\nEnter CNP: ";
		cin >> aux_string;//1890403120671
		int t_cnp = p1.setValidCnp(aux_string);
		switch (t_cnp) {
		case 0: cout << "\nCNP valid\n";
			cout << "\nDate despre obiect: " << endl;
			cout << "\tNume: " << p1.getNume() << ", Prenume: " << p1.getPrenume() << ", CNP: " << p1.getCnp() << endl;
			cout << "\tGen: " << p1.get_gender(gender) << endl;
			cout << "\tData nasterii: " << p1.get_an_nast(gender) << "/" << p1.get_luna_nast() << "/" << p1.get_zi_nast() << endl;
			cout << "\tVarsta: " << p1.get_varsta(gender) << endl; break;
		case 1: cout << "\nLungime sir CNP invalid"; break;
		case 2: cout << "\nGen invalid"; break;
		default: cout << "\nProbleme CNP"; break;
		}

		cout << "\n\tWanna continue to introduce persons? (y/n) ";
		cin >> c;

	} while (c != 'n');

	cout << "\n\tAti introdus " << Person::nr_person_valid << " CNP-uri valide";

	return 0;
}
