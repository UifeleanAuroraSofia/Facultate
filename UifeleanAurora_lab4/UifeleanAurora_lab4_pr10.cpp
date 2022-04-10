/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Generati printr-un mecanism aleatoriu un tablou de maxim 200 de valori reale (prin doua tablouri de aceiaşi
dimensiune, primul fiind partea intreaga (nu mai mare de 100), al doilea partea fractionara (limitata la 20 ca
intreg ce devine .20 fractionar), tabloul real fiind obtinut prin combinarea partii intregi şi fractionare. Afişati
tablourile generate, cel real obtinut.
Sortati folosind functia qsort( ) tabloul real si afisati rezultatul obtinut.
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<time.h>
#include<stdlib.h>

float* generare_tablou_unidimensional(int n);
void afisare_intregi(int* tab, int n);
void afisare_reale(float* tab, int n);
int cmp(const void *a, const void *b);

int main()
{
	int n;
	do
	{
		printf("\n\tIntroduceti un numar natural mai mic decat 200: ");
		scanf("%d", &n);
		if (!(n >= 1 && n <= 200))
		{
			printf("\n\tDate invalide! Incercati din nou!");
		}
	} while (!(n >= 1 && n <= 200));

	float* tab = generare_tablou_unidimensional(n);
	qsort(tab, n, sizeof(float), cmp);
	printf("\n\tTabloul ordonat crescator cu metoda qsort: ");
	afisare_reale(tab, n);

	return 0;
}

float* generare_tablou_unidimensional(int n)
{
	float* tab = (float*)malloc(n * sizeof(float));
	int* intregi = (int*)malloc(n * sizeof(int));
	float* fractionale = (float*)malloc(n * sizeof(float));

	time_t timp;
	srand((unsigned)time(&timp));

	for (int i = 0; i < n; i++)
	{
		*(intregi + i) = rand() % 101;
	}
	printf("\n\tTabloul format din intregi este: ");
	afisare_intregi(intregi, n);

	for (int i = 0; i < n; i++)
	{
		*(fractionale + i) = (float)((rand() % 21))/100;
	}
	printf("\n\tTaboul format din parti fractionale este: ");
	afisare_reale(fractionale, n);

	for (int i = 0; i < n; i++)
	{
		*(tab + i) = (float)(*(intregi + i) + *(fractionale + i));
	}
	printf("\n\tTabloul format din partile intregi si cele reale: ");
	afisare_reale(tab, n);

	return tab;
}

void afisare_intregi(int* tab, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d ", *(tab + i));
	}
}

void afisare_reale(float* tab, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%f ", *(tab + i));
	}
}

int cmp(const void *a, const void *b)
{
	return (*(float*)a - *(float*)b);
}