/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Să se scrie un program care afişează numele programului, data şi ora compilării şi numărul de linii pe care îl
are acest program.
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void codare(char c, char masca[]);

#define codare(c, masca){char m;\
int nr = (int)c, s = 0;\
for (int i = 7; i >= 0; i--)\
{if (masca[i] == '1'){s = s + pow(2, 8 - i - 1);}}\
printf("\n\tCodarea este: %d", nr ^ s);}

int main()
{
	char c, masca[9];
	printf("\n\tCititi un caracter: ");
	scanf("%c", &c);
	printf("\n\tCititi masca: ");
	scanf("%s", masca);
	codare(c, masca);
	return 0;
}

/*void codare(char c, char masca[])
{
	char m;
	int nr = (int)c, s = 0;
	for (int i = 7; i >= 0; i--)
	{
		if (masca[i] == '1')
		{
			s = s + pow(2, 8 - i - 1);
		}
	}
	for (int i = 0; i < 8; i++)
	{

	}
	printf("\n\tCodarea este: %d", nr^s);
}*/