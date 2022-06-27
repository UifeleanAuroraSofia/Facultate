/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Definiti o clasa numita MiscareAccelerata care contine atributele private dc (distanta curenta,
vc (viteza curenta) si a (acceleratia). atributele dc, vc si a sunt initializate in constructor iar
valoarea lor este cea data de d0 si v0, si a0 ca si parametri. In clasa sunt supraincarcati
operatorii de extractie si de inserție pentru a se putea initializa si afisa caracteristicile unei
instante. Implementati metoda determinaMiscarea care re-calculeaza variabilele dc si vc, pe
baza unui numar de secunde primit ca parametru si avand in vedere legea miscarii rectilinii
uniform accelerate cu acceleratie a0.
Instantiati clasa si apoi folositi membrii definiti.
*/

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include "UifeleanAurora_lab12_pr04_Headerfile.h"

using namespace std;

int main() {

	int t, a;
	MiscareAccelerata lege(0, 0, 0); //initial
	cin >> lege; //overloading operator >>
	cout << "\n\tTimp (s): ";
	cin >> t;
	cout << "\tAcceleratie (m/s la patrat): ";
	cin >> a;
	lege.determinaMiscarea(t, a); //functie legea miscarii
	cout << lege; //overloading operator <<

	return 0;
}