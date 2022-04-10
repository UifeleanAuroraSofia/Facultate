#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

class Numar //clasa
{
public:
	int val; //atribut
	int suma_nr(int nr) //metoda
	{
		return val + nr;
	}
	int suma_nr_afara_clasa(int nr); //metoda in afara clasei
	int getNumar() //metoda
	{
		return val;
	}
	void setNumar(int nr) //metoda
	{
		val = nr;
	}
};

int Numar::suma_nr_afara_clasa(int nr) //metoda in afara clasei
{
	return val + nr;
}