/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Implementaţi metoda bulelor (Bubble-Sort) care foloseşte un indicator flag şi optimizează ciclul interior. Se
cere atât scrierea funcţiei, cât şi partea de program care face citirea şi afişarea şirului iniţial şi a celui ordonat
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int* BubbleSort(int* v, int n);
int* citire_sir_numere(int n);
void afisare_sir_numere(int *v, int n);

int main()
{
	int n;
	printf("\n\tIntroduceti numarul de numere: ");
	scanf("%d", &n);
	printf("\n\tCititi cele %d numere: ", n);
	int* v = citire_sir_numere(n);
	BubbleSort(v, n);
	printf("\n\tNumerele sortate crescator sunt: ");
	afisare_sir_numere(v, n);
	return 0;
}

int* citire_sir_numere(int n)
{
	int* v = (int*)malloc(n * sizeof(int));
	for (int i = 0; i < n; i++)
	{
		scanf("%d", v + i);
	}
	return v;
}

void afisare_sir_numere(int* v, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d ", *(v + i));
	}
}

int* BubbleSort(int* v, int n)
{
	clock_t inceput, sfarsit;
	double clickuri;
	time_t timp;

	inceput = clock();
	srand((unsigned)time(&timp));

	int aux, ok;
	do
	{
		ok = 1;
		for (int i = 0; i < n - 1; i++)
		{
			if (*(v + i) > *(v + i + 1))
			{
				aux = *(v + i);
				*(v + i) = *(v + i + 1);
				*(v + i + 1) = aux;
				ok = 0;
			}
		}
	} while (ok == 0);

	sfarsit = clock();
	clickuri = (double)(sfarsit - inceput);
	printf("\n\tGenerarea numerelor a durat %f secunde", clickuri / CLOCKS_PER_SEC);

	return v;
}