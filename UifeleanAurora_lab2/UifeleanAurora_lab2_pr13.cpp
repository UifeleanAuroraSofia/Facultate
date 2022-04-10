/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Scrieți un program care să calculeze în mod recursiv și în mod nerecursiv valoarea seriei
armonice sn=1/1+1/2+1/3+…1/n, unde n este un număr natural, cu două funcții diferite.
Apelați cele două funcții cu diferite valori ale lui n.
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

double seria_armonica_iterativ(int n);
double seria_armonica_recursiv(int n);

int main()
{
	int n;
	printf("\n\tIntroduceti un numar de la tastatura: ");
	scanf("%d", &n);
	printf("\n\tRezultatul seriei armonice este: %lf. (iterativ)", seria_armonica_iterativ(n));
	printf("\n\tIntroduceti un numar de la tastatura: ");
	scanf("%d", &n);
	printf("\n\tRezultatul seriei armonice este: %lf. (recursiv)", seria_armonica_recursiv(n));
	return 0;
}

double seria_armonica_iterativ(int n)
{
	double s = 0;
	for (int i = 1; i <= n; i++)
	{
		s += (double)1 / i;
	}
	return s;
}

double seria_armonica_recursiv(int n)
{
	if (n == 1)
	{
		return 1;
	}
	else
	{
		return (double)1 / n + seria_armonica_recursiv(n - 1);
	}
}