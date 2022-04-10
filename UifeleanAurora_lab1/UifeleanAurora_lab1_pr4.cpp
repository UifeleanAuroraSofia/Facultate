/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Consideraţi o funcţie cu 3 parametrii toţi impliciţi (int, float, double) care returnează produsul acestor valori.
Apelaţi funcţia considerând mai multe variante de apel concrete (fără parametri, 1 parametru, 2 parametri, 3
parametri).
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

double produs(int a = 2, float b = 2.5f, double c = 5.55);

int main()
{
	int a = 1;
	float b = 1.5;
	double c = 2.5;
	printf("\n\tFunctia produs fara parametri: %lf", produs());
	printf("\n\tFunctia produs cu un parametru: %lf", produs(a));
	printf("\n\tFunctia produs cu doi parametri: %lf", produs(a, b));
	printf("\n\tFunctia produs cu trei parametri: %lf", produs(a, b, c));
	return 0;
}

double produs( int a, float b, double c)
{
	return a * b * c;
}