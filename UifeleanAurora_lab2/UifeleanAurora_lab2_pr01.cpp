/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Construiţi o funcţie recursivă care calculează aranjamente de n luate cate k.
Verificati rezultatul folosind si metoda bazata pe factorial.
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int aranjamente(int n, int k);

int main()
{
	int n, k;
	printf("\n\tIntroduceti n si k pentru aranjamente de n luate cate k: ");
	scanf("%d%d", &n, &k);
	printf("\n\tRezultatul aranjamente de n luate cate k este: %d", aranjamente(n, k));
	return 0;
}

int aranjamente(int n, int k)
{
	if (k == 1)
		return n;
	else return n * aranjamente(n - 1, k - 1);
}