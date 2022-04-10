/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Calculul celui mai mare divizor comun a două numere folosind o funcţie recursivă.
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int cmmdc(int a, int b);

int main()
{
	int a, b;
	printf("\n\tIntroduceti doua numere naturale: ");
	scanf("%d%d", &a, &b);
	printf("\n\tCel mai mare divizor comun dintre numere %d si %d este: %d", a, b, cmmdc(a, b));
	return 0;
}

int cmmdc(int a, int b)
{
	if (a == b)
		return a;
	else if (a > b)
		return cmmdc(a - b, b);
	else
		return cmmdc(a, b - a);
}