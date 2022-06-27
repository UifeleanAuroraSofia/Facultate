/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Construiţi o aplicaţie în care clasa OraCurenta are ca atribute private ora, minutele şi secundele şi metode
publice de tip set/get pentru atributele clasei. Adaugaţi o functie friend clasei prin care să se poată copia
conţinutul unui obiect OraCurenta dat ca si parametru, într-un alt obiect instanţă a aceleiaşi clase care va fi
returnat de functie, ora fiind insa modificata la Greenwich Mean Time. Utilizati timpul curent al calculatorului.
*/

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include "UifeleanAurora_lab9_pr01_Headerfile.h"

using namespace std;

int main() {

	double real, imag;
	Complex obj1, obj2, obj3;
	
	cout << "\n\tPRIMUL NR. COMPLEX";
	cout << "\n\tPartea reala: ";
	cin >> real;
	obj1.setReal(real);
	cout << "\tPartea imaginara: ";
	cin >> imag;
	obj1.setImaginar(imag);

	cout << "\n\tAL DOILEA NR. COMPLEX";
	cout << "\n\tPartea reala: ";
	cin >> real;
	obj2.setReal(real);
	cout << "\tPartea imaginara: ";
	cin >> imag;
	obj2.setImaginar(imag);

	cout << "\n\n\tSuma: ";
	obj3 = obj1 + obj2;
	cout << "\n\tPartea reala: " << obj3.getReal();
	cout << "\n\tPartea imaginara: " << obj3.getImaginar();

	cout << "\n\n\tDiferenta: ";
	obj3 = obj1 - obj2;
	cout << "\n\tPartea reala: " << obj3.getReal();
	cout << "\n\tPartea imaginara: " << obj3.getImaginar();

	cout << "\n\n\tProdus: ";
	obj3 = obj1 * obj2;
	cout << "\n\tPartea reala: " << obj3.getReal();
	cout << "\n\tPartea imaginara: " << obj3.getImaginar();

	cout << "\n\n\tCatul: ";
	obj3 = obj1 / obj2;
	cout << "\n\tPartea reala: " << obj3.getReal();
	cout << "\n\tPartea imaginara: " << obj3.getImaginar();

	return 0;
}