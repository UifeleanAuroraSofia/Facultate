/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Definiţi o clasă numita Triangle care are 3 atribute protected pentru laturi si o metoda care
calculează perimetrul unui triunghi ale cărui laturi sunt citite de la tastatura (folosite de un
constructor adecvat) şi apoi o clasă derivata in mod public din Triangle, Triangle_extended,
care în plus, calculează şi aria triunghiului. Folosind obiecte din cele doua clase apelati
metodele specifice. Verificati inainte de instantiere posibilitatea definirii unui triunghi.
*/

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include "UifeleanAurora_lab10_pr04_Header.h"

using namespace std;

int main() {

	int a, b, c;
	Triangle triunghi1;
	Triangle_extended triunghi2;

	cout << "\n\tLaturile unui triunghi:";
	cout << "\n\t\tA: ";
	cin >> a;
	cout << "\t\tB: ";
	cin >> b;
	cout << "\t\tC: ";
	cin >> c;
	triunghi1.setA(a);
	triunghi1.setB(b);
	triunghi1.setC(c);
	triunghi2.setA(a);
	triunghi2.setB(b);
	triunghi2.setC(c);

	if (a + b > c && a + c > b && b + c > a) {
		cout << "\n\tLaturile triunghiului:";
		cout << "\n\t\tA: " << triunghi1.getA();
		cout << "\n\t\tB: " << triunghi1.getB();
		cout << "\n\t\tC: " << triunghi1.getC();
		cout << "\n\t\tPerimetrul: " << triunghi1.perimetrul();
		cout << "\n\t\tAria: " << triunghi2.aria();
	}
	else {
		cout << "\n\tLaturile nu pot forma un triunghi!";
	}

	return 0;
}