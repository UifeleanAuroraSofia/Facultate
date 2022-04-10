/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Să se scrie o aplicaţie C++ care implementează o clasă numită Triunghi. Clasa cuprinde
atributele private pentru laturile a, b, c, un constructor cu parametrii, metode setter si getter
adecvate. Calculați aria și perimetrul prin metode specifice clasei. Scrieți o metodă care să
indice dacă triunghiul este dreptunghic sau nu. Definiti o metoda private cu parametrii in clasa
care permite verificarea condiției ca laturile să formeze un triunghi. Ea va fi folosita si de
metodele setter.
*/

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include "UifeleanAurora_lab6_pr06_Headerfile.h"

using namespace std;

int main()
{
	int l1, l2, l3;
	Triunghi upsi;
	cout << "\n\tIntroduceti prima latura: ";
	cin >> l1;
	upsi.setLatura1(l1);
	cout << "\tIntroduceti a doua latura: ";
	cin >> l2;
	upsi.setLatura2(l2);
	cout << "\tIntroduceti a treia latura: ";
	cin >> l3;
	upsi.setLatura3(l3);

	if (upsi.getVerificare_Triunghi() == 1)
	{
		if (upsi.verificare_dreptunghic() == 1)
		{
			cout << "\n\tTriunghiul este dreptunghic.";
		}
		else
		{
			cout << "\n\tTriunghiul nu este dreptunghic.";
		}
		cout << "\n\tPerimetrul: " << upsi.perimetrul();
		cout << "\n\tAria: " << upsi.aria();
	}
	else
	{
		cout << "\n\tAcest triunghi nu exista!";
	}

	return 0;
}