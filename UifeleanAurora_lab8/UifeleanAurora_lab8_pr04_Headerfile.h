
#define _CRT_SECURE_NO_WARNINGS

#include<iostream>

using namespace std;

class Masina {
	int cc;
public:
	static int var_static;
	Masina() = default;
	Masina(int c) {
		cc = c;
		var_static++;
	}
};

int Masina::var_static;