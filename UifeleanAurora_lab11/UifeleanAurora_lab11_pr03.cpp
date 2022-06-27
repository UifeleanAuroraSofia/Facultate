/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Să se scrie un program C++ în care se defineşte o clasă Militar cu o metodă publică virtuală
sunt_militar( ) care indică apartenenţa la armată. Derivaţi clasa Militar pentru a crea clasa
Soldat şi clasa Ofiter. Derivaţi mai departe clasa Ofiter pentru a obtine clasele Locotenent,
Colonel, Capitan, General. Redefiniti metoda sunt_militar( ) pentru a indica gradul militar
pentru fiecare clasa specifica. Instantiati fiecare clasa Soldat, Locotenent,...,General, si apelati
metoda sunt_militar( ).
*/

#include<iostream>
#include "UifeleanAurora_lab11_pr03_Headerfile.h"

using namespace std;

int main() {

	int grade[5];

	Soldat ionel;
	Locotenent alin;
	Capitan andrei;
	Colonel daniel;
	General victor;

	grade[0] = ionel.sunt_militar();
	grade[1] = alin.sunt_militar();
	grade[2] = andrei.sunt_militar();
	grade[3] = daniel.sunt_militar();
	grade[4] = victor.sunt_militar();

	for (int i = 0; i < 5; i++) {
		switch (grade[i])
		{
		case 0:
			cout << "\n\tSoldat";
			break;
		case 1:
			cout << "\n\tLocotenent";
			break;
		case 2:
			cout << "\n\tCapitan";
			break;
		case 3:
			cout << "\n\tColonel";
			break;
		case 4:
			cout << "\n\tGeneral";
			break;
		}
	}

	return 0;
}