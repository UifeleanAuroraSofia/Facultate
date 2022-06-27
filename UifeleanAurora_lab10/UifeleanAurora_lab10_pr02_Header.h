#include<iostream>
#include<fstream>
using namespace std;

#define dim 30

fstream fisier("text.txt", ios::in | ios::out | ios::trunc);

class Baza {
protected:
	char c[dim];
public:
	Baza() { strcpy(c, "pisici"); }
	void setC(char* d) {
		strcpy(c, d);
	}
	char* codare() {
		for (int i = 0; i < strlen(c); i++) {
			if (i % 2 == 0) {
				c[i]++;
			}
		}
		return c;
	}
	void afisare_in_consola() {
		cout << "\n\tSirul initial: " << c;
		cout << "\n\tSirul transformat: " << codare();
	}
};
class Derivata : public Baza {
public:
	void afisare_in_fisier() {
		fisier.seekg(0, ios::end);
		fisier.write(codare(), strlen(codare()));
	}
};

