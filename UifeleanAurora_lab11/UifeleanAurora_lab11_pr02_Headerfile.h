#include<iostream>

using namespace std;

class Vehicul {
protected:
	int roti;
	float greutate;
public:
	virtual float getGreutate() {
		return greutate;
	}
	virtual void setGreutate(float g) {
		greutate = g;
		//cout << "Greutate din clasa Vehicul\n";
	}
	virtual void mesaj() {
		cout << "Mesaj din clasa Vehicul\n";
	}
};

class Automobil : public Vehicul {
	int incarcatura_pasageri;
public:
	void mesaj() override {
		cout << "Mesaj din clasa Automobil\n";
	}
	float getGreutate() override;
	void setGreutate(float) override;
};

class Camion : public Vehicul {
	int incarcatura_pasageri;
	float incarcatura_utila;
public:
	int pasageri() {
		return incarcatura_pasageri;
	}
	float getGreutate() override;
	void setGreutate(float) override;
};

class Barca : public Vehicul {
	int incarcatura_pasageri;
public:
	int pasageri() {
		return incarcatura_pasageri;
	}
	void mesaj() override {
		cout << "Mesaj din clasa Barca\n";
	}
	float getGreutate() override;
	void setGreutate(float) override;
};

float Automobil::getGreutate() {
	//cout << "Greutate Automobil: ";
	return greutate;
}

void Automobil::setGreutate(float greutate) {
	this->greutate = greutate;
	//cout << "Greutate Automobil: " << greutate;
}

float Camion::getGreutate() {
	//cout << "Greutate Camion: ";
	return greutate;
}

void Camion::setGreutate(float greutate) {
	this->greutate = greutate;
	//cout << "Greutate Camion: " << greutate;
}

float Barca::getGreutate() {
	//cout << "Greutate Barca: ";
	return greutate;
}

void Barca::setGreutate(float greutate) {
	this->greutate = greutate;
	//cout << "Greutate Barca: " << greutate;
}