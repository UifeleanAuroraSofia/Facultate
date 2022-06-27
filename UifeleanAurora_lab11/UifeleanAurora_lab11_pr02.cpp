/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
La exemplul al patrulea extindeţi clasa de bază cu alte metode virtuale, redefinite în clasele
derivate, cum ar fi metode get( ) şi set( ) pentru greutatea vehiculului (variabila greutate).
*/

#include<iostream>
#include "UifeleanAurora_lab11_pr02_Headerfile.h"

using namespace std;

int main() {

	float greutate;
	// apel direct, prin intermediul unor obiecte specifice
	Vehicul monocicleta;
	Automobil ford;
	Camion semi;
	Barca barca_de_pescuit;

	/*
	monocicleta.mesaj();
	ford.mesaj();
	semi.mesaj();//din Vehicul ca si CB
	barca_de_pescuit.mesaj();

	// apel prin intermediul unui pointer specific
	Vehicul* pmonocicleta;
	Automobil* pford;
	Camion* psemi;
	Barca* pbarca_de_pescuit;

	cout << "\n";
	pmonocicleta = &monocicleta;
	pmonocicleta->mesaj();
	pford = &ford;
	pford->mesaj();
	psemi = &semi;
	psemi->mesaj();//din CB
	pbarca_de_pescuit = &barca_de_pescuit;
	pbarca_de_pescuit->mesaj();

	// apel prin intermediul unui pointer catre un obiect al clasei de baza
	cout << "\n";
	pmonocicleta = &monocicleta;
	pmonocicleta->mesaj();//Vehicul
	pmonocicleta = &ford;//upcasting
	pmonocicleta->mesaj();//Automobil
	pmonocicleta = &semi;//upcasting
	pmonocicleta->mesaj();//Camion- Vehicul
	pmonocicleta = &barca_de_pescuit;//upcasting
	pmonocicleta->mesaj();//Barca
	*/
	
	cout << "\n\tIntroduceti greutatea monocicletei: ";
	cin >> greutate;
	monocicleta.setGreutate(greutate);

	cout << "\tIntroduceti greutatea fordului: ";
	cin >> greutate;
	ford.setGreutate(greutate);

	cout << "\tIntroduceti greutatea semiului: ";
	cin >> greutate;
	semi.setGreutate(greutate);

	cout << "\tIntroduceti greutatea barcii de pescuit: ";
	cin >> greutate;
	barca_de_pescuit.setGreutate(greutate);

	cout << "\n\tGREUTATE";
	cout << "\n\t\tMonocicleta: " << monocicleta.getGreutate();
	cout << "\n\t\tFord: " << ford.getGreutate();
	cout << "\n\t\tSemi: " << semi.getGreutate();
	cout << "\n\t\tBarca de pescuit: " << barca_de_pescuit.getGreutate();

	return 0;
}