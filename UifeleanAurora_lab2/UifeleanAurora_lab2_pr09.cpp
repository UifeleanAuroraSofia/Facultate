/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Folosind o funcție recursivă, calculați suma valorilor introduse de la tastatură cu confirmare,
adică cereți utilizatorului să indice dacă mai dorește să mai introducă o nouă valoare sau nu.
Modificați funcția pentru a calcula și afișa, și media valorilor date de utilizator. Semnalați
printr-un mesaj când suma valorilor depășește o anumită valoare prestabilită.
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<iostream>

using namespace std;

#define DIM 50

int* citire(int &n);
int suma_elemente(int* v, int n);
double media_elementelor(int* v, int n);

int main()
{
	int n = 0, * v = citire(n);
	printf("\n\tSuma elementelor este: %d", suma_elemente(v, n));
	printf("\n\tMedia elementelor este: %.2lf", media_elementelor(v, n));
	return 0;
}

int* citire(int &i)
{
	int * v = (int*)malloc(DIM * sizeof(int));
	char c;
	do
	{
		printf("\tIntroduceti un numar: ");
		scanf("%d", (v + i));
		i++;
		printf("\tContinuati? (d/n): ");
		cin.get();
		scanf("%c", &c);
	} while (!(c == 'n'));
	return v;
}

int suma_elemente(int* v, int n)
{
	if (n == 0)
	{
		return 0;
	}
	else
	{
		return *(v + n - 1) + suma_elemente(v, n - 1);
	}
}

double media_elementelor(int* v, int n)
{
	static int k;
	if (n == 0)
	{
		return 0;
	}
	else
	{
		k++;
		return media_elementelor(v, n - 1) + (double)*(v + n - 1) / k;
	}
}