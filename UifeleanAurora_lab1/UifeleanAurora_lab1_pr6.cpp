/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Determinaţi minimul dintr-un tablou unidimensional de 10 numere flotante (introduse de la
tastatură/iniţializate) folosind funcţii cu un număr variabil de parametri. Se vor considera primele 7 valori din
şir, apoi următoarele 3, după care se afişează minimul din cele 10 folosind valorile determinate anterior.
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdarg.h>
#include<malloc.h>

double minim(int n, ...);

int main()
{
	double *v;
	v = (double*)malloc(10 * sizeof(double));
	printf("\n\tCititi cele 10 numere reale: ");
	for (int i = 0; i < 10; i++)
	{
		scanf("%lf", (v + i)); // ex. 6 9 5 12 54 2 5 6 3 4
	}
	double mini1 = minim(7, *(v + 0), *(v + 1), *(v + 2), *(v + 3), *(v + 4), *(v + 5), *(v + 6));
	double mini2 = minim(3, *(v + 7), *(v + 8), *(v + 9));
	printf("\n\tMinimul celor 10 numere reale este: %lf", minim(2, mini1, mini2));
	return 0;
}

double minim(int n, ...)
{
	va_list v;
	va_start(v, n);
	double mini = va_arg(v, double), nr;
	//printf("\n%f\n", mini);
	for (int i = 0; i < n - 1; i++)
	{
		if ((nr = va_arg(v, double)) < mini)
		{
			mini = nr;
		}
	}
	va_end(v);
	return mini;
}