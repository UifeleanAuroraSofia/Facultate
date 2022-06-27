#define _CRT_SECURE_NO_WARNINGS

#include<iostream>

using namespace std;

class Student {
	string nume;
	string prenume;
	int *note;
	int nr_note;
public:
	string getNume() {
		return nume;
	}
	void setNume(string nume) {
		this->nume = nume;
	}
	string getPrenume() {
		return prenume;
	}
	void setPrenume(string prenume) {
		this->prenume = prenume;
	}
	int* getNote() {
		return note;
	}
	void setNote(int* n) {
		note = new (nothrow) int[nr_note];
		for (int i = 0; i < nr_note; i++) {
			*(note + i) = *(n + i);
		}
	}
	int getNr_note() {
		return nr_note;
	}
	void setNr_note(int nr_note) {
		this->nr_note = nr_note;
	}
	double media() {
		double m = 0.0;
		for (int i = 0; i < nr_note; i++) {
			m += *(note + i);
		}
		return (double)m / 7;
	}
	~Student() {
		cout << "\n\tDistructor";
	}
};

