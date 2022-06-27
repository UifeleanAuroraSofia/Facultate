/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Definiti o clasa abstracta care contine 3 declaratii de metode pur virtuale pentru concatenarea,
intreteserea a doua siruri de caractere si inversarea unui sir de caractere primit ca parametru. O
subclasa implementeaza corpurile metodelor declarate in clasa de baza. Instantiati clasa
derivata si afisati rezultatele aplicarii operatiilor implementate in clasa asupra unor siruri de
caractere citite de la tastatura. Examinati eroarea data de incercarea de a instantia clasa de
baza.
*/

#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include "UifeleanAurora_lab11_pr05_Headerfile.h"

using namespace std;

int main() {

	Derivata obj1, obj2;
	Baza* o1 = &obj1, *o2 = &obj2;

	char s1[dim], s2[dim], s3[dim];
	cout << "\n\tPrimul sir: ";
	cin >> s1;
	cout << "\n\tAl doilea sir: ";
	cin >> s2;
	cout << "\n\tAl treilea sir: ";
	cin >> s3;

	o1->setS(s1);
	o2->setS(s2);

	//cout << obj.concat(s1, s2); 
	//no suitable constructor exists to convert from "char [30]" to "Baza"

	//obj1.concat(*o1, *o2);
	//parameter of abstract class type "Baza" is not allowed



	return 0;
}