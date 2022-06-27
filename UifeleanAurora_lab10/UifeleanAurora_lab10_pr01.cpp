/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Implementaţi programul prezentat în exemplul 3 şi examinaţi eventualele erori date la
compilare daca exista prin eliminarea comentariilor. Modificaţi programul astfel încât să se
poată accesa din funcţia main( ), prin intermediul obiectului obiect_derivat, şi metodele
aduna( ) şi scade( ) din clasa de baza pastrand mostenirea de tip private.
*/

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include "UifeleanAurora_lab10_pr01_Header.h"

using namespace std;

int main()
{
	Baza obiect_baza;
	cout << "\n\tAfis din baza (val. initiale): " << obiect_baza.getA() << " " <<
	obiect_baza.getB() << '\n';
	cout << "\t\tSuma este (cu val. initiale, baza) = " << obiect_baza.aduna(); // corect aduna( ) e public
	cout << "\n\t\tDiferenta este (cu val. initiale, baza) = " << obiect_baza.scade();
	//corect scade( ) e public

	obiect_baza.setA(2);
	obiect_baza.setB(3);
	cout << "\n\n\tAfis din baza (modificat): " << obiect_baza.getA() << " " << obiect_baza.getB() << '\n';
	cout << "\t\tSuma/Diferenta dupa setare= " << obiect_baza.aduna() << "/" <<
	obiect_baza.scade() << '\n';
	Derivata obiect_derivat;
	cout << "\n\tProdusul este (din derivat cu val. initiale) = " << obiect_derivat.inmulteste() << '\n';

	cout << "\n\tCu modificarea din private in public a clasei mostenire Derivata: ";
	cout << "\n\t\tSuma: " << obiect_derivat.aduna();
	cout << "\n\t\tDiferenta: " << obiect_derivat.scade();

	// corect val. implicite
	//cout << "\nSuma este (din derivat cu val. initiale, baza) = " << obiect_derivat.aduna( ); 
	// incorect aduna() devine private
	//cout << "\nDiferenta este (din derivat cu val. initiale, baza) = " <<obiect_derivat.scade( ); 
	//eroare, scade() devine private

}
