#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Data
{
	int zi;
	int luna;
	int an;
};

struct Student
{
	char nume[20];
	char prenume[20];
	int cnp;
	struct Data data_angajarii;
	void citire_studenti(Student);
	void afisare_studenti(Student);
};

void citire_studenti(Student* p)
{
	printf("\n\tNume student: ");
	scanf("%s", p->nume);
	printf("\n\tCNP: ");
	scanf("%d", &p->cnp);
	printf("\n\tData angajarii: ");
	printf("\n\t\tZi: ");
	scanf("%d", &p->data_angajarii.zi);
	printf("\n\t\tLuna: ");
	scanf("%d", &p->data_angajarii.luna);
	printf("\n\t\tAn: ");
	scanf("%d", &p->data_angajarii.an);
}

void afisare_studenti(Student* p)
{
	printf("\n\tNume student: %s", p->nume);
	printf("\n\tCNP: %d", p->cnp);
	printf("\n\tData angajarii: ");
	printf("\n\t\tZi: %d", p->data_angajarii.zi);
	printf("\n\t\tLuna: %d", p->data_angajarii.luna);
	printf("\n\t\tAn: %d", p->data_angajarii.an);
}

Student* citire_toti_studentii(int n)
{
	Student* studenti;
	studenti = (Student*)malloc(n * sizeof(Student));
	for (int i = 0; i < n; i++)
	{
		citire_studenti(studenti + i);
	}
	return studenti;
}

void afisare_toti_studentii(Student *studenti, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("\n\tStudentul numarul %d", i);
		afisare_studenti(studenti + i);
	}
}

int cmp_stud(const void* p1, const void* p2)
{
	Student* pa = (Student*)p1;
	Student* pb = (Student*)p2;
	int numele;
	if (pa->cnp == pb->cnp)
	{
		if (pa->nume == pb->nume)
		{
			return (pa->nume - pb->nume);
		}
	}
	else
	{
		return (pa->cnp - pb->cnp);
	}
}