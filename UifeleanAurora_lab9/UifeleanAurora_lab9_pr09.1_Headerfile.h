#include<iostream>
using namespace std;

#define dim 30

class Student{
	char* numele;
	int* note;
	int nr_note;
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
		for (int i = 0; i < nr_note; i++) {
			note[i] = n[i];
		}
	}
	int getNr_note() {
		return nr_note;
	}
	void setNr_note(int nn) {
		nr_note = nn;
	}
	int operator[](int poz) {
		return note[poz];
	}
	Student() {
		numele = new (nothrow) char[dim];
		strcpy(numele, "Aurora");
		nr_note = 7;
		note = new (nothrow) int[nr_note];
	}
	Student(char *nu, int *no, int nn) {
		numele = new (nothrow) char[dim];
		strcpy(numele, nu);
		nr_note = nn;
		no = new (nothrow) int[nr_note];
		for (int i = 0; i < nr_note; i++) {
			note[i] = no[i];
		}
	}
	Student(const Student& obj) {
		numele = new (nothrow) char[dim];
		strcpy(this->numele, obj.numele);
		nr_note = (obj.nr_note);
		note = new (nothrow) int[nr_note];
		for (int i = 0; i < nr_note; i++) {
			note[i] = obj.note[i];
		}
	}
	Student &operator=(const Student& obj);
	friend void afisare(Student obj);
	/*~Student() {
		delete numele;
		delete note;
	}*/
};

Student& Student::operator=(const Student& obj) {
	if (this != &obj) {
		delete[]numele;
		delete[]note;
		nr_note = obj.nr_note;
		note = new (nothrow) int[nr_note];
		numele = new (nothrow) char[dim];
		strcpy(numele, obj.numele);
		for (int i = 0; i < nr_note; i++) {
			note[i] = obj.note[i];
		}
	}
	return *this;
}

void afisare(Student obj) {
	cout << "\n\tNumele: " << obj.numele;
	cout << "\n\tNumarul de note: " << obj.nr_note;
	cout << "\n\tNotele: ";
	for (int i = 0; i < obj.nr_note; i++) {
		cout << obj.note[i] << " ";
	}
}