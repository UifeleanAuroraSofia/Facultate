/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Definiţi o funcţie macro MAX care determină şi afişează maximul dintre 2 si alta, dintre 3 numere introduse de
la tastatură. Folositi variante diferite (operator conditional, respectiv instructiune if)
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#define MAX2(a,b) ((a)>(b)?(a):(b))
#define MAX3(a,b,c) {if(a>b)\
							if (c>a) a=c;\
							else a=a;\
					 else if (c>b) a=c;\
						  else a=b;\
					}

int main()
{
	int a, b, c;
	printf("\n\tIntroduceti 2 numere naturale: ");
	scanf("%d%d", &a, &b);
	printf("\n\tMaximul celor doua numere este: %d", MAX2(a, b));
	printf("\n\tMai introduceti un numar natural: ");
	scanf("%d", &c);
	MAX3(a,b,c);
	printf("\n\tMaximul celor trei numere este: %d", a);
	return 0;
}