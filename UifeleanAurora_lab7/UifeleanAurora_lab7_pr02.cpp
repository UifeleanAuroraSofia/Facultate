/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Să se scrie o aplicaţie C/C++ care să modeleze obiectual un tablou unidimensional de numere
reale. Creaţi două instanţe ale clasei şi afișați valorile unui al 3-lea tablou, obținute prin
scăderea elementelelor corespunzătoare din primele 2 tablouri. Dacă tablourile au lungimi
diferite, tabloul rezultat va avea lungimea tabloului cel mai scurt.
*/

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include "UifeleanAurora_lab7_pr02_HeaderFile.h"

using namespace std;

int main()
{
	int n;
	Tablou tab1, tab2;

	cout << "\n\tPRIMUL TABLOU";
	cout << "\n\tNr. elemente: ";
	cin >> n;
	tab1.setMarime(n);
	cout << "\n\tCititi cele " << n << " elemente: ";
	tab1.alocare_spatiu_si_citire();
	/*cout << "\tCele " << n << " elemente sunt: ";
	tab1.afisare();*/
	cout << "\n\tAL DOILEA TABLOU";
	cout << "\n\tNr. elemente: ";
	cin >> n;
	tab2.setMarime(n);
	cout << "\n\tCititi cele " << n << " elemente: ";
	tab2.alocare_spatiu_si_citire();

	tab1 = tab1.scadere(tab2);
	cout << "\n\tElementele celui de AL TREILEA tablou sunt: ";
	tab1.afisare();

	return 0;
}