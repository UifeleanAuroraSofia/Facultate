#define _CRt_SECURE_NO_WARNINGS

#include<iostream>

using namespace std;

class Aritmetica
{
	int a, b;
public:
	int suma()
	{
		return a + b;
	}
	int diferenta();
	int getprimulnr()
	{
		return a;
	}
	void setprimulnr(int x)
	{
		a = x;
	}
	int getaldoileanr()
	{
		return b;
	}
	void setaldoileanr(int y)
	{
		b = y;
	}
};

int Aritmetica::diferenta()
{
	return a - b;
}

