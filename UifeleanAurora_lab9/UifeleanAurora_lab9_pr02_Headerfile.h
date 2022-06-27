#define _CRT_SECURE_NO_WARNINGS

#include<iostream>

using namespace std;

const int dim = 31;//30+1 pt. \0
class String {
	char* sir;
public:
	String() {
		sir = new (nothrow) char[dim];
	}
	String(char* x) {
		sir = new (nothrow) char[strlen(x) + 1];//se mai rezerva pentru \0 – destructorul va lucra corect
		strcpy(sir, x);
	}
	String(const String& x) {//copy constructor
		sir = new (nothrow) char[strlen(x.sir) + 1];
		strcpy(sir, x.sir);
		cout << "\nCopy cons.";
	}
	String& operator= (const String& x) {//assign
		if (this == &x) return *this;
		delete[] sir;//eliberez sir din obiectul current, echivalent cu: this-> ~String();
		sir = new (nothrow) char[strlen(x.sir) + 1];//aloc spatiu pentru sir pornind de la sirul de asignat
			strcpy(sir, x.sir);
		cout << "\nAssign overload";
		return *this;
	}
	String(String&& a) {//move constructor
		sir = a.sir;
		cout << "\nMove cons.";
		a.sir = nullptr;
	}
	~String() {
		if (sir != nullptr) cout << "\nCall Destructor";
		else cout << "\nDestructor is called for nullptr";
		delete[] sir;
	}
	void setSir(char* x) {
		strcpy(sir, x);
	}
	char* getSir() {
		return sir;
	}
	String operator+ (String x1) { // supraincarcare cu metoda membra
		String rez;
		rez.~String();
		rez.sir = new (nothrow) char[strlen(this->sir) + strlen(x1.sir) + 1];
		strcpy(rez.sir, sir);
		strcat(rez.sir, x1.sir);
		return rez;
	}
	char operator[ ](int poz) { // supraincarcarea op [ ] pt. returnarea unui
		char rez; // caracter din pozitia data in sir
		rez = sir[poz];
		return rez;
	}
	//functia prietena care supraincarca operatorul de scadere este definite in exteriorul clasei mai jos
	friend String operator- (const String& x1, const String& x2);
};//String
// supraincarc. op. prin f-ctie friend, in exteriorul clasei

String operator- (const String& x1, const String& x2) {
	char* pp;
	pp = strstr(x1.sir, x2.sir); // adresa unde începe sirul x2.sir in sirul x1.sir
	char * buf = new (nothrow) char[strlen(x1.sir) + 1];
	strncpy(buf, x1.sir, pp - x1.sir);
	strcpy(buf + (pp - x1.sir), pp + strlen(x2.sir));
	pp = strstr(buf, x2.sir);
	while (pp) {
		strncpy(buf, buf, pp - buf);
		strcpy(buf + (pp - buf), pp + strlen(x2.sir));
		pp = strstr(buf, x2.sir);
	}
	return String(buf);
}
