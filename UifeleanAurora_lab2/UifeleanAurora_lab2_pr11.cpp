/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Considerați un număr n întreg pozitiv în baza 10 introdus de la tastatură. Folosind o funcție
recursivă convertiți valoarea n într-o altă bază de numerație 1<b<10 citită de la tastatură.
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int schimbare_baza(int n, int b);

int main()
{
	int n, b;
	printf("\n\tIntroduceti un numar: ");
	scanf("%d", &n);
	do
	{
		printf("\n\tIntroduceti baza in care vreti sa convertiti numarul (1<b<10): ");
		scanf("%d", &b);
		if (b <= 1 || b >= 10)
		{
			printf("\n\tAti introdus o baza invalida!");
		}
	} while (!(b > 1 && b < 10));
	printf("\n\tReprezentarea numarului %d in baza %d este: %d", n, b, schimbare_baza(n, b));
	return 0;
}

int schimbare_baza(int n, int b)
{
	if (n == 0)
	{
		return 0;
	}
	else
	{
		return (n % b) + schimbare_baza(n / b, b) * 10;
	}
}