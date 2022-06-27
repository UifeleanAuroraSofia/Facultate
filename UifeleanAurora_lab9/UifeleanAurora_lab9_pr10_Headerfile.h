#include<iostream>
using namespace std;

class Number {
	double nr;
public:
	Number() {
		nr = 0.0;
	}
	double getNr() {
		return nr;
	}
	void setNr(double nr) {
		this->nr = nr;
	}
};

class Mathematics {
	Number numar;
public:
	Number getNumar() {
		return numar;
	}
	void setNumar(Number numar) {
		this->numar = numar;
	}
	Mathematics operator+(Mathematics& obj);
	Mathematics operator-(Mathematics& obj);
	Mathematics operator*(Mathematics& obj);
	Mathematics operator/(Mathematics& obj);
};

Mathematics Mathematics::operator+(Mathematics& obj) {
	Mathematics suma;
	suma.numar.setNr(numar.getNr() + obj.numar.getNr());
	return suma;
}

Mathematics Mathematics::operator-(Mathematics& obj) {
	Mathematics suma;
	suma.numar.setNr(numar.getNr() - obj.numar.getNr());
	return suma;
}

Mathematics Mathematics::operator*(Mathematics& obj) {
	Mathematics suma;
	suma.numar.setNr(numar.getNr() * obj.numar.getNr());
	return suma;
}

Mathematics Mathematics::operator/(Mathematics& obj) {
	Mathematics suma;
	suma.numar.setNr(numar.getNr() / obj.numar.getNr());
	return suma;
}