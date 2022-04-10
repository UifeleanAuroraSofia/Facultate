/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Considerați un tablou unidimensional de n (<=30) de valori întregi. Determinați în mod
recursiv și nerecursiv numărul de apariții în tablou ale unei valori întregi x cititite de la
tastatură.
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

int* citire(int n);
int cautare_iterativa(int* v, int n, int x);
int cautare_recursiva(int* v, int n, int x);

int main()
{
	int n, x;
	do
	{
		printf("\n\tCititi numarul de elemente ale tabloului (n<=30): ");
		scanf("%d", &n);
		if (n > 30)
		{
			printf("\n\tNumarul este prea mare!");
		}
	} while (!(n <= 30));
	printf("\n\tCititi cele %d numere: ", n);
	int* v = citire(n);
	printf("\n\tCititi un numar: ");
	scanf("%d", &x);
	printf("\n\tNumarul de aparitii a lui %d in sir este: %d. (iterativ)", x, cautare_iterativa(v, n, x));
	printf("\n\tNumarul de aparitii a lui %d in sir este: %d. (recursiv)", x, cautare_recursiva(v, n, x));
	return 0;
}

int* citire(int n)
{
	int* v = (int*)malloc(n * sizeof(int));
	for (int i = 0; i < n; i++)
	{
		scanf("%d", (v + i));
	}
	return v;
}

int cautare_iterativa(int* v, int n, int x)
{
	static int k;
	for (int i = 0; i < n; i++)
	{
		if (*(v + i) == x)
		{
			k++;
		}
	}
	return k;
}

int cautare_recursiva(int* v, int n, int x)
{
	if (n == 0)
	{
		return 0;
	}
	else
	{
		if (*(v + n - 1) == x)
		{
			return 1 + cautare_recursiva(v, n - 1, x);
		}
		else
		{
			return cautare_recursiva(v, n - 1, x);
		}
	}
}