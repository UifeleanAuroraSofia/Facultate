
#include<cmath>
#include<iostream>

using namespace std;

#define M_PI 3.14159274101257324219

class Punct {
	int x;
	int y;
public:
	int getX() {
		return x;
	}
	void setX(int x) {
		this->x = x;
	}
	int getY() {
		return y;
	}
	void setY(int y) {
		this->y = y;
	}
	friend void aria_perimetrul(Punct, Punct, int figura);
};

void aria_perimetrul(Punct a, Punct b, int figura) {

	float lng = sqrt(((b.x - a.x) * (b.x - a.x)) + ((b.y - a.y) * (b.y - a.y)));

	if (a.x < 0) {
		a.x = -a.x;
	}
	if (a.y < 0) {
		a.y = -a.y;
	}
	if (b.x < 0) {
		b.x = -b.x;
	}
	if (b.y < 0) {
		b.y = -b.y;
	}

	switch (figura) {
	case 1:
		cout << "\n\tCERC";
		cout << "\n\tPerimetrul: " << lng * M_PI;
		cout << "\n\tAria: " << (float)(M_PI * lng * lng / 8);
		break;
	case 2:
		float c1 = (float)a.x + b.x;
		float c2 = (float)a.y + b.y;
		float ip = sqrt(c1 * c1 + c2 * c2);
		cout << "\n" << lng << "\n";
		cout << "\n\tTRIUNGHI DREPTUNGHIC";
		cout << "\n\tPerimetrul: " << (float)c1 + c2 + ip;
		cout << "\n\tAria: " << (float)(c1 * c2) / 2;
		break;
	};
}