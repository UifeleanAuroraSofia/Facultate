/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Modificaţi programul care exemplifică metoda de sortare rapidă explicita (Quick-Sort) aşa încât să ordoneze
şirul iniţial în ordine descrescătoare.
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

int* quickSort(int*, int, int);
int* citire_sir_numere(int n);
void afisare_sir_numere(int* v, int n);

int main()
{
	int n;
	printf("\n\tIntroduceti numarul de numere: ");
	scanf("%d", &n);
	printf("\n\tCititi cele %d numere: ", n);
	int* v = citire_sir_numere(n);
	v = quickSort(v, 0, n - 1);
	printf("\n\tNumerele sortate crescator sunt: ");
	afisare_sir_numere(v, n);
	return 0;
}

int * quickSort(int* p, int prim, int ultim) {
	int i, j, pivot, temp;
	i = prim;
	j = ultim;
	pivot = p[ultim];
	do {
		while (p[i] < pivot)
			i++;
		while (p[j] > pivot)
			j--;
		if (i < j) {
			temp = p[i];
			p[i] = p[j];
			p[j] = temp;
		}
		if (i <= j) {
			j--;
			i++;
		}
	} while (i < j);
	return p;
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