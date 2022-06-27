/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Declarati o clasa Animal, care va contine o metoda pur virtuala, respira( ) si doua metode
virtuale manaca( ) si doarme( ). Derivati in mod public o clasa Caine si alta Peste, care vor
defini metoda pur virtuala, iar clasa Caine va redefini metoda mananca( ), iar Peste metoda
doarme( ). Instantiati obiecte din cele doua clase si apelati metodele specifice. Definiti apoi un
tablou de tip Animal, care va contine obiecte din clasele derivate, daca e posibil. Daca nu,
gasiti o solutie adecvata.
*/

#include<iostream>
#include "UifeleanAurora_lab11_pr04_Headerfile.h"

using namespace std;

int main() {

	Caine c1(1, 1, 1);
	Peste p1(1, 1, 0);
	Animal* animale[4];

	Caine c2 = c1;
	Peste p2 = p1;

	cout << "\n\tCaine";
	if (c1.respira() == 1) cout << "\n\t\t- respira";
	else cout << "\n\t\t- nu respira";
	if (c1.mananca() == 1) cout << "\n\t\t- mananca";
	else cout << "\n\t\t- nu mananca";

	cout << "\n\tPeste";
	if (p1.respira() == 1) cout << "\n\t\t- respira";
	else cout << "\n\t\t- nu respira";
	if (p1.doarme() == 1) cout << "\n\t\t- doarme";
	else cout << "\n\t\t- nu doarme";

	animale[0] = &c1;
	animale[1] = &c2;
	animale[2] = &p1;
	animale[3] = &p2;

	for (int i = 0; i < 4; i++) {
		if (animale[i] == &c1 || animale[i] == &c2) {
			cout << "\n\tCaine";
		}
		else {
			cout << "\n\tPeste";
		}
		if (animale[i]->respira() == 1) cout << "\n\t\t- respira";
		else cout << "\n\t\t- nu respira";
		if (animale[i]->mananca() == 1) cout << "\n\t\t- mananca";
		else cout << "\n\t\t- nu mananca";
		if (animale[i]->doarme() == 1) cout << "\n\t\t- doarme";
		else cout << "\n\t\t- nu doarme";
	}

	return 0;
}