/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Se consideră recursivitatea (seria de medii arimetico-geometrice a lui Gauss):
an=(an-1+bn-1)/2 şi
bn=sqrt(an-1*bn-1), determinaţi an şi bn, pentru n, a0, b0 introduse de la tastatură.
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<math.h>

void seria_de_medii_aritmetico_geometrica_Gauss(double a, double b, int n);

int main()
{
	double a, b;
	int n;
	printf("\n\tCititi numerele n, a0 si b0: ");
	scanf("%d%lf%lf", &n, &a, &b);
	seria_de_medii_aritmetico_geometrica_Gauss(a, b, n);
}

void seria_de_medii_aritmetico_geometrica_Gauss(double a, double b, int n)
{
	if (n > 1)
	{
		a = (double)(a + b) / 2;
		b = sqrt(a * b);
		seria_de_medii_aritmetico_geometrica_Gauss(a, b, n - 1);
	}
	else
	{
		printf("\n\tCele doua numere sunt: an = %lf si bn = %lf", a, b);
	}
}