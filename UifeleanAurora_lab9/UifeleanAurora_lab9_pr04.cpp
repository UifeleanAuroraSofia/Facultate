/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Pornind de la exemplul 5 referitor la matrici, verificati/implementati următoarele cerințe:
a. citirea/scrierea unei matrici, unde dimensiunile sunt preluate de la tastatură
b. testați toți operatorii supraîncărcați. Implementati variante in care se folosesc metode membre la
supraincarcare.
c. afișați elementele de pe diagonala principală și secundară
d. implementati operatiile cu matrici folsind metode membre.
*/

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include "UifeleanAurora_lab9_pr04_Headerfile.h"

using namespace std;

int main() {
	int i, j;
	cout << "\n\tIntroduceti numarul de linii: ";
	cin >> linii;
	cout << "\tIntroduceti numarul de coloane: ";
	cin >> coloane;
	Matrix m(linii, coloane);
	m.citire();
	cout << "\n\tElementele matricii: \n";
	m.afisare();

	if (linii == coloane) {
		cout << "\n\tMatricea este patratica!";
		cout << "\n\tElementele de pe diagonala principala sunt: ";
		m.diagonala_principala();
		cout << "\n\tElementele de pe diagonala secundara sunt: ";
		m.diagonala_secundara();
	}

	int l, c;
	cout << "\nVerificarea supraincarcarii operatorului ( ) pentru un element de pe o pozitie citita de la tastatura" << endl;
		cout << "Dati numarului liniei (>=1): ";
	cin >> l;
	cout << "Dati numarului coloanei (>=1): ";
	cin >> c;
	if ((l >= 1 && l <= m.getRows()) && (c >= 1 && c <= m.getCols()))
		cout << "Elementul m[" << l << "," << c << "]=" << m(l - 1, c - 1) << endl;
	else
		cout << "Indici eronati!" << endl;

	cout << endl << "Utilizare constructor de copiere:" << endl;
	if (m.getRows() > 0 && m.getCols() > 0) {
		Matrix mcopy = m;
		cout << "Matricea \"mcopy\" este:" << endl;
		mcopy.afisare();
	}
	else cout << "Dimensiuni invalide pentru matricea care se copiaza la instantiere!" << endl;

	cout << endl << "Instantiem un nou obiect matrice \"n\" ";
	Matrix n(linii, coloane);
	cout << endl << "Dati matricea:" << endl;
	n.citire();
	cout << endl << "Matricea \"n\" este:" << endl;
	n.afisare();

	cout << endl << "Supraincarcarea operatorului =, copiere matrice \"m\" in matrice \"n\"" << endl;
	if (m.getRows() == n.getRows() && m.getCols() == n.getCols()) {
		n = m;
		n.afisare( );
	}
	else
		cout << "Matricile nu au aceleasi dimensiuni, deci nu pot fi copiate" << endl;

	cout << endl << "Instantiem un nou obiect matrice \"m1\" ";
	Matrix m1(linii, coloane);
	cout << endl << "Dati matricea:" << endl;
	m1.citire();
	cout << endl << "Matricea \"m1\" este:" << endl;
	m1.afisare();
	Matrix m2(linii, coloane);

	cout << endl << "Supraincarcarea operatorului +" << endl;
	if (m.getRows() == m1.getRows() && m.getCols() == m1.getCols()) {
		m2 = m + m1;
		cout << endl << "Matricea rezultata din suma matricilor m+m1 este: " << endl;
	}
	m2.afisare();

	cout << endl << "Supraincarcarea operatorului - " << endl;
	if (m.getRows() == m1.getRows() && m.getCols() == m1.getCols()) {
		m2 = m - m1;
		cout << endl << "Matricea rezultata din diferenta matricilor m-m1 este: " << endl;
	}
	m2.afisare();
	/*matricea m are 2 linii si 3 coloane deci pentru a fi posibil produsul m3 trebuie sa aiba 3 linii si 2
	coloane*/

	cout << endl << "Dati matricea pentru produs \"m3\' (matricea trebuie sa aiba numarul de linii egal cu numarul de coloane al matricii \"m\")" << endl;
	cout << "Numar de linii: ";
	cin >> l;
	cout << "Numar coloane: ";
	cin >> c;
	Matrix m3;
	if (l > 0 && c > 0) m3.init(l, c);
	else cout << endl << "Dimensiuni negative (gresite)! Se vor folosi pentru instantiere valorile initiale implicite(2 linii, 3 coloane)" << endl;
		m3.citire();
	cout << endl << "Matricea \"m3\" este:" << endl;
	m3.afisare();

	cout << endl << "Supraincarcarea operatorului * ";
	// pentru inmultire m*m3 nr. de coloane al matricii m trebuie sa fie egal cu numarul de randuri al matricii m3
		if (m.getCols() == m3.getRows())
		{
			Matrix m4(m.getRows(), m3.getCols());
			m4 = m * m3;
			cout << endl << "Matricea rezultata prin inmultirea matricilor m*m3 este: " << endl;
			m4.afisare();
		}
		else
			cout << endl << "Matricile nu pot fi inmultite - numarul de linii nu e egal cu numarul de coloane";

}//end main