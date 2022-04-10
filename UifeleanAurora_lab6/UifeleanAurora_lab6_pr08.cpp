/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Dezvoltați aplicația prezentată în exemplul 6 varianta a doua, b) prin:
- utilizarea valorilor returnate de metoda setValidCnp( ) pentru a valida suplimentar
(luna si ziua) CNP-ul in main( ) functie de an bisect sau nu si numarul lunii.
- permiterea intoducerii de coduri CNP care încep cu alte cifre decât 1 și 2, cu analiza
semnificației noilor valori (5 – masculin, 6 - feminin).
*/

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include "UifeleanAurora_lab6_pr08_Headerfile.h"

using namespace std;

int main() {
	int gender = 0;
	Person p1;
	char aux_string[dim_sir];
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
	return 0;
}
