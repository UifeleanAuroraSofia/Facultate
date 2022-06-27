/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Scrieţi un program C++ în care afişaţi diferite valori în zecimal, octal şi hexazecimal. Afişaţi
valorile aliniate la dreapta, respectiv la stânga într-un câmp de afişare cu dimensiunea 15.
Utilizaţi manipulatorul setfill( ) pentru stabilirea caracterului de umplere şi metodele width( )
şi precision( ) pentru stabilirea dimensiunii câmpului de afişare şi a preciziei.
*/

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<iomanip>
using namespace std;

#define dim 15

int main() {

	int a = 100, c = 64;
	cout << "\n\tAliniere dreapta";
	cout << setprecision(7);
	cout << "\n\tZecimal: ";
	cout << right << setw(dim) << a << cout.fill(' ') << c;
	cout << "\n\tOctal: ";
	cout << oct << right << setw(dim) << a << cout.fill(' ') << c;
	cout << "\n\tHexazecimal: ";
	cout << hex << right << setw(dim) << a << cout.fill(' ') << c;

	cout.setf(ios::dec);

	cout << "\n\n\tAliniere stanga";
	cout << setprecision(6);
	cout << "\n\tZecimal: ";
	cout << left << setw(dim) << a << cout.fill(' ') << c;
	cout << "\n\tOctal: ";
	cout << oct << left << setw(dim) << a << cout.fill(' ') << c;
	cout << "\n\tHexazecimal: ";
	cout << hex << left << setw(dim) << a << cout.fill(' ') << c;

	return 0;
}