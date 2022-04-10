/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Determinaţi printr-o funcţie recursivă produsul scalar al doi vectori (tablouri unidimensionale
de aceiasi lungime).
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

void citire(int* v, int n);
int produs_scalar(int* s1, int* s2, int n);

int main()
{
	int n, * s1, * s2;
	printf("\n\tNumarul de elemente ale vectorilor: ");
	scanf("%d", &n);
	s1 = (int*)malloc(n * sizeof(int));
	s2 = (int*)malloc(n * sizeof(int));
	citire(s1, n);
	citire(s2, n);
	printf("\n\tProdusul scalar al celor doi vectori este: %d", produs_scalar(s1, s2, n));
	return 0;
}

void citire(int* v, int n)
{
	printf("\n\tCititi cele %d numere: ", n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", (v + i));
	}
}

int produs_scalar(int* s1, int* s2, int n)
{
	if (n == 0)
	{
		return 0;
	}
	else
	{
		return *(s1 + n - 1) * *(s2 + n - 1) + produs_scalar(s1, s2, n - 1);
	}
}