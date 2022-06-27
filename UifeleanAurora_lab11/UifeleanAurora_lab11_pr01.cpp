/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
În cazul exemplului 3 (care exemplifică moştenirea simplă, cu clasa de bază Pozitie şi derivată
Punct) se cer următoarele:
a. urmariţi şi verificaţi ordinea de apel pentru constructori/destructori
b. extindeţi funcţia main( ) pentru a utiliza toate metodele din clasa de baza şi din clasa
derivată
c. introduceţi o nouă clasă Cerc (date şi metode), derivată din clasa Pozitie
d. scrieţi un program ce utilizează aceste clase.
*/

#include<iostream>
#include "UifeleanAurora_lab11_pr01_Headerfile.h"

using namespace std;

int main() {

	Pozitie pp0(7, 7);//base class object
	cout << "\n Metode CB \n";
	pp0.afisare();
	pp0.deplasare(6, 9);
	pp0.afisare();

	cout << "\n Metode CD \n";
	Punct p0(1, 1, 'V');//derived class object
	p0.afisare();
	Punct p1(p0);
	p1.arata();
	p1.deplasare(10, 10);

	cout << "\nUpcasting - obiecte:\n";
	pp0 = p0;//upcasting by objects
	pp0.afisare();

	cout << "\nUpcasting - pointeri:\n ";
	Pozitie * p;//base class pointer
	p = new Punct(100, 100, 'Z');//derived object to the base class pointer
	//cout<<"\nAfisare CB: \n"; non virtual

	cout << "\nAfisare CD: derived class object if virtual, else base class CB \n";
	p->afisare();//afis invizibil
	p = &pp0;

	cout << "\nAfisare CB: base class object always\n";
	p->afisare();
	p = &p1;

	cout << "\nAfisare CD: derived class object if virtual, else base class CB \n";
	p->afisare();
	Punct * pp;
	pp = &p1;

	cout << "\nAfisare CD: derived class object always\n";
	pp->afisare();

	cout << "\n Deplasare CD with 10, 10 \n";
	pp->deplasare(10, 10);

	cout << "\nAfisare CD: derived class object with ascunde()\n";
	pp->ascunde();
	pp->afisare();

	cout << "\nColoreaza CD: derived class object with coloreaza()\n";
	pp->coloreaza('R');
	pp->afisare();

	cout << "\n Deplasare CD with 10, 10 and ascunde()\n";
	pp->deplasare(10, 10);

	cout << "\nAfisare direct from CB: derived object displayed with base class method always\n";
	pp->Pozitie::afisare();

	cout << "\nDowncasting:\n ";
	Punct * pdown;//derived pointer
	pdown = (Punct*)&pp0;//downcasting by base class object

	cout << "\nAfisare CB: base class object using a derived pointer, else derived class CD \n";
	pdown->afisare();
	pdown = (Punct*)p;//downcasting by derived class object

	cout << "\n Afisare din Derivat, Punct" << endl;
	pdown->afisare();
	
	cout << "\n\n\n";
	Cerc cerc1(1, 1, 2, 'V');
	cerc1.afisare();
	cerc1.deplasare(2, 3);
	cerc1.afisare();
	Cerc cerc2(cerc1);
	cerc2.arata();
	cerc2.deplasare(10, 10);
	cout << "\nUpcasting - obiecte:\n";
	pp0 = cerc1; //upcasting by objects
	pp0.afisare();

	return 0;
}