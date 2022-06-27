/*Uifelean Aurora Sofia, Seria A, anul I, ETTI, 2114
Scrieţi un program care utilizează metoda write( ) pentru a scrie într-un fişier şiruri de
caractere. Afişaţi apoi conţinutul fişierului folosind metoda get( ). Numele fişierului se va citi
de la tastatură.
*/

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<fstream>

using namespace std;

#define dim1 20
#define dim2 256

int main() {

	char *nume_fis, *str, c;
	nume_fis = new (nothrow) char[dim1];
	str = new (nothrow) char[dim1];
	
	cout << "\n\tIntroduceti numele fisierului: ";
	cin >> nume_fis;

	fstream fisier;
	fisier.open(nume_fis);
	if (!fisier) {
		cout << "\n\tEroare la deschiderea fisierului!";
	}
	else {
		int i = 0;
		do {
			cout << "\n\tIntroduceti o secventa de text: ";
			cin >> str;
			fisier.write(str, strlen(str));
			i++;
			cout << "\n\tDoriti sa mai citi? (d/n): ";
			cin >> c;
		} while (c != 'n');
		fisier.close();
		fisier.open(nume_fis);
		cout << "\n\tDatele introduse: ";
		while (fisier.good()) {
			c = fisier.get();
			if (fisier.good()) {
				cout << c;
			}
		}
		fisier.close();
	}
	return 0;
}