/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Să se calculeze suma numerelor impare dintr-un tablou unidimensional de numere întregi în
mod recursiv, tablou citit dintr-un fişier unde, ca primă valoare, avem numărul de elemente ale
tabloului.
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

FILE* creare_verificare_fisier();
int* citire(int n, FILE *f);
int suma_numere_impare(int* v, int n);

int main()
{
	int n;
	FILE *f = creare_verificare_fisier();
	fscanf(f, "%d", &n);
	int *v = citire(n, f);
	printf("\n\tSuma numerelor impare din tablou este: %d", suma_numere_impare(v, n));
	return 0;
}

FILE* creare_verificare_fisier()
{
	FILE* f;
	char numefis[] = "fisier7.txt";
	errno_t eroare;
	eroare = fopen_s(&f, numefis, "r+");
	if (eroare != 0)
	{
		printf("\n\tEroare la crearea fisierului!");
		exit(1);
	}
	else
	{
		return f;
	}
}

int* citire(int n, FILE* f)
{
	int *v = (int*)malloc(n * sizeof(int));
	for (int i = 0; i < n; i++)
	{
		fscanf(f, "%d", (v + i));
	}
	return v;
}

int suma_numere_impare(int* v, int n)
{
	if (n == 0)
	{
		return 0;
	}
	else
	{
		if (*(v + n - 1) % 2 != 0)
		{
			return *(v + n - 1) + suma_numere_impare(v, n - 1);
		}
		else
		{
			return suma_numere_impare(v, n - 1);
		}
	}
}