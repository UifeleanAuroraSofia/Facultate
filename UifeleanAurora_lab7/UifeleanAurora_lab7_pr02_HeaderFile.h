#define _CRT_SECURE_NO_WARNINGS

#include<iostream>

using namespace std;

class Tablou
{
	int marime;
	int* tab = NULL;
public:
	int getMarime()
	{
		return marime;
	}
	void setMarime(int marime)
	{
		this->marime = marime;
	}
	Tablou()
	{
		marime = 0;
	}
	Tablou(int marime)
	{
		this->marime = marime;
	}
	void alocare_spatiu_si_citire()
	{
		tab = new (nothrow) int[marime];
		for (int i = 0; i < marime; i++)
		{
			cin >> *(tab + i);
		}
	}
	void afisare()
	{
		for (int i = 0; i < marime; i++)
		{
			cout << *(tab + i) << " ";
		}
	}
	Tablou scadere(Tablou tablou_nou);
};

Tablou Tablou::scadere(Tablou tablou_nou)
{
	Tablou l;
	if (marime == tablou_nou.marime)
	{
		l.setMarime(marime);
	}
	else
	{
		l.setMarime(min(marime, tablou_nou.marime));
	}
	l.tab = new (nothrow) int[getMarime()];
	for (int i = 0; i < l.getMarime(); i++)
	{
		*(l.tab + i) = *(tab + i) - *(tablou_nou.tab + i);
	}
	return l;
}