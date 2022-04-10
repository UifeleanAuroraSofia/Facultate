/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Să se scrie clasa Seif, cu atributele private cifru (pin - sir de caractere, 4 cifre int) și suma.
Descrieți metodele private getSuma() și setSuma( ) și metodele publice puneInSeif( ) și
scoateDinSeif( ) cu care să accesați suma de bani care se află în seif. Metoda puneInSeif( )
poate apela getSuma() și setSuma( ), metoda scoateDinSeif( ) poate apela getSuma( )
și setSuma( ). Instanțiați obiecte din clasa Seif, iar metodele puneInSeif( ) și scoateDinSeif( )
vor putea accesa suma doar dacă parametrul de tip cifru utilizat corespunde obiectului
instanțiat. În caz de diferență de cifru, se va da un mesaj.
*/

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include "UifeleanAurora_lab6_pr07_Headerfile.h"

using namespace std;

int main()
{
	int pin, cod, suma;
	Seif seif(1234, 500);
	cout << "\n\tIntroduceti pinul de 4 cifre: ";
	cin >> pin;
	if (seif.getPin() == pin)
	{
		cout << "\n\tPin corect!";
		cout << "\n\tSuma initiala: 500\n";
		cout << "\n\tIntroduceti:\n\tTasta 1 - depunere\n\tTasta 2 - retragere\n\tCod: ";
		cin >> cod;
		cout << "\n\tIntroduceti suma: ";
		cin >> suma;
		switch (cod)
		{
		case 1:
			seif.puneInSeif(seif, suma);
			break;
		case 2:
			seif.scoateDinSeif(seif, suma);
			break;
		}
	}
	else
	{
		cout << "\n\tPin incorect!";
	}

	return 0;
}