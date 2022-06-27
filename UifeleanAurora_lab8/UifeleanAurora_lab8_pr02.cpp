/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Scrieţi o aplicaţie C/C++ în care clasa Calculator are un atribut privat memorie_RAM (int) şi o funcție prietenă
tehnician_service( ) care permite modificarea valorii acestui atribut. Functia friend va fi membra intr-o alta
clasa, Placa_de_baza care are o componentă denumire_procesor (sir de caractere). Scrieţi codul necesar care
permite funcției prietene tehnician_service( ) să modifice (schimbe) valoarea variabilei denumire_procesor si
memorie _RAM.
*/

#define _CRT_SECURE_NO_WARNINGS

#include "UifeleanAurora_lab8_pr02_Headerfile.h"
#include<iostream>

using namespace std;

int main() {

	int memorie;
	char* denumire;
	denumire = new (nothrow) char[dim];
	Calculator obj1;
	Placa_de_baza obj2;

	cout << "\n\tMemoria calculatorului: ";
	cin >> memorie;
	cout << "\tDenumirea prodesorului: ";
	cin >> denumire;

	obj2.tehnician_service(obj1, obj2, memorie, denumire);

	return 0;
}