/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Să se scrie un program care afişează numele programului, data şi ora compilării şi numărul de linii pe care îl
are acest program.
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <time.h>

void Data_Ora();
void Numar_linii();

int main(int argc, char *argv[])
{
	printf("\n\tNumele programului este: %s", argv[0]);
	Data_Ora();
	Numar_linii();
	return 0;
}

void Data_Ora()
{
	time_t data_ora;
	time(&data_ora);
	printf("\n\tData si ora sunt: %s", ctime(&data_ora));
}

void Numar_linii()
{
	FILE* f;
	char c;
	int k = 0;
	f = fopen("UifeleanAurora_lab1_pr8.cpp", "r+");
	for (c = getc(f); c != EOF; c = getc(f))
	{
		if (c == '\n')
		{
			k++;
		}
	}
	printf("\tNumarul de linii este: %d", k);
}