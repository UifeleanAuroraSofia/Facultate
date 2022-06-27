#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<string.h>
#include <time.h>

const int dim_sir = 24;

using namespace std;

class Person {
	// membri private
	char nume[dim_sir];
	char prenume[dim_sir];
	char cnp[14];
	// structura CNP: S AN LU ZI 6cifre; total 13 cifre
public:
	// membri publici
	static int nr_person_valid;
	void setNume(char* n);
	void setPrenume(char* p);
	int setValidCnp(char* c);
	char* getNume(void) {
		return nume;
	}
	char* getPrenume(void) {
		return prenume;
	}
	char* getCnp(void) {
		return cnp;
	}
	char get_gender(int& gender);
	int get_an_nast(int gender);
	int get_luna_nast(void);
	int get_zi_nast(void);
	int get_varsta(int gender);
};

int Person::nr_person_valid;

void Person::setNume(char* n) {
	if (n != 0)
		strncpy_s(nume, n, dim_sir - 1);
	else
		strcpy_s(nume, "Necunoscut");
}
void Person::setPrenume(char* p) {
	if (p != 0)
		strncpy_s(prenume, p, dim_sir - 1);
	else
		strcpy_s(prenume, "Necunoscut");
}
int Person::setValidCnp(char* c) {
	char bufzi[3], bufluna[3], bufan[3];
	int an, luna, zi;
	if (c != 0) {
		// validare CNP: numai pentru cifra gen, cifrele pentru AN, LU, ZI
		if (strlen(c) != 13)//lungime cnp
			return 1;
		if (c[0] != '1' && c[0] != '2' && c[0] != '3' && c[0] != '4' && c[0] != '5' && c[0] != '6')//cod cnp
			return 2;

		strncpy_s(bufan, c + 1, 2);//an
		bufan[2] = '\0';
		an = atoi(bufan);
		strncpy_s(bufluna, c + 3, 2);//luna
		bufluna[2] = '\0';
		luna = atoi(bufluna);
		strncpy_s(bufzi, c + 5, 2);//zi
		bufzi[2] = '\0';
		zi = atoi(bufzi);

		if (an >= 1 && an <= 99)
		{
			if (luna == 2 && an % 4 == 0)
			{
				if (zi >= 1 && zi <= 29)
				{
					strcpy_s(cnp, c);//copiere sir c valid in cnp
					nr_person_valid++;
					return 0;
				}
			}
			else if (luna == 2 && an % 4 != 0)
			{
				if (zi >= 1 && zi <= 28)
				{
					strcpy_s(cnp, c);//copiere sir c valid in cnp
					nr_person_valid++;
					return 0;
				}
			}
			else
				if (luna != 2 && luna >= 1 && luna <= 12)
				{
					if (luna <= 7 && luna % 2 == 1)
					{
						if (zi >= 1 && zi <= 31)
						{
							strcpy_s(cnp, c);//copiere sir c valid in cnp
							nr_person_valid++;
							return 0;
						}
					}
					else if (luna <= 7 && luna % 2 == 0)
					{
						if (zi >= 1 && zi <= 30)
						{
							strcpy_s(cnp, c);//copiere sir c valid in cnp
							nr_person_valid++;
							return 0;
						}
					}
					else if (luna > 7 && luna % 2 == 0)
					{
						if (zi >= 1 && zi <= 31)
						{
							strcpy_s(cnp, c);//copiere sir c valid in cnp
							nr_person_valid++;
							return 0;
						}
					}
					else if (luna > 7 && luna % 2 == 1)
					{
						if (zi >= 1 && zi <= 30)
						{
							strcpy_s(cnp, c);//copiere sir c valid in cnp
							nr_person_valid++;
							return 0;
						}
					}
				}
		}
	}
	else return -1;
}
char Person::get_gender(int& gender) {
	char buf[14];
	strcpy_s(buf, cnp);
	cnp[1] = '\0';
	gender = atoi(cnp);
	strcpy_s(cnp, buf);
	if (gender % 2 == 1 && gender <= 5) return 'M';
	if (gender % 2 == 0 && gender <= 6) return 'F';
	return 'X';
}
int Person::get_an_nast(int gender) {
	char buf[3];
	strncpy_s(buf, cnp + 1, 2);
	buf[2] = '\0';
	if (gender == 1 || gender == 2)
	{
		return(1900 + atoi(buf));
	}
	else if (gender == 3 || gender == 4)
	{
		return(1800 + atoi(buf));
	}
	else if (gender == 5 || gender == 6)
	{
		return(2000 + atoi(buf));
	}
}
int Person::get_luna_nast(void) {
	char buf[3];
	strncpy_s(buf, cnp + 3, 2);
	buf[2] = '\0';
	return(atoi(buf));
}
int Person::get_zi_nast(void) {
	return((cnp[5] - '0') * 10 + (cnp[6] - '0'));
}
int Person::get_varsta(int gender) {
	struct tm newTime;
	time_t szClock;
	time(&szClock);
	localtime_s(&newTime, &szClock);
	int an_c;
	an_c = 1900 + newTime.tm_year;

	int an_n = get_an_nast(gender);
	int n = an_c - an_n;
	int lu_c = newTime.tm_mon + 1;
	int lu_n = get_luna_nast();
	if (lu_c < lu_n)
		n--;
	else {
		if (lu_c == lu_n) {
			int zi_c = newTime.tm_mday;
			int zi_n = get_zi_nast();
			if (zi_c < zi_n) n--;
		}
	}
	return n;
}


