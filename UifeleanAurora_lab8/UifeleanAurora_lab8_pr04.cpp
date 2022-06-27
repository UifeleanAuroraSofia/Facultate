/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Scrieţi o aplicaţie C/C++ care defineşte într-o clasă variabila publică contor var_static de tip static întreg.
Aceasta se va incrementa în cadrul constructorului. După o serie de instanţieri, să se afişeze numarul de obiecte
create (conţinutul variabilei var_static).
*/

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<string.h>

#include "UifeleanAurora_lab8_pr04_Headerfile.h"

using namespace std;

int main() {

	int cc, i = 0;
	char c = 'd';

	//cout << "\n\tAti introdus date pentru " << Masina::var_static << " masini";

	do {

		cout << "\n\tIntroduceti capacitatea cilindrica a unei masini: ";
		cin >> cc;
		Masina m(cc);
		
		cout << "\tContinuati? (d/n): ";
		cin >> c;

	} while (!(c == 'n'));

	cout << "\n\tAti introdus date pentru " << Masina::var_static << " masini";

	return 0;
}