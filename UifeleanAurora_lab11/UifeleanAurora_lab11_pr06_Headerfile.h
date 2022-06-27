#include<iostream>
using namespace std;

#define dim 30

class Record {
protected:
	char artist[dim];
	char titlu[dim];
	int durata;
};

class Playlist : public Record {
protected:
	Record* inregistrari;
public:
	Playlist(int n) {
		inregistrari = new (nothrow) Record[n];
	}
	virtual void ordonare(int k) = 0;
	Record* getInregistrari() {
		return inregistrari;
	}
	void setInregistrari(Record* inr, int n) {
		delete inregistrari;
		inregistrari = new (nothrow) Record[n];
	}
	char* getArtist() {
		return artist;
	}
	void setArtist(char a[dim]) {
		strcpy(artist, a);
	}
	char* getTitlu() {
		return titlu;
	}
	void setTiltu(char t[dim]) {
		strcpy(titlu, t);
	}
	int getDurata() {
		return durata;
	}
	void setDurata(int durata) {
		this->durata = durata;
	}
};

class PlaylistImplementation : public Playlist{
public:
	void ordonare(int k) {
		switch (k)
		{
		case 1: //sortare dupa titlu
			qsort(inregistrari, sizeof(inregistrari) / sizeof(Record), sizeof(inregistrari), cmp_titlu);
			break;
		case 2: //sortare dupa artist
			qsort(inregistrari, sizeof(inregistrari) / sizeof(Record), sizeof(inregistrari), cmp_artist);
			break;
		case 3: //sortare dupa durata
			qsort(inregistrari, sizeof(inregistrari) / sizeof(Record), sizeof(inregistrari), cmp_durata);
			break;
		}
	}
};

int cmp_titlu(const void* a, const void* b) {
	Playlist *aa = (Playlist *)a;
	Playlist *bb = (Playlist *)b;
	if (aa->getTitlu() > bb->getTitlu()) {
		return 1;
	}
	else {
		return -1;
	}
}

int cmp_artist(const void* a, const void* b) {
	Playlist* aa = (Playlist*)a;
	Playlist* bb = (Playlist*)b;
	if (aa->getArtist() > bb->getArtist()) {
		return 1;
	}
	else {
		return -1;
	}
}

int cmp_durata(const void* a, const void* b) {
	Playlist* aa = (Playlist*)a;
	Playlist* bb = (Playlist*)b;
	if (aa->getDurata() > bb->getDurata()) {
		return 1;
	}
	else {
		return -1;
	}
}

