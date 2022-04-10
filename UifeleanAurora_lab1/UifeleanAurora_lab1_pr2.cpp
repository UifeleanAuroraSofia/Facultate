/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Definiţi o funcţie inline min( ) care determină şi afişează minimul dintre 2 si alta dintre 3 numere întregi
introduse de la tastatură. Considerati supraincarcarea functiilor.
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

inline int min2(int a, int b);
inline int min3(int a, int b, int c);

int main()
{
	int a, b, c;
	printf("\n\tIntroduceti 2 numere de la tastatura: ");
	scanf("%d%d", &a, &b);
	printf("\n\tCel mai mic numar este: %d", min2(a, b));
	printf("\n\tMai introduceti un numar: ");
	scanf("%d", &c);
	printf("\n\tCel mai mic numar dintre cele 3 numere este: %d", min3(a, b, c));
	return 0;
}

inline int min2(int a, int b)
{
	if (a > b) return b;
	return a;
}

inline int min3(int a, int b, int c)
{
	if (a > b)
		if (b > c) return c;
		else return b;
	else if (a > c) return c;
		 else return a;
}