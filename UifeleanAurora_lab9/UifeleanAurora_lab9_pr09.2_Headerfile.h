#include<iostream>
using namespace std;

#define dim 30

class Student {
	char numele[dim];
	int note[7];
public:
	char* getNumele() {
		return numele;
	}
	void setNumele(char* n) {
		strcpy(numele, n);
	}
	int* getNote() {
		return note;
	}
	void setNote(int* n) {
		for (int i = 0; i < 7; i++) {
			note[i] = n[i];
		}
	}
	int operator[](int poz) {
		return note[poz];
	}
	Student() {
		strcpy(numele, "Aurora");
	}
	Student(char* nu, int* no) {
		strcpy(numele, nu);
		for (int i = 0; i < 7; i++) {
			note[i] = no[i];
		}
	}
	Student(const Student& obj) {
		strcpy(this->numele, obj.numele);
		for (int i = 0; i < 7; i++) {
			note[i] = obj.note[i];
		}
	}
	Student& operator=(const Student& obj);
	friend void afisare(Student obj);
	/*~Student() {
		delete numele;
		delete note;
	}*/
};

Student& Student::operator=(const Student& obj) {
	if (this != &obj) {
		strcpy(numele, obj.numele);
		for (int i = 0; i < 7; i++) {
			note[i] = obj.note[i];
		}
	}
	return *this;
}

void afisare(Student obj) {
	cout << "\n\tNumele: " << obj.numele;
	cout << "\n\tNotele: ";
	for (int i = 0; i < 7; i++) {
		cout << obj.note[i] << " ";
	}
}