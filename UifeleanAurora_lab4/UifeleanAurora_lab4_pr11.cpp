/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Alocati in mod dinamic un tablou de n numere intregi, care vor fi citite si afisate. Cititi o valoare cheie de la
intrarea standard. Folosind functia _lfind( ) cautati si afisati toate pozitiile in care aceasta cheie se gaseste in
tabloul citit. Tratati cazul in care sunt valori multiple, sau valoarea nu e in tablou. Folosind functia qsort( )
sortati apoi acest tablou, pe care il afisati. Cautati folosind functia bsearch() aceiasi valoare in tabloul sortat si
afisati pozitia ei.
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

int* citire_tablou_unidimensional(int n);
void afisare_tablou_unidimensional(int* tab, int n);
int cmp_lfind(int* a, int* b);
int cmp_qsort(const void* a, const void* b);

int main()
{
	int n, nr, poz, *adr;
	do
	{
		printf("\n\tIntroduceti un numar natural: ");
		scanf("%d", &n);
		if (!(n > 1))
		{
			printf("\n\tDate invalide!");
		}
	} while (!(n > 1));

	printf("\n\tIntroduceti cele %d elemente: ", n);
	int* tab = citire_tablou_unidimensional(n);
	printf("\n\tElementele tabloului sunt: ");
	afisare_tablou_unidimensional(tab, n);

	printf("\n\tCititi un numar: ");
	scanf("%d", &nr);
	adr = (int*)_lfind(&nr, tab, (unsigned*)&n, sizeof(int), (int(*)(const void*, const void*))cmp_lfind);
	if (adr == 0)
	{
		printf("\n\tNU s-a gasit valoarea %d in tablou.", nr);
	}
	while (adr != 0)
	{
		printf("\tNumarul %d este pe poziztia %lld la adresa %p\n", nr, adr - tab + 1, adr);
		adr = (int*)_lfind(&nr, tab + (int)(adr - tab + 1), (unsigned*)&n, sizeof(int), (int(*)(const void*, const void*))cmp_lfind);
	}

	qsort(tab, n, sizeof(int), cmp_qsort);
	printf("\n\n\tTabloul sortat cu ajutorul metodei QSORT este: ");
	afisare_tablou_unidimensional(tab, n);
	printf("\n");

	adr = (int*)bsearch(&nr, tab, n, sizeof(int), (int(*)(const void*, const void*))cmp_lfind);
	if (adr == 0)
	{
		printf("\n\tNU s-a gasit valoarea %d in tablou.", nr);
	}
	while (adr != 0)
	{
		printf("\tNumarul %d este pe poziztia %lld la adresa %p\n", nr, adr - tab + 1, adr);
		adr = (int*)_lfind(&nr, tab + (int)(adr - tab + 1), (unsigned*)&n, sizeof(int), (int(*)(const void*, const void*))cmp_lfind);
	}

	return 0;
}

int* citire_tablou_unidimensional(int n)
{
	int* tab = (int*)malloc(n * sizeof(int));
	for (int i = 0; i < n; i++)
	{
		scanf("%d", (tab + i));
	}
	return tab;
}

void afisare_tablou_unidimensional(int* tab, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d ", *(tab + i));
	}
}

int cmp_lfind(int* a, int* b)
{
	return (*a - *b);
}

int cmp_qsort(const void* a, const void* b)
{
	return (*(int*)a - *(int*)b);
}