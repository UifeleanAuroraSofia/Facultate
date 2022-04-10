/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Scrieţi un program care face o codare simplă prin adaugarea la codul ASCII al caracterului, o valoare n=3,
folosind macro funcții. Exemplu: ‘a’ devine în urma codării ‘d’.
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

#define transformare(a){a = a + 3;}

int main()
{
	char a;
	printf("\n\tCititi un caracter de la tastatura: ");
	scanf("%c", &a);
	transformare(a);
	printf("\n\tCodarea caracterului in ASCII: %c", a);
	return 0;
}