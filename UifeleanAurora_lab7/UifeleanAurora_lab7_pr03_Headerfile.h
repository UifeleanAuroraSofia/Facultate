#define _CRT_SECURE_NO_WARNINGS

#include<iostream>

using namespace std;

class Student{
	string nume;
	string prenume;
	int note[7];
	int grupa;
public:
	string getNume(){
		return nume;
	}
	void setNume(string nume){
		this->nume = nume;
	}
	string getPrenume(){
		return prenume;
	}
	void setPrenume(string prenume) {
		this->prenume = prenume;
	}
	int* getNote(){
		return note;
	}
	void setNote(int* n){
		for (int i = 0; i < 7; i++){
			*(note + i) = *(n + i);
		}
	}
	int getGrupa() {
		return grupa;
	}
	void setGrupa(int grupa) {
		this->grupa = grupa;
	}
	double media() {
		double m = 0.0;
		for (int i = 0; i < 7; i++) {
			m += *(note + i);
		}
		return (double)m / 7;
	}
	~Student(){
		cout << "\n\tDistructor";
	}
};

