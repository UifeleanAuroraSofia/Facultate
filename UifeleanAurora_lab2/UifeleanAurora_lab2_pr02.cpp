/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Construiţi o funcţie recursivă care calculează combinari de n luate cate k.
Verificati rezultatul folosind si metoda bazata pe factorial.
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

float combinari(int n, int k);

int main()
{
	int n, k;
	printf("\n\tIntroduceti n si k pentru combinari de n luate cate k: ");
	scanf("%d%d", &n, &k);
	printf("\n\tRezultatul combinari de n luate cate k este: %f", combinari(n, k));
	return 0;
}

float combinari(int n, int k)
{
	if (n == 0 || k == 0 || n == k)
		return 1;
	else return (float)n / (n - k) * combinari(n - 1, k);
}