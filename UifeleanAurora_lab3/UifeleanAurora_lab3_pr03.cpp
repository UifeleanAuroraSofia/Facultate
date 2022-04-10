/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
* Considerand exemplul legat de problema comis voiajorului, rezolvati aceasta problema considerand cazul in
care matricea de costuri nu este una simetrica fata de diagonala principala si costurile de deplasare in acelas
oras pot fi diferite de zero (caz oferte de preturi).
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

#define MAX 7

int x[MAX], y[MAX];//x solution components, result y
int cost[MAX][MAX];//cost matrix
void cit(int[][MAX], int);// read cost matrix
void afis(int[][MAX], int);//display cost matrix
int max_cost(int[][MAX], int);//det. max cost
void afis_sol(long, int);//display optimum solution
int posibil(int);// to have a direct route between cities and cities not previously chosen

int main() {
	int k, n;
	long cost_M, n_C;
	printf("Enter dim of cost matrix(no. of cities) <=%d\n", MAX);
	scanf("%d", &n);
	printf("Enter and display the cost matrix\n");
	cit(cost, n);
	afis(cost, n);
	cost_M = n * (long)max_cost(cost, n) + 1;//initial max cost
	printf("initial max cost is= %ld\n", cost_M);
	k = 0;//first component
	printf("Enter initial city (0, ..., %d)", n - 1);
	scanf("%d", &x[k]);
	k = 1;//next component
	x[k] = -1;//possible values from 0 and therefore the first value below the possible one
	do {
		while (x[k] < n) // there are still possible values for component k
		{
			x[k]++; //pass on to the next value
			if (posibil(k)) if ((k == (n - 1)) && (cost[x[n - 1]][x[0]] != 0)) {
				// that is, he reached the city n-1 and can return from where he left
				n_C = 0;//new cost
				for (int i = 0; i < n - 1; i++)n_C += cost[x[i]][x[i + 1]];
				n_C += cost[x[n - 1]][x[0]];//total cost total including return
				if (n_C < cost_M)for (int i = 0; i < n; i++) { y[i] = x[i]; cost_M = n_C; }
				//save new obtained solution , change cost_M
			}
			else { k++; x[k] = -1; } // pass on to the next component
		}//while
		k--; // there are no more values for component k. Return the k-1 component
	} while (!(k < 1));//I returned more than I could, or k> = 1
	afis_sol(cost_M, n); //ready solution
}//main
int posibil(int k)
{
	if (k == 0)return 1;
	if (cost[x[k - 1]][x[k]] != 0) {//direct road
		for (int i = 0; i < k; i++)// the city was no longer chosen
			if (x[k] == x[i]) return 0;
		return 1;
	}
	return 0;
}//posibil
void afis_sol(long fc, int n)
{
	for (int i = 0; i < n; i++) //display the current solution and cost
		printf("%d ", y[i]);
	printf("\nThe cost is: %ld", fc);
}//afis_sol
void cit(int mat[][MAX], int n) {
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			scanf("%d", &mat[i][j]);
		}
	}
}//cit
void afis(int mat[][MAX], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			printf("%4d ", mat[i][j]);
		printf("\n");
	}
}//afis
int max_cost(int mat[][MAX], int n)
{
	int max = mat[0][0];
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			if (mat[i][j] > max)max = mat[i][j];
	return max;
}//max_cost