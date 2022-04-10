/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Fie ecuația de gradul 2: x2 –sx +p=0. Fără a calcula rădăcinile x1 și x2 determinați, daca e
posibil, Sn = x1n + x2n, folosind reprezentarea recursivă a sumei: Sum(n) ={ 2, dacă n=0; s,
dacă n=1; s*Sum(n-1) – p*Sum(n-2), dacă n>1; } unde s și p sunt valori reale iar n întreagă,
introduse de la tastatură.
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

double sum(int n, double s, double p);

int main()
{
	int n;
	double s, p;
	printf("\n\tFie ecuatia de gradul 2: x la a doua -sx +p = 0.");
	printf("\n\tIntroduceti n, s si p in aceasta ordine: ");
	scanf("%d%lf%lf", &n, &s, &p);
	printf("\n\tRezultatul sumei Sn = x1 la n + x2 la n este: %lf", sum(n, s, p));
	return 0;
}

double sum(int n, double s, double p)
{
	if (n == 0)
	{
		return 2;
	}
	else if (n == 1)
	{
		return s;
	}
	else if (n > 1)
	{
		return s * sum(n - 1, s, p) - p * sum(n - 2, s, p);
	}
}