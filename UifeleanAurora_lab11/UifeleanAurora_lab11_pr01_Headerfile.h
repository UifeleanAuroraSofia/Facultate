#define _USE_MATH_DEFINES

#include<iostream>
#include<math.h>
using namespace std;

// clasa de baza
class Pozitie {
protected:
	int x, y;
public:
	Pozitie(int = 0, int = 0);
	Pozitie(const Pozitie&);//exista unul implicit standard, aici unul diferit
	~Pozitie();
	//void afisare();
	//void deplasare(int, int);
	virtual void afisare();
	virtual void deplasare(int, int);
};//CB
// constructor
Pozitie::Pozitie(int abs, int ord) {
	x = abs; y = ord;
	cout << "Constructor CB \"Pozitie\", ";
	afisare();
}
//constructor de copiere
Pozitie::Pozitie(const Pozitie& p) {
	x = p.x;
	y = p.y;
	cout << "Constructor de copiere CB \"Pozitie\", ";
	afisare();
}
// destructor
Pozitie::~Pozitie() {
	cout << "Destructor CB \"Pozitie \", ";
	afisare();
}
void Pozitie::afisare() {
	cout << " CB afisare: coordonate: x = " << x << ", y = " << y << "\n";
}
void Pozitie::deplasare(int dx, int dy) {
	cout << "CB: deplasare" << endl;
	x += dx; y += dy;
}
// clasa derivata
class Punct : public Pozitie {
	int vizibil;//ca un flag
	char culoare;
public:
	Punct(int = 0, int = 0, char = 'A');
	Punct(const Punct&);
	~Punct();
	void arata() {
		vizibil = 1;
	}
	void ascunde() {
		vizibil = 0;
	}
	void coloreaza(char c) {
		culoare = c;
	}
	void deplasare(int, int) override;
	void afisare() override;
};//CD
// constructor
Punct::Punct(int abs, int ord, char c) :Pozitie(abs, ord) {
	vizibil = 0;
	culoare = c;
	cout << "Constructor CD \"Punct\", ";
	afisare();//CD
}
// constructor de copiere
Punct::Punct(const Punct& p) :Pozitie(p.x, p.y) {
	vizibil = p.vizibil;
	culoare = p.culoare;
	cout << "Constructor de copiere CD \"Punct\", ";
	afisare();//CD
}
// destructor
Punct::~Punct() {
	cout << "Destructor CD \"Punct\", ";
	afisare();//CD
}
// redefinire functie de deplasare in clasa derivata
void Punct::deplasare(int dx, int dy){
	if (vizibil) {
		cout << " CD: Deplasare afisare CD\n";
		x += dx;
		y += dy;
		afisare();//CD
	}
	else {
		x += dx;
		y += dy;
		cout << "Deplasare prin CD afisare din CB\n";
		Pozitie::afisare();
	}
}
// redefinire metoda de afisare in clasa derivata
void Punct::afisare(){
	cout << "Pozitie: x = " << x << ", y = " << y;
	cout << ", culoare: " << culoare;
	if (vizibil) cout << ", vizibil \n";
	else cout << ", invizibil \n";
}

class Cerc : public Pozitie {
	int raza;
	int vizibil;
	char culoare;
public:
	Cerc(int = 0, int = 0, int = 1, char = 'A');
	Cerc(const Cerc&);
	void arata() {
		vizibil = 1;
	}
	void ascunde() {
		vizibil = 0;
	}
	void coloreaza(char c) {
		culoare = c;
	}
	double perimetrul();
	double arie();
	void deplasare(int, int) override;
	void afisare() override;
};

Cerc::Cerc(int abs, int ord, int raza, char c) :Pozitie(abs, ord) {
	vizibil = 0;
	culoare = c;
	this->raza = raza;
	cout << "Constructor CD \"Cerc de centru \", ";
	afisare();//CD
}

Cerc::Cerc(const Cerc& obj) :Pozitie(obj.x, obj.y) {
	vizibil = obj.vizibil;
	culoare = obj.culoare;
	raza = obj.raza;
	cout << "Constructor de copiere CD \"Cerc\", ";
	afisare();//CD
}

void Cerc::deplasare(int abs, int ord) {
	if (vizibil) {
		cout << "CD: Deplasare afisare CD Cerc\n";
		x += abs;
		y += ord;
		afisare();//CD
	}
	else {
		x += abs;
		y += ord;
		//cout << "Deplasare prin CD afisare din CB\n";
		//Pozitie::afisare;
	}
}

void Cerc::afisare() {
	cout << "Pozitie x = " << x << ", y = " << y;
	cout << ", raza: " << raza;
	cout << ", culoare: " << culoare;
	if (vizibil) {
		cout << ", vizibil\n";
	}
	else {
		cout << ", invizibil\n";
	}
}

double Cerc::perimetrul() {
	return 2 * M_PI * raza;
}
double Cerc::arie() {
	return M_PI * raza * raza;
}