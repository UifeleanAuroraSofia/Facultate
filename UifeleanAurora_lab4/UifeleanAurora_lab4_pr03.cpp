/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Folosiţi funcţiile de bibliotecă pentru sortări (qsort( )) pentru a aranja un tablou unidimensional de înregistrări
cu nume, prenume, cod numeric personal, data angajării după două câmpuri la alegere (un exemplu ar fi:
crescător după nume şi descrescător după data angajării).
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include "UifeleanAurora_lab4_pr03_Headerfile.h"

int main()
{
	int n = 0;
	printf("\n\tCititi un numar de studenti: ");
	scanf("%d", &n);
	Student* studenti = citire_toti_studentii(n);
	qsort(studenti, n, sizeof(Student), cmp_stud);
	afisare_toti_studentii(studenti, n);
	return 0;
}