/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Analog cu problema precedentă, dar se calculează produsul elementelor aflate pe poziţii
impare într-un tablou unidimensional, respectiv să se calculeze suma numerelor prime din
tablou.
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

FILE* creare_verificare_fisier();
int* citire(int n, FILE* f);
int produs_elemente_pozitii_impare(int* v, int n);
int prim(int n);
int suma_elemente_prime(int* v, int n);

int main()
{
	int n;
	FILE* f = creare_verificare_fisier();
	fscanf(f, "%d", &n);
	int* v = citire(n, f);
	printf("\n\tProdusul elementelor de pe pozitii impare este: %d", produs_elemente_pozitii_impare(v, n));
	printf("\n\tSuma elementelor prime din tablou este: %d", suma_elemente_prime(v, n));
	return 0;
}

FILE* creare_verificare_fisier()
{
	FILE* f;
	char numefis[] = "fisier8.txt";
	errno_t eroare;
	eroare = fopen_s(&f, numefis, "r+");
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

int* citire(int n, FILE* f)
{
	int* v = (int*)malloc(n * sizeof(int));
	for (int i = 0; i < n; i++)
	{
		fscanf(f, "%d", (v + i));
	}
	return v;
}

int produs_elemente_pozitii_impare(int* v, int n)
{
	if (n == 0)
	{
		return 1;
	}
	else
	{
		if ((n - 1) % 2 != 0)
		{
			return *(v + n - 1) * produs_elemente_pozitii_impare(v, n - 1);
		}
		else
		{
			return produs_elemente_pozitii_impare(v, n - 1);
		}
	}
}

int prim(int n)
{
	if (n < 2)
	{
		return 0;
	}
	else if (n != 2 && n % 2 == 0)
	{
		return 0;
	}
	else for (int i = 3; i * i < n; i = i + 2)
	{
		if (n % i == 0)
		{
			return 0;
		}
	}
	return 1;
}

int suma_elemente_prime(int* v, int n)
{
	if (n == 0)
	{
		return 0;
	}
	else
	{
		if (prim(*(v + n - 1)) == 1)
		{
			return *(v + n - 1) + suma_elemente_prime(v, n - 1);
		}
		else
		{
			return suma_elemente_prime(v, n - 1);
		}
	}
}