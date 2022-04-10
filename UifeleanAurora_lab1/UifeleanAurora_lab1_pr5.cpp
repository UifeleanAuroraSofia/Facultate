/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Folosind supraîncărcarea funcţiilor definiţi trei funcţii cu acelaşi nume dar cu tipuri diferite de parametri (int,
int *, int&) care returnează radicalul unei valori intregi. Analizaţi cazul transmiterii parametrilor prin valoare şi
prin referinţă.
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<math.h>

double radical(int n);
double radical(int *n);
double radical(int& n, int a);

int main()
{
	int n, a = 0;
	printf("\n\tIntroduceti o valoare intreaga de la tastatura: ");
	scanf("%d", &n);
	printf("\n\tRadicalul valorii %d transmis prin valoare: %.2lf", n, radical(n));
	printf("\n\tRadicalul valorii %d transmis prin adresa (folosind pointer): %.2lf", n, radical(&n));
	printf("\n\tRadicalul valorii %d transmis prin referinta: %.2lf", n, radical(n, a));
	return 0;
}

double radical(int n)
{
	return sqrt(n);
}

double radical(int* n)
{
	return (sqrt(*n));
}

double radical(int& n, int a)
{
	return sqrt(n);
}