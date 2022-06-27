#include<iostream>
#include<string.h>
using namespace std;

#define dim 30

class Baza {
protected:
	char s[dim];
public:
	Baza();
	char* getS() {
		return s;
	}
	void setS(char str[]) {
		strcpy(s, str);
	}
	virtual char* concat(Baza, Baza) = 0;
	virtual char* interlacing(Baza, Baza) = 0;
	virtual char* invers(Baza) = 0;
};

class Derivata : public Baza{
public:
	char* concat(Baza obj1, Baza obj2) {
		char re[dim + dim];
		strcpy(re, obj1.getS());
		strcat(re, obj2.getS());
		return re;
	}
	char* interlacing(Baza obj1, Baza obj2) {
		char re[dim + dim];
		char s1[dim], s2[dim];
		strcpy(s1, obj1.getS());
		strcpy(s2, obj2.getS());

		int i = 0, j = 0, n = strlen(s1), m = strlen(s2);

		while (n != 0 && m != 0) {
			re[i++] = s1[j];
			re[i++] = s2[j];
			j++;
			n--;
			m--;
		}
		while (n != 0) {
			re[i++] = s1[j];
			j++;
			n--;
		}
		while (m != 0) {
			re[i++] = s2[j];
			j++;
			m--;
		}
	}
	char* invers(Baza obj) {
		char re[dim];
		strcpy(re, obj.getS());
		for (int i = 0; i < strlen(re) / 2; i++) {
			re[strlen(re) - 1] = re[i];
		}
		return re;
	}
};