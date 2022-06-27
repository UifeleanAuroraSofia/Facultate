/*Uifelean Aurora Sofia, Seria A, anul I, ETTI, 2114
* Să se scrie un program care foloseşte metoda seekg( ) pentru poziţionare la mijlocul fişierului
si apoi afişează conţinutul fişierului începând cu această poziţie. Numele fişierului se citeste
din linia de comandă.
*/

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <fstream>
using namespace std;

#define dim 256

int main(int argc, char*argv[]) {

	char *car;
	car = new (nothrow) char[dim];
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
	//int lungime = in.tellg();
	//cout << "\n" << lungime << "\n";
	in.seekg(95, ios::beg); //pentru un fisier de 190 de caractere
	while (1) {
		in.getline(car, dim);
		cout << car;
		if (in.eof()) break;	
		in.getline(car, dim);
		cout << car;
	}
	in.close();

	return 0;
}