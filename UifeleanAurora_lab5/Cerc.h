#include<stdio.h>
#include <iostream>

using namespace std;

class Cerc {
	int raza;
public:
	Cerc(int rd) {
		raza = rd;
	}
	~Cerc() {
		cout << "\n\tDestructor cerc";
	}
	double ar_cerc() {
		return 3.14 * raza * raza;
	}
	double per_cerc() {
		return 2 * 3.14 * raza;
	}
	int getRaza() { return raza; }
	void setRaza(int rd) { raza = rd; }
}; //cerc
