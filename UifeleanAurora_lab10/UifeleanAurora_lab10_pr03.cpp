/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Să se implementeze o clasă de bază cu două atribute protected de tip întreg care conţine o
metoda mutator pentru fiecare atribut al clasei, parametri metodelor fiind preluati in main() de
la tastatura şi metode accesor pentru fiecare atribut care returneaza atributul specific. Să se
scrie o a doua clasă, derivată din aceasta, care implementează operaţiile matematice
elementare: +, -, *, / asupra atributelor din clasa de bază, rezultatele fiind returnate de metode.
Să se scrie o a treia clasă, derivată din cea de-a doua, care implementează în plus o metoda
pentru extragerea rădăcinii pătrate dintr-un număr ( mul, rezultat al operatiei * din prima clasa
derivata) şi de ridicare la putere (atât baza (plus, rezultat al operatiei + din prima clasa
derivata) cât şi puterea (minus, rezultat al operatiei - din prima clasa derivata) sunt trimişi ca
parametri). Verificati apelul metodelor considerand obiecte la diferite ierarhii.
*/

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include "UifeleanAurora_lab10_pr03_Header.h"

using namespace std;

int main() {

	int a, b;
	Baza baza;
	Derivata1 d1;
	Derivata2 d2;

	cout << "\n\tClasa de baza:";
	cout << "\n\t\tA: ";
	cin >> a;
	cout << "\t\tB: ";
	cin >> b;
	baza.setA(a);
	baza.setB(b);

	cout << "\n\tPrima clasa derivata:";
	cout << "\n\t\tA: ";
	cin >> a;
	cout << "\t\tB: ";
	cin >> b;
	d1.setA(a);
	d1.setB(b);

	cout << "\n\tA doua clasa derivata:";
	cout << "\n\t\tA: ";
	cin >> a;
	cout << "\t\tB: ";
	cin >> b;
	d2.setA(a);
	d2.setB(b);

	cout << "\n\n\tClasa de baza:";
	cout << "\n\t\tA: " << baza.getA();
	cout << "\n\t\tB: " << baza.getB();

	cout << "\n\n\tPrima clasa derivata:";
	cout << "\n\t\tA: " << d1.getA();
	cout << "\n\t\tB: " << d1.getB();
	cout << "\n\tSuma: " << d1.plus();
	cout << "\n\tDiferenta: " << d1.minus();
	cout << "\n\tProdus: " << d1.mul();
	cout << "\n\tCat: " << d1.imp();

	cout << "\n\n\tA doua clasa derivata:";
	cout << "\n\t\tA: " << d2.getA();
	cout << "\n\t\tB: " << d2.getB();
	cout << "\n\tSuma: " << d2.plus();
	cout << "\n\tDiferenta: " << d2.minus();
	cout << "\n\tProdus: " << d2.mul();
	cout << "\n\tCat: " << d2.imp();
	cout << "\n\tRadacina patrata (radical din produs): " << d2.radacina(d2.mul());
	cout << "\n\tRidicare la putere (suma la puterea diferenta): " << d2.ridicare_putere(d2.plus(), d2.minus());

	return 0;
}