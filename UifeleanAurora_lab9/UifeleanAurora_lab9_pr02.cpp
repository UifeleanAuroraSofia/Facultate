/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Construiţi o aplicaţie în care clasa OraCurenta are ca atribute private ora, minutele şi secundele şi metode
publice de tip set/get pentru atributele clasei. Adaugaţi o functie friend clasei prin care să se poată copia
conţinutul unui obiect OraCurenta dat ca si parametru, într-un alt obiect instanţă a aceleiaşi clase care va fi
returnat de functie, ora fiind insa modificata la Greenwich Mean Time. Utilizati timpul curent al calculatorului.
*/

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include "UifeleanAurora_lab9_pr02_Headerfile.h"

using namespace std;

int main() {
	char xx[dim];
	cout << "\nDati un sir de caractere (ob1), mai mic de " << dim << " :";
	gets_s(xx, _countof(xx));
	String ob1(xx);
	cout << "Dati un sir de caractere (ob2), mai mic de " << dim << " :";
	cin.getline(xx, sizeof(xx));
	String ob2(xx);
	String ob3;
	ob3 = ob1 + ob2;//assign
	cout << "Sirul (ob3) obtinut in urma adunarii prin supraincarcare operator = : " << ob3.getSir();
	cout << "\n Dati un sir (ob4) care va fi scazut din cel initial, mai mic de " << dim << " :";
	gets_s(xx, _countof(xx));
	String ob4(xx);
	String ob5 = ob1 - ob4;//copy constructor
	cout << "Sirul obtinut (ob5) in urma scaderii cu copy constructor: " << ob5.getSir();
	String ob6;
	cout << "\n Dati un sir de caractere (ob6) pentru un obiect, mai mic de " << dim << " :";
	cin.getline(xx, _countof(xx));
	ob6.setSir(xx);
	cout << "Sirul : " << ob6.getSir();
	ob3.setSir(xx);
	cout << "\nSirul ob3 setat la ob6: " << ob3.getSir();
	char c = ob3[0];
	cout << "\nPrimul caracter e: " << c;
}
