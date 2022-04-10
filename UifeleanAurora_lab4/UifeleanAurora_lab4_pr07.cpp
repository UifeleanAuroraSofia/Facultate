/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Să se scrie un program care permite sortarea unui stoc de calculatoare. Acestea să se reprezinte în program ca
o structură formată din caracteristicile calculatoarelor (nume (sir caractere), tip de procesor (sir caractere),
frecventa de tact (long int), dimensiunea memoriei RAM (int), preț (float). Sortarea se va face, la alegerea
utilizatorului, după: pret, memorie, tact sau tip de procesor. Folosiți, de preferință, funcția de bibliotecă pentru
sortări qsort( ) sau o altă metodă la alegere. Sortați apoi considerând un câmp sir de caractere si unul numeric.
Afișați rezultatele.
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

struct Calculator
{
	char nume[20];
	char procesor[20];
	long int frecventa_de_tact;
	int memorie_ram;
	float pret;
	void citire(Calculator *p);
	void afisare(Calculator* p);
};

Calculator* citire_calculatoare(int n); //functie de citire a n calculatoare, creare de pointer spre sir de structuri, alocat dinamic
void afisare_calculatoare(Calculator* calculatoare, int n); //functie de afisare a n calculatoare

int cmp_pret(const void* a, const void* b); //functie de comparare a calculatoarelor dupa pret
int cmp_memorie(const void* a, const void* b); //functie de comparare a calculatoarelor dupa memorie
int cmp_frecventa_de_tact(const void* a, const void* b); //functie de comparare a calculatoarelor dupa frecventa de tact
int cmp_procesor(const void* a, const void* b); //functie de comparare a calculatoarelor dupa procesor
int cmp_procesor_pret(const void* a, const void* b); //functie de comparare a calculatoarelor dupa procesor si dupa pret

int main()
{
	int n, met_comp;
	do
	{
		printf("\n\tCititi numarul de calculatoare: ");
		scanf("%d", &n);
		if (n <= 1)
		{
			printf("\tDate invalide!");
		}
	} while (!(n > 1));
	Calculator* calculatoare = citire_calculatoare(n);

	printf("\n\t1: Sortare dupa pret");
	printf("\n\t2: Sortare dupa memorie RAM");
	printf("\n\t3: Sortare dupa frecventa");
	printf("\n\t4: Sortare dupa procesor");
	printf("\n\tCititi un numar de la 1 la 4 care reprezinta o metoda de sortare: ");
	do 
	{
		scanf("%d", &met_comp);
		if (met_comp < 1 || met_comp > 4)
		{
			printf("\tDate invalide! Mai incearca: ");
		}
	} while (!(met_comp >= 1 && met_comp <= 4));

	switch (met_comp)
	{
		case 1:
			qsort(calculatoare, n, sizeof(Calculator), cmp_pret);
			printf("\n\tSortarea calculatoarelor crescator dupa pret");
			break;
		case 2:
			qsort(calculatoare, n, sizeof(Calculator), cmp_memorie);
			printf("\n\tSortarea calculatoarelor crescator dupa memorie");
			break;
		case 3:
			qsort(calculatoare, n, sizeof(Calculator), cmp_frecventa_de_tact);
			printf("\n\tSortarea calculatoarelor crescator dupa frecventa de tact");
			break;
		case 4:
			qsort(calculatoare, n, sizeof(Calculator), cmp_procesor);
			printf("\n\tSortarea calculatoarelor lexicografic dupa procesor");
			break;
	}
	afisare_calculatoare(calculatoare, n);

	qsort(calculatoare, n, sizeof(Calculator), cmp_procesor_pret);
	printf("\n\tSortarea calculatoarelor lexicografic dupa procesor si crescator dupa pret");
	afisare_calculatoare(calculatoare, n);

	return 0;
}

void citire(Calculator* p)
{
	printf("\tNume calculator: ");
	scanf("%s", p->nume);
	printf("\tProcesor: ");
	scanf("%s", p->procesor);
	printf("\tFrecventa de tact: ");
	scanf("%ld", &p->frecventa_de_tact);
	printf("\tMemorie RAM: ");
	scanf("%d", &p->memorie_ram);
	printf("\tPret: ");
	scanf("%f", &p->pret);
}
void afisare(Calculator* p)
{
	printf("\n\tNume calculator: %s", p->nume);
	printf("\n\tProcesor: %s", p->procesor);
	printf("\n\tFrecventa de tact: %ld", p->frecventa_de_tact);
	printf("\n\tMemorie RAM: %d", p->memorie_ram);
	printf("\n\tPret: %f", p->pret);
}

Calculator* citire_calculatoare(int n)
{
	Calculator* calculatoare = (Calculator*)malloc(n * sizeof(Calculator));
	for (int i = 0; i < n; i++)
	{
		printf("\n\tCalculatorul nr.%d\n", i);
		citire(calculatoare + i);
	}
	return calculatoare;
}

void afisare_calculatoare(Calculator* calculatoare, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("\n\tCalculatorul nr.%d", i);
		afisare(calculatoare + i);
	}
}

int cmp_pret(const void* a, const void* b)
{
	Calculator* pa = (Calculator*)a;
	Calculator* pb = (Calculator*)b;
	if (pa->pret < pb->pret)
	{
		return (pb->pret - pa->pret);
	}
}

int cmp_memorie(const void* a, const void* b)
{
	Calculator* pa = (Calculator*)a;
	Calculator* pb = (Calculator*)b;
	if (pa->memorie_ram < pb->memorie_ram)
	{
		return (pb->memorie_ram - pa->memorie_ram);
	}
}

int cmp_frecventa_de_tact(const void* a, const void* b)
{
	Calculator* pa = (Calculator*)a;
	Calculator* pb = (Calculator*)b;
	if (pa->frecventa_de_tact < pb->frecventa_de_tact)
	{
		return 1;
	}
	else
	{
		return -1;
	}
}

int cmp_procesor(const void* a, const void* b)
{
	Calculator* pa = (Calculator*)a;
	Calculator* pb = (Calculator*)b;
	if (pa->procesor < pb->procesor)
	{
		return (pb->procesor - pa->procesor);
	}
}

int cmp_procesor_pret(const void* a, const void* b)
{
	Calculator* pa = (Calculator*)a;
	Calculator* pb = (Calculator*)b;
	if (pa->procesor == pb->procesor)
	{
		if (pa->pret < pb->pret)
		{
			return 1;
		}
		else
		{
			return -1;
		}
	}
}