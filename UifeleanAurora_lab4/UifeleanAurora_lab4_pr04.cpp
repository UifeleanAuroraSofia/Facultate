/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Scrieţi o aplicaţie C/C++ in care plecând de la două tablouri (unidimensionale) de numere naturale să se obţină
un al treilea tablou care să conţină toate elementele tablourilor sursă fără a se repeta, aranjate în ordine
crescătoare
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int* BubbleSort(int* v, int n); //functie de sortare BubbleSort
int* citire_sir_numere(int n); //functie citire numere intregi cu alocare dinamica, returneaza un pointer
int* interclasare(int* a, int* b, int n, int m); //functie de interclasare
//creaza un sir de intregi prin alocare dinamica, sir format din ordonare crescatoare a doua siruri
//deja existente, sortate crescator anterior
void afisare(int* v, int n); //functie de afisare a unui tablou unidimensional

int main()
{
	int n, m;
	printf("\n\tCititi numarul de elemente a celor doua siruri: ");
	printf("\n\t\tNr elemente primul sir: ");
	scanf("%d", &n); //nr. elemente
	printf("\n\t\tNr elemente al doilea sir: ");
	scanf("%d", &m); //nr. elemente
	int* a = citire_sir_numere(n), * b = citire_sir_numere(m); //alocare dinamica siruri

	BubbleSort(a, n); //sortarea primului sir
	printf("\n\tPrimul sir ordonat crescator este: ");
	afisare(a, n);
	BubbleSort(b, m); //sortarea celui de al doilea sir
	printf("\n\tAl doilea sir ordonat crescator este: ");
	afisare(b, m);

	int *c = interclasare(a, b, n, m);
	printf("\n\tElementele celor doua tablouri sortate sunt: ");
	afisare(c, n + m);

	return 0;
}

int* citire_sir_numere(int n)
{
	printf("\n\tCititi cele %d elemente ale sirului: ", n);
	int* v = (int*)malloc(n * sizeof(int));
	for (int i = 0; i < n; i++)
	{
		scanf("%d", (v + i));
	}
	return v;
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
	printf("\n\tSortarea numerelor a durat %f secunde", clickuri / CLOCKS_PER_SEC);

	return v;
}

int* interclasare(int* a, int* b, int n, int m)
{
	int* c = (int*)malloc((n + m) * sizeof(int)), i = 0, j = 0, k = 0;
	while (i < n && j < m)
	{
		if (*(a + i) < *(b + j))
		{
			c[k++] = a[i++];
		}
		else
		{
			c[k++] = b[j++];
		}
	}
	while (i < n)
	{
		c[k++] = a[i++];
	}
	while (j < m)
	{
		c[k++] = b[j++];
	}
	return c;
}

void afisare(int* v, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d ", *(v + i));
	}
}