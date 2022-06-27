/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Definiti o clasa numita Record care stocheaza informatiile aferente unei melodii (artist, titlu,
durata). O clasa abstracta (Playlist) contine ca atribut privat un pointer spre un sir de obiecte
de tip inregistrare. In constructor se aloca memorie pentru un numar de inregistrari definit de
utilizator. Clasa contine metode accesor si mutator pentru datele componente ale unei
inregistrari si o metoda pur virtuala cu un parametru (abstracta), care poate ordona sirul de
inregistrari dupa un anumit criteriu codat in valoarea intreaga primita ca parametru
(1=ordonare dupa titlu, 2=ordonare dupa artist, 3=ordonare dupa durata). Intr-o alta clasa
(PlaylistImplementation) derivata din Playlist se implementeaza corpul metodei abstracte de
sortare.
In functia main( ), sa se instantieze un obiect din clasa PlaylistImplementation si apoi sa se
foloseasca datele si metodele aferente.
*/

#include<iostream>
#include "UifeleanAurora_lab11_pr06_Headerfile.h"

using namespace std;

void citire(Playlist*, int);

int main() {

	int n;
	cout << "\n\tIntroduceti numarul de melodii: ";
	cin >> n;

	PlaylistImplementation *obj;
	Record* hits;
	Playlist *a;

	a->setInregistrari(hits, 5);
	
	

	return 0;
}

void citire(Playlist *a, int n) {
	for (int i = 0; i < n; i++) {
		cout << "\n\tArtist: ";
		cin >> a.
	}
}