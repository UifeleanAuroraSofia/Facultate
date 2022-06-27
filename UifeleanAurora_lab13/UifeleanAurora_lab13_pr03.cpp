/*Uifelean Aurora Sofia, Seria A, anul I, ETTI, 2114
Scrieţi o aplicaţie C++ care citeşte un fişier utilizând metoda read( ). Verificaţi starea
sistemului după fiecare operaţie de citire. Numele fişierului se va citi din linia de comandă.
Afişaţi pe ecran conţinutul fişierului.
*/

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<fstream>

using namespace std;

#define dim 25

int main(int argc, char* argv[]) {

	char str[dim] = "";
	ifstream fin;
	if (argc != 2) {
		cout << "Specificati numele fisierului! \n";
		exit(1);
	}
	ifstream in;
	in.open(argv[1]);
	if (!in) {
		cout << "Nu poate deschide fisierul";
		exit(1);
	}
	while (1) {
		in.read(str, dim - 1);
		if (in.eof()) {
			break;
		}
		cout << "\n\tText fisier: ";
		cout << str;
		cout << "\n\tStarea fisierului (1 - bine, 0 - rau): ";
		cout << in.good();
	}

	return 0;
}