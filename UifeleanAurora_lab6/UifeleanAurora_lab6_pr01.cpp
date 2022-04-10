/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Să se scrie o aplicaţie C++ care implementează o clasă numită PilotF1. Clasa definește
variabilele private nume (șir de caractere), echipa (șir de caractere), varsta (int), record (int),
nr_pole_position (int). Ca membri publici, clasa conține metode accesor/getter și
mutator/setter distincte pentru fiecare din atributele clasei.
In funcția main( ), să se creeze 3 instanțe distincte ale clasei PilotF1 și să se folosească
metodele mutator/setter pentru a inițializa datele din fiecare obiect cu informația
corespunzătoare citită de la tastatură. Folosind metodele accesor/getter, să se afișeze toate
datele pilotului cu cel mai bun record.
*/

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include "UifeleanAurora_lab6_pr01_Headerfile.h"

using namespace std;

PilotF1* citire_piloti();
int pilot_record_maxim(PilotF1* piloti);
void afisare_pilot(PilotF1* piloti);

int main()
{
	PilotF1* piloti = citire_piloti();
	afisare_pilot(piloti);
	delete[]piloti;
	return 0;
}

PilotF1* citire_piloti()
{
	char nume[21], echipa[21];
	int varsta, record, nr_pole_position;

	PilotF1* piloti = new (std::nothrow) PilotF1[3];

	for (int i = 0; i < 3; i++)
	{
		cout << "\n\tPILOT NR." << i;
		cout << "\n\tNumele: ";
		cin >> nume;
		(piloti + i)->setNume(nume);
		cout << "\tEchipa: ";
		cin >> echipa;
		(piloti + i)->setEchipa(echipa);
		cout << "\tVarsta: ";
		cin >> varsta;
		(piloti + i)->setVarsta(varsta);
		cout << "\tRecord: ";
		cin >> record;
		(piloti + i)->setRecord(record);
		cout << "\tNr.Pole Position: ";
		cin >> nr_pole_position;
		(piloti + i)->setNr_pole_position(nr_pole_position);
	}

	return piloti;
}

int pilot_record_maxim(PilotF1* piloti)
{
	int maxim = (*(piloti + 0)).getRecord(), index = 0;
	for (int i = 1; i < 3; i++)
	{
		if ((piloti + i)->getRecord() > maxim)
		{
			maxim = (*(piloti + i)).getRecord();
			index = i;
		}
	}
	return index;
}

void afisare_pilot(PilotF1* piloti)
{
	int index = pilot_record_maxim(piloti);

	cout << "\n\tPilotul cu cel mai mare record:";
	cout << "\n\tNumele: " << (piloti + index)->getNume();
	cout << "\n\tEchipa: " << (piloti + index)->getEchipa();
	cout << "\n\tVarsta: " << (piloti + index)->getVarsta();
	cout << "\n\tRecord: " << (piloti + index)->getRecord();
	cout << "\n\tNr.Pole Position: " << (piloti + index)->getNr_pole_position();
}