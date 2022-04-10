/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Completati codul problemei date ca exemplu (2) cu alte metode de sortare (sortarea prin selectie, sortarea
shell, etc.). Cititi de la tastatura numarul de elemente al sirurilor de valori si apoi trimiteţi-l ca parametru la
fiecare functie. Comparati timpii de lucru ai fiecarui algoritm folosind tablouri cu dimensiune mare. Comentati
in acest caz partea de afisare. Introduceti un timer (1-5 sec.) intre sortari in main().
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<iostream>
#include<Windows.h>

using namespace std;

int* generare_tablou_unidimensional(int n); //functie de creare al unui tablou undimensional (alocat dinamic)
//numnere intregi aleatoare

//functii pentru implementarea algoritmului de sortare MERGE SORT
void interclas(int* a, int i, int m, int j);
void divimp(int* a, int i, int j);

void selectia_min(int* a, int n); //functie de sortare prin selectia minimului

#define DIM 100000

int main()
{
	int n;
	printf("\n\tIntroduceti numarul de elemente ale tabloului: ");
	scanf("%d", &n);

	clock_t inceput, sfarsit;
	double diferenta;
	time_t timp;

	int* a = generare_tablou_unidimensional(n);
	inceput = clock();
	srand((unsigned)time(0));
	divimp(a, 0, n - 1);
	sfarsit = clock();
	diferenta = (double)(sfarsit - inceput);
	cout << "\n\tSortarea numerelor cu metoda MERGE SORT a durat " << (double)diferenta / CLOCKS_PER_SEC << " secunde";

	cout << "\n\n\tPauza publicitara 5 secunde :)\n";
	Sleep(5000);

	int* b = generare_tablou_unidimensional(n);
	inceput = clock();
	srand((unsigned)time(0));
	selectia_min(b, n);
	sfarsit = clock();
	diferenta = (double)(sfarsit - inceput);
	cout << "\n\tSortarea numerelor cu metoda SELECTIA MINIMULUI a durat " << (double)diferenta / CLOCKS_PER_SEC << " secunde";

	return 0;
}

int* generare_tablou_unidimensional(int n)
{
	int* a = (int*)malloc(n * sizeof(int));

	clock_t inceput, sfarsit;
	double diferenta;
	time_t timp;

	inceput = clock();
	srand((unsigned)time(&timp)); //srand((unsigned)time(0));

	for (int i = 0; i < n; i++)
	{
		*(a + i) = rand(); //generarea numerelor
	}

	sfarsit = clock();
	diferenta = (double)(sfarsit - inceput);
	cout << "\n\tGenerarea numerelor a durat " << (double)diferenta / CLOCKS_PER_SEC << " secunde";

	return a;
}

void interclas(int* a, int i, int m, int j)
{
	int* b = (int*)malloc(DIM * sizeof(int));
	int x = i; //index deplasare in primul subsir
	int k = 0;
	int y = m + 1; //index deplasare in al doilea subsir
	while (x <= m && y <= j)
	{
		if (*(a + x) < *(a + y))
		{
			b[k++] = a[x++];
		}
		else
		{
			b[k++] = a[y++];
		}
	}
	while (x <= m)
	{
		b[k++] = a[x++]; //restul elementelor din primul subsir
	}
	while (y <= j)
	{
		b[k++] = a[y++]; //restul elementelor din al doilea subsir
	}
	int t = i;
	for (k = 0; k < (j - i) + i; k++)
	{
		a[t++] = b[k]; //mut elementele sortate in sirul initial
	}
}

void divimp(int* a, int i, int j)
{
	if (i < j)
	{
		int m = (i + j) / 2;
		divimp(a, i, m); //pentru prima jumtatae a sirului
		divimp(a, m + 1, j); //pentru a doua jumatate a sirului
		interclas(a, i, m, j); //interclasarea celor doua subsiruri
	}
}

void selectia_min(int* a, int n)
{
	int i, j, pozmin, aux;
	for (int i = 0; i < n; i++) //numarul de parcurgeri
	{
		//se cauta cel mai mic numarul din sirul curent
		pozmin = i;
		for (int j = i + 1; j < n; j++)
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