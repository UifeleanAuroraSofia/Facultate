/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Rezolvaţi problema 4 în cazul în care variabila statică este de tip private. Definiţi o metodă accesor care
returnează valoarea contorului. Analizati cazul in care metoda accesor e statica sau nestatica si modul in care e
apelata.
*/

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include "UifeleanAurora_lab8_pr05_Headerfile.h"

using namespace std;

int main() {

	int cc, i = 0;
	char c = 'd';
	Masina ma;

	//cout << "\n\tAti introdus date pentru " << Masina::var_static << " masini";

	do {

		cout << "\n\tIntroduceti capacitatea cilindrica a unei masini: ";
		cin >> cc;
		Masina m(cc);

		cout << "\tContinuati? (d/n): ";
		cin >> c;

	} while (!(c == 'n'));

	cout << "\n\tNESTATIC: Ati introdus date pentru " << ma.accesor() << " masini";
	cout << "\n\tSTATIC: Ati introdus date pentru " << ma.accesor(i) << " masini";

	return 0;
}