/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Fie un sistem de calcul care urmăreşte controlul unui proces de transmisie a datelor pe o linie principală având
un debit maxim de 40MB/s. Fluxul de date de pe această linie este împărţit de către maxim 10 utilizatori,
traficul pe liniile oferite lor putându-se efectua cu debite între 2 şi 40 MB/s (valori intregi). Impărţirea
debitelor pe cele maxim 10 linii se face în mod dinamic de către sistemul de control considerând pentru fiecare
linie i, o pondere subunitară pi, asociată la configurarea sistemului funcţie de utilizator. Introduceţi iniţial cele
maxim 10 ponderi pi astfel încât suma lor să fie egală cu 1. Dacă această condiţie este verificată generaţi toate
soluţiile posibile considerând că pe linia principală vom avea cel puţin un debit de 2MB/s, deci de 2...40MB/s
determinând în aceste cazuri debitele posibile pe cele maxim 10 linii de intrare ale utilizatorilor (ajustate la
intregi MB/s). Se pune pe 0, dacă nu se poate asigura minimul de 2MB/s. Afişaţi aceste soluţii. Implementarea
poate fi recursivă sau nerecursivă.
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

float* p = (float*)malloc(10 * sizeof(float));
float* x = (float*)malloc(10 * sizeof(float));
int n;

void back_LiniiRetea(int, float*);
int posibil(int, float&, float*);
void afis_sol(int, float*);

int main()
{
	printf("\n\tCititi numarul de utilizatori de retea: ");
	scanf("%d", &n);
	float sumap = 0;
	printf("\n\tCititi cele %d ponderi subunitare: ", n);
	for (int i = 0; i < n; i++)
	{
		scanf("%f", p + i);
		sumap += *(p + i);
	}
	if (sumap == 1) //suma ponderilor este valida
	{
		back_LiniiRetea(0, p);
	}
	return 0;
}

void back_LiniiRetea(int k, float *p)
{
	float suma;
	x[k] = 0;
	while (x[k] < 4)
	{
		x[k]++;
		if (posibil(k, suma, p))
		{
			if (suma == 40)
			{
				afis_sol(k, p);
			}
			else
			{
				back_LiniiRetea(k + 1, p);
			}
		}
	}
}

int posibil(int k, float& s, float *p)
{
	s = 0;
	if (k == 0)
	{
		return 1;
	}
	for (int i = 0; i <= k; i++)
	{
		s = s + p[i] * x[i] * 40;
	}
	if (s <= 40)
	{
		return 1;
	}
	return 0;
}

void afis_sol(int k, float* p)
{
	printf("\n\t");
	for (int i = 0; i <= k; i++)
	{
		printf("%f ", x[i] * p[i] * 40);
	}
}
