/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Să se scrie un program care implementează clasa Aritmetica cu două atribute a și b de tip
numeric (int, float sau double) si metode setter si getter adecvate. Implementați metoda suma()
în interiorul clasei și metoda diferenta() ce apartine de asemenea clasei, dar e definita în afara
clasei, metode care vor fi apelate prin intermediul unui obiect al clasei Aritmetica. În funcția
principală main() instanțiați trei obiecte de tip Aritmetica. Modificati atributele a si b la fiecare
obiect in parte folsind metodele de tip setter. Aplicați asupra lor operațiile de adunare și
scădere pe care le-ați implementat prin metodele suma() și diferenta(). Metodele returneaza
valorile numerice corespunzatoare operatiei folosind cele doua atribute ale clasei valori ce le
veti afisa in main(). La fiecare grup de operatii adunare/scadere afisati valorile atributelor
obiectului folosind metodele de tip getter
*/

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include "Aritmetica.h"

using namespace std;

int main()
{
	int n, m;
	Aritmetica obiect1, obiect2, obiect3;
	cout << "\n\tOBIECT 1: Introduceti doua numere: ";
	cin >> n >> m;
	obiect1.setprimulnr(n);
	obiect1.setaldoileanr(m);

	cout << "\n\tOBIECT 2: Introduceti doua numere: ";
	cin >> n >> m;
	obiect2.setprimulnr(n);
	obiect2.setaldoileanr(m);

	cout << "\n\tOBIECT 3: Introduceti doua numere: ";
	cin >> n >> m;
	obiect3.setprimulnr(n);
	obiect3.setaldoileanr(m);

	cout << "\n\tSUMA OBIECT 1: " << obiect1.getprimulnr() << " + " << obiect1.getaldoileanr() << " = " << obiect1.suma();
	cout << "\n\tDIFERENTA OBIECT 1: " << obiect1.getprimulnr() << " - " << obiect1.getaldoileanr() << " = " << obiect1.diferenta();

	cout << "\n\n\tSUMA OBIECT 2: " << obiect2.getprimulnr() << " + " << obiect2.getaldoileanr() << " = " << obiect2.suma();
	cout << "\n\tDIFERENTA OBIECT 2: " << obiect2.getprimulnr() << " - " << obiect2.getaldoileanr() << " = " << obiect2.diferenta();
	
	cout << "\n\n\tSUMA OBIECT 3: " << obiect3.getprimulnr() << " + " << obiect3.getaldoileanr() << " = " << obiect3.suma();
	cout << "\n\tDIFERENTA OBIECT 3: " << obiect3.getprimulnr() << " - " << obiect3.getaldoileanr() << " = " << obiect3.diferenta();

	return 0;
}