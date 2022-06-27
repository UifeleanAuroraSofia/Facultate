#include<iostream>
using namespace std;

class MiscareAccelerata {
	int dc;
	int vc;
	int a;
public:
	MiscareAccelerata(int d0, int v0, int a0) {
		dc = d0;
		vc = v0;
		a = a0;
	}
	friend istream& operator >>(istream& stream, MiscareAccelerata& ob);
	friend ostream& operator <<(ostream& stream, MiscareAccelerata ob);
	void determinaMiscarea(int sec, int a0);
};

istream& operator >>(istream& stream, MiscareAccelerata& obj) {
	cout << "\n\tDistanta curenta (m): ";
	stream >> obj.dc;
	cout << "\tViteza curenta (m/s): ";
	stream >> obj.vc;
	cout << "\tAcceleratia (m/s la patrat): ";
	stream >> obj.a;
	return stream;
}

ostream& operator <<(ostream& stream, MiscareAccelerata obj) {
	stream << "\n\tDistanta: " << obj.dc << " m";
	stream << "\n\tViteza: " << obj.vc << " m/s";
	stream << "\n\tAcceleratia " << obj.a << " m/s la patrat";
	return stream;
}

void MiscareAccelerata::determinaMiscarea(int t, int a0) {
	dc = dc + vc * t + a0 * t * t / 2;
	vc = vc + a0 * t;
}