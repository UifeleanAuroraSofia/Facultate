/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Să se scrie o aplicaţie C/C++ care foloseşte o structură de date cu numele Scerc care conţine
raza ca şi o variabilă de tip întreg. Într-un program C/C++, declaraţi două variabile c1, c2 de
tip Scerc şi calculaţi aria şi circumferinţa lor pentru valori ale razei introduse de la tastatură.
Aceleaşi cerinţe vor fi implementate în aceiasi aplicaţie folosind o clasă numită Cerc cu
atributul raza de tip private, clasă ce va conţine pe lângă metodele de calcul ale ariei şi
perimetrului un constructor explicit cu parametru, un destructor. Introduceţi in clasă o metodă
de tip accesor, getRaza(), care permite accesul la data privată raza si pe care sa o folositi
pentru a afisa in main( ) raza obiectelor.
Extindeţi aplicaţia astfel încât să definiţi mai multe obiecte de tip Cerc la care să accesaţi
metodele specifice folosind obiectele instanţiate, pointeri la obiecte, referinţe la obiecte
*/

#include<stdio.h>
#include <iostream>

#include "Scerc.h"
#include "Cerc.h"

using namespace std;

int main()
{
	int r;
	cout << "\nStructuri: \n";
	Scerc c1, c2;

	cout << "\nIntrodu raza c1: ";
	cin >> c1.raza;
	cout << "\nAria struct = " << ar_str(c1);
	cout << "\nPerimetrul struct = " << per_str(c1);

	cout << "\nIntrodu raza c2: ";
	cin >> c2.raza;
	cout << "\nAria struct = " << ar_str(c2);
	cout << "\nPerimetrul struct = " << per_str(c2);

	Cerc cc1(2), cc2(3);
	r = cc1.getRaza();
	cout << "\nRaza cc1 = " << r;
	cout << "\nAria clasa = " << cc1.ar_cerc();
	cout << "\nPerimetru clasa = " << cc1.per_cerc();

	cout << "\nIntroduceti raza cc2: ";
	cin >> r;
	cc2.setRaza(r);
	cout << "\nAria clasa cc2 = " << cc2.ar_cerc();
	cout << "\nPerimetrul este = " << cc2.per_cerc();
	
	Cerc* cptr;
	cptr = &cc1;
	cout << "\nAria cc1 cu pointer " << cptr->ar_cerc();
	cout << "\nPerimetrul cc1 cu pointer " << cptr->per_cerc();

	//suplimentar
	cout << "\nIntroduceti noua raza cc1: ";
	cin >> r;
	cc1.setRaza(r);
	cout << "\nAria nou cc1: " << cc1.ar_cerc();
	return 0;
}