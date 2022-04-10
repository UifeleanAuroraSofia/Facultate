/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Generati in mod aleatoriu un tablou de maxim 200 valori intregi, valori nu mai mari de 100. Determinati si
afisati valoarea minima, mediana si maxima generata, sortand elementele printr-o metoda la alegere.
Determinati valoarea medie si comparati aceasta valoare cu cea mediana (afisati diferenta). Verificati daca
valoarea medie este in tabloul initial generat.
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int* generare_tablou_unidimensional();
int* BubbleSort(int* v, int& minim, int& maxim, float& mediana);
float media(int* tab);
int verificare_medie(int* tab, float medie);

int main()
{
	int minim, maxim, * tab = generare_tablou_unidimensional();
	float mediana = 0.0f, medie = 0.0f;
	for (int i = 0; i < 200; i++)
	{
		printf("%d ", *(tab + i));
	}
	tab = BubbleSort(tab, minim, maxim, mediana);
	printf("\n\tValoarea minima: %d", minim);
	printf("\n\tValoarea mediana: %f", mediana);
	printf("\n\tValoarea maxima: %d", maxim);
	medie = media(tab);
	printf("\n\tDiferenta dintre valoarea medie si cea mediana: %f", (float)(medie - mediana));
	if (verificare_medie(tab, medie))
	{
		printf("\n\tValoarea medie %f se regaseste in sirul initial", medie);
	}
	else
	{
		printf("\n\tValoarea medie NU se regaseste in sirul initial");
	}
	return 0;
}

int* generare_tablou_unidimensional()
{
	int* tab = (int*)malloc(200 * sizeof(int));

	time_t timp;
	srand((unsigned)time(&timp));

	for (int i = 0; i < 200; i++)
	{
		*(tab + i) = rand() % 101;
	}

	return tab;
}

float media(int* tab)
{
	float med = 0;
	for (int i = 0; i < 200; i++)
	{
		med += *(tab + i);
	}
	return (float)(med / 200);
}

int* BubbleSort(int* v, int& minim, int& maxim, float& mediana)
{
	int aux, ok = 1;
	minim = *(v + 0);
	maxim = *(v + 0);
	mediana = (float)((*(v + 99) + *(v + 100)) / 2);
	do
	{
		ok = 1;
		for (int i = 0; i < 200 - 1; i++)
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

	for (int i = 1; i < 200; i++)
	{
		if (*(v + i) < minim)
		{
			minim = *(v + i);
		}
		if (*(v + i) > maxim)
		{
			maxim = *(v + i);
		}
	}
	return v;
}

int verificare_medie(int* tab, float medie)
{
	for (int i = 0; i < 200; i++)
	{
		if (medie == *(tab + i))
		{
			return 1;
		}
	}
	return 0;
}