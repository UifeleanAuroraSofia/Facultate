/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Citiţi un şir de caractere de la tastatură, caracter cu caracter, cu ajutorul unei funcţi bazate pe
caracter. Afişaţi şirul în ordine inversă folosind o funcţie recursivă.
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<malloc.h>
#include<string.h>

char* citire(char c);
void afisare_recursiva(char* s);

int main()
{
	char c = 'a', *s = NULL;
	s = (char*)malloc(256 * sizeof(char));
	printf("\n\tCitit un sir de caractere caracter cu caracter: ");
	s = citire(c);
	printf("\n\tSirul citit in ordine inversa este: ");
	afisare_recursiva(s);
	return 0;
}

char* citire(char c)
{
	char* s = (char*)malloc(256 * sizeof(char));
	int i = 0;
	do
	{
		scanf("%c", &c);
		if (c != '\n')
		{
			*(s + i) = c;
		}
		i++;
	} while (c != '\n');
	*(s + i  - 1) = '\0';
	return s;
}

void afisare_recursiva(char* s)
{
	//printf("\n%s\n", s);
	if (strlen(s) == 0)
	{
		printf("\0");
	}
	else
	{
		printf("%c", *(s + strlen(s) - 1));
		*(s + strlen(s) - 1) = '\0';
		afisare_recursiva(s);
	}
}