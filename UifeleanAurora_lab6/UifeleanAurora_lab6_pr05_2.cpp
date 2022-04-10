/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Să se modifice exemplul 2 astfel încât codul să poată fi lansat în execuție considerand
atributul clasei private si metode public get/set adecvate. In main() instantiati un obiect din
clasa care va fi modificat si apoi accesat, afisand rezultatul.

CU POINTERI SI ADRESE
*/

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include"UifeleanAurora_lab6_pr02_Headerfile.h"

int main() {
	Test2 ob1;
	Test2* ptrob1;
	ptrob1 = &ob1;
	int a;
	cout << "\n\tIntroduceti valoarea variabilei de tip \"int\" din clasa: ";
	cin >> a;
	ptrob1->setTest2(a);

	cout << "\n\tValoarea variabilei de tip \"int\" din clasa: " << ptrob1->getTest2();
}
