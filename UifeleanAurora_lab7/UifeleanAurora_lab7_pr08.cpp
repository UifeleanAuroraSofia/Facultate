/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Consideram clasa Fractie care are doua atribute intregi private a si b pentru numarator si
numitor, doua metode de tip set( ) respectiv get( ) pentru atributele clasei publice si o metoda
simplifica( ) publica care simplifica obiectul curent Fractie de apel, returnând un alt obiect
simplificat. Metoda simplifica( ) va apela o metoda private cmmdc( ) pentru simplificarea
fracției. Definiți un constructor explicit fara parametri care initializeaza a cu 0 si b cu 1, si un
constructor explicit cu doi parametri care va fi apelat dupa ce s-a verificat posibilitatea
definirii unei fractii (b!=0). Definiți o metoda aduna_fractie( ) care are ca si parametru un
obiect de tip Fractie si returneaza suma obiectului curent de apel cu cel dat ca si parametru, ca
si un alt obiect de tip Fractie. Analog definiti metode pentru scadere, inmultire si impartire.
Instantiati doua obiecte de tip Fractie cu date citite de la tastatura. Afisati atributele initiale si
cele obtinute dupa apelul metodei simplifica( ). Efectuati operatiile implementate prin
metodele clasei si afisati rezultatele.
*/

#define _CRT_SECURE_NO_WARNINGS


#include "UifeleanAurora_lab7_pr08_Headerfile.h"
#include<iostream>

using namespace std;

int main() {
	int a, b;
	Fractie fr1, fr2;
	cout << "\n\tFRACTIE 1";
	cout << "\n\t\tNumarator: ";
	cin >> a;
	fr1.setA(a);
	cout << "\t\tNumitor: ";
	cin >> b;
	fr1.setB(b);
	cout << "\n\tFRACTIE 2";
	cout << "\n\t\tNumarator: ";
	cin >> a;
	fr2.setA(a);
	cout << "\t\tNumitor: ";
	cin >> b;
	fr2.setB(b);

	cout << "\n\tFRACTIE 1";
	cout << "\n\t\tNumarator: " << fr1.getA();
	cout << "\n\t\tNumitor: " << fr1.getB();
	cout << "\n\tFRACTIE 2";
	cout << "\n\t\tNumarator: " << fr2.getA();
	cout << "\n\t\tNumitor: " << fr2.getB();

	/*fr1 = fr1.simplifica();
	fr2 = fr2.simplifica();
	cout << "\n\tFRACTIILE SIMPLIFICATE";
	cout << "\n\tFRACTIE 1";
	cout << "\n\t\tNumarator: " << fr1.getA();
	cout << "\n\t\tNumitor: " << fr1.getB();
	cout << "\n\tFRACTIE 2";
	cout << "\n\t\tNumarator: " << fr2.getA();
	cout << "\n\t\tNumitor: " << fr2.getB();*/

	Fractie fr5 = fr1.adunare(fr2);
	cout << "\n\tSUMA FRACTIILOR";
	cout << "\n\t\tNumarator: " << fr5.getA();
	cout << "\n\t\tNumitor: " << fr5.getB();

	Fractie fr6 = fr1.scadere(fr2);
	cout << "\n\tSCADERE FRACTIILOR";
	cout << "\n\t\tNumarator: " << fr6.getA();
	cout << "\n\t\tNumitor: " << fr6.getB();

	Fractie fr7 = fr1.inmultire(fr2);
	cout << "\n\tPRODUS FRACTIILOR";
	cout << "\n\t\tNumarator: " << fr7.getA();
	cout << "\n\t\tNumitor: " << fr7.getB();

	Fractie fr8 = fr1.impartire(fr2);
	cout << "\n\tCAT FRACTIILOR";
	cout << "\n\t\tNumarator: " << fr8.getA();
	cout << "\n\t\tNumitor: " << fr8.getB();

	return 0;
}