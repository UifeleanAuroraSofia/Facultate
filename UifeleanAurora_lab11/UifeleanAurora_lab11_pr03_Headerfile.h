#include<iostream>
using namespace std;

class Militar {
protected:
	int militar;
public:
	virtual int sunt_militar() {
		return militar;
	}

};

class Soldat : public Militar {
public:
	int sunt_militar() override;
};

int Soldat::sunt_militar() {
	militar = 0;
	return militar;
}

class Ofiter : public Militar {
public:
	int sunt_militar() override;
};

int Ofiter::sunt_militar() {
	return militar;
}

class Locotenent : public Ofiter {
public:
	int sunt_militar() override;
};

int Locotenent::sunt_militar() {
	militar = 1;
	return militar;
}

class Colonel : public Ofiter {
public:
	int sunt_militar() override;
};

int Colonel::sunt_militar() {
	militar = 3;
	return militar;
}

class Capitan : public Ofiter {
public:
	int sunt_militar() override;
};

int Capitan::sunt_militar() {
	militar = 2;
	return militar;
}

class General : public Ofiter {
public:
	int sunt_militar() override;
};

int General::sunt_militar() {
	militar = 4;
	return militar;
}