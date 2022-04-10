/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Considerati o structura de date Student, care contine un camp de tip sir de caractere (maxim 30) pentru
nume_prenume si un alt camp nota de tip int. Definiti un obiect de tip Student la care datele vor fi citite de la
tastatura. Validati ca nume_prenume sa aiba cel putin 5 caractere iar nota sa fie >=5 si <=10. Afisati campurile
obiectului in caz de introducere corecta
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<assert.h>
#include<string.h>

struct Student
{
	char nume_prenume[30];
	int nota;
};

int main()
{
	Student student;
	printf("\n\tIntroduceti numele si prenumele studentului: ");
	scanf("%s", student.nume_prenume);
	assert(strlen(student.nume_prenume) >= 5); //minim 5 caractere
	printf("\n\tIntroduceti nota studentului: ");
	scanf("%d", &student.nota);
	assert(student.nota >= 5 && student.nota <= 10); //intre 5 si 10
	printf("\n\tNumele si prenumele studentului: %s", student.nume_prenume);
	printf("\n\tNota studentului: %d", student.nota);
	return 0;
}