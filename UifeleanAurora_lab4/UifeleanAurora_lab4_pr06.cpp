/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Cititi de la tastatura m elemente de tip intreg intr-un tablou unidimensional si o valoare intreaga n<m. Impartiti
tabloul citit in doua sub-tablori astfel:
a) primul subtablou va contine primele n elemente din tabloul initial
b) al doilea subtablou va contine restul elementelor din tablul initial.
Sa se realizeze urmatoarele operatii:
 1. sa se ordoneze crescator cele doua subtablouri
 2. sa se sorteze tabloul initial, prin interclasarea celor doua subtablori ordonate. (merge-sort)
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<iostream>

using namespace std;

int* citire_tablou_unidimensional(int m);
void afisare_tablou_unidimensional(int* a, int p, int q);
void selectia_min(int* a, int p, int q);
int* interclasare(int* a, int m, int n);

int main()
{
	int n, m;
	printf("\n\tIntroduceti numarul de elemente ale tabloului: ");
	scanf("%d", &m);
	do
	{
		printf("\n\tIntroduceti un numar mai mic strict decat %d: ", m);
		scanf("%d", &n);
		if (n >= m)
		{
			printf("\n\tDate invalide!");
		}
	} while (!(n < m));
	printf("\n\tIntroduceti cele %d elemente: ", m);
	int* a = citire_tablou_unidimensional(m);

	selectia_min(a, 0, n);
	printf("\n\tTaboul sortat format din primele %d elemente este: ", n);
	afisare_tablou_unidimensional(a, 0, n);

	selectia_min(a, n, m);
	printf("\n\tTabloul sortat format din restul de %d elemente este: ", m - n);
	afisare_tablou_unidimensional(a, n, m);

	int *tab = interclasare(a, m, n);
	printf("\n\tTaboul initial sortat este: ");
	afisare_tablou_unidimensional(tab, 0, m);

	return 0;
}

int* citire_tablou_unidimensional(int m)
{
	int* a = (int*)malloc(m * sizeof(int));
	for (int i = 0; i < m; i++)
	{
		scanf("%d", (a + i));
	}
	return a;
}

void afisare_tablou_unidimensional(int* a, int p, int q)
{
	for (int i = p; i < q; i++)
	{
		printf("%d ", *(a + i));
	}
}

void selectia_min(int* a, int p, int q)
{
	int i, j, pozmin, aux;
	for (int i = p; i < q; i++)
	{
		pozmin = i;
		for (int j = i + 1; j < q; j++)
		{
			if (*(a + pozmin) > *(a + j))
			{
				pozmin = j;
			}
		}
		//interschimbare cu elementul de pe prima pozitie
		aux = *(a + pozmin);
		*(a + pozmin) = *(a + i);
		*(a + i) = aux;
	}
}

int* interclasare(int* a, int m, int n)
{
	int* tab = (int*)malloc(m * sizeof(int)), i = 0, j = n, k = 0;
	while (i < n && j < m)
	{
		if (*(a + i) < *(a + j))
		{
			tab[k++] = a[i++];
		}
		else
		{
			tab[k++] = a[j++];
		}
	}
	while (i < n)
	{
		tab[k++] = a[i++];
	}
	while (j < m)
	{
		tab[k++] = a[j++];
	}
	return tab;
}