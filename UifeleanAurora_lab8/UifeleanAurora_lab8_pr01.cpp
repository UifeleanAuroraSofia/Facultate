/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Construiţi o aplicaţie în care clasa OraCurenta are ca atribute private ora, minutele şi secundele şi metode
publice de tip set/get pentru atributele clasei. Adaugaţi o functie friend clasei prin care să se poată copia
conţinutul unui obiect OraCurenta dat ca si parametru, într-un alt obiect instanţă a aceleiaşi clase care va fi
returnat de functie, ora fiind insa modificata la Greenwich Mean Time. Utilizati timpul curent al calculatorului.
*/

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include "UifeleanAurora_lab8_pr01_Headerfile.h"

using namespace std;

int main()
{
	int h, m, s;
	OraCurenta ora1, ora2;

	cout << "\n\tPRIMA ORA: ";
	cout << "\n\tOra: ";
	cin >> h;
	ora1.setOra(h);
	cout << "\tMinute: ";
	cin >> m;
	ora1.setMinute(m);
	cout << "\tSecunde: ";
	cin >> s;
	ora1.setSecunde(s);

	cout << "\n\tA DOUA ORA: ";
	cout << "\n\tOra: ";
	cin >> h;
	ora2.setOra(h);
	cout << "\tMinute: ";
	cin >> m;
	ora2.setMinute(m);
	cout << "\tSecunde: ";
	cin >> s;
	ora2.setSecunde(s);

	cout << "\n\n\tA doua ora copiata in prima (transformata in GMT): ";
	ora1 = adunare_ore(ora2);
	cout << "\n\tOra: " << ora1.getOra();
	cout << "\n\tMinute: " << ora1.getMinute();
	cout << "\n\tSecunde: " << ora1.getSecunde();

	return 0;
}