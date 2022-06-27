/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Considerati achizitia de date cu valori reale de la un dispozitiv electronic (10 date). Afisati
folosind un mesaj adecvat datele primite considerand un format minimal (partea intreaga).
Determinati media acestor valori, iar daca depaseste un prag stabilit anterior (definit sau citit),
afisati aceste date in format detaliat considerand ca avem date de tip real, cu o precizie de 8
digiti la partea fractionara.
*/

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<fstream>
#include<iomanip>

using namespace std;

ifstream fin("text3.in");
#define dim 15

int main() {

	double v[10], media = 0.0, nr;
	cout << "\n\tDatele in format real sunt: ";
	for (int i = 0; i < 10; i++) {
		fin >> v[i];
		media += v[i];
	}
	media /= (float)10;
	for (int i = 0; i < 10; i++) {
		cout << setprecision(15) << "\n\t" << v[i];
	}

	cout << "\n\n\tDatele in format intreg: ";
	for (int i = 0; i < 10; i++) {
		cout << "\n\t" << (int)v[i];
	}

	cout << "\n\n\tCititi un numar: ";
	cin >> nr;
	if (media > nr) {
		for (int i = 0; i < 10; i++) {
			cout << setprecision(15) << "\n\t" << v[i];
		}
	}

	return 0;
}