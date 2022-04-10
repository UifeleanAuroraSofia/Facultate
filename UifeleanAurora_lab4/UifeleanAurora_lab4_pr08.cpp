/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Preluați din două fișiere doua tablouri unidimensionale ce conțin valori reale. Generați un al treilea tablou care
să conțină toate valorile din cele doua tablouri și toate valorile obținute prin medierea valorilor de pe aceeași
poziție din cele doua tablouri inițiale. Dacă numărul de elemente ale tablourilor diferă, media se va face
considerând valoarea 0.0 pentru elementele lipsă. Ordonați al treilea tablou și numărați câte valori neunice sunt
în șir.
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<fstream>

FILE* creare_verificare_fisier(char nume_fis[20]);
float* citire_din_fisier(FILE* f, char nume_fis[20], int &n);
float* creare_al_treilea_tablou(float* a, float* b, int &n, int m);
void afisare_tablou_unidimensional(float* tab, int n);
void selectia_min(float* a, int p, int q);

int main()
{
	char nume_fis1[20], nume_fis2[20];
	int n = 0, m = 0;
	printf("\n\tIntroduceti numele primului fisier: ");
	scanf("%s", nume_fis1);
	printf("\n\tIntrofuceti numele celui de al doilea firier: ");
	scanf("%s", nume_fis2);
	FILE *f1 = creare_verificare_fisier(nume_fis1);
	FILE *f2 = creare_verificare_fisier(nume_fis2);
	float* a = citire_din_fisier(f1, nume_fis1, n), * b = citire_din_fisier(f2, nume_fis2, m);
	
	float* tab = creare_al_treilea_tablou(a, b, n, m);
	selectia_min(tab, 0, n);
	printf("\n\tSirul format din cele doua siruri este: ");
	afisare_tablou_unidimensional(tab, n);
	return 0;
}

FILE* creare_verificare_fisier(char nume_fis[20])
{
	FILE* f;
	errno_t eroare;
	eroare = fopen_s(&f, nume_fis, "r+");
	if (eroare != 0)
	{
		printf("\n\tEroare la deschiderea fisierului!");
		exit(1);
	}
	else
	{
		return f;
	}
}

float* citire_din_fisier(FILE* f, char nume_fis[20], int &n)
{
	fscanf(f, "%d", &n);
	float nr, * tab = (float*)malloc(n * sizeof(float));
	for (int i = 0; i < n; i++)
	{
		fscanf(f, "%f", (tab + i));
	}
	return tab;
}

float* creare_al_treilea_tablou(float* a, float* b, int &n, int m)
{
	int dif, min, max;
	if (n < m)
	{
		min = n;
		max = m;
	}
	else
	{
		min = m;
		max = n;
	}
	dif = max - min;
	float* tab = (float*)malloc((m + n + min + dif));
	for (int i = 0; i < n; i++)
	{
		*(tab + i) = *(a + i);
	}
	for (int i = n, j = 0; i < n + m; i++, j++)
	{
		*(tab + i) = *(b + j);
	}
	for (int i = n + m, j = 0; i < n + m + min; i++, j++)
	{
		*(tab + i) = (float)((*(a + j) + *(b + j)) / 2);
	}
	if (n == max)
	{
		for (int i = n + m + min, j = 0; i < n + m + min + dif; i++, j++)
		{
			*(tab + i) = (float) (*(a + j) / 2);
		}
	}
	else
	if (m == max)
	{
		for (int i = n + m + min, j = 0; i < n + m + min + dif; i++, j++)
		{
			*(tab + i) = (float)(*(b + j) / 2);
		}
	}
	n = n + m + min + dif;
	return tab;
}

void afisare_tablou_unidimensional(float* tab, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%.2f ", *(tab + i));
	}
}

void selectia_min(float* a, int p, int q)
{
	int i, j, pozmin;
	float aux;
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