#define _CRT_SECURE_NO_WARNINGS

#include<iostream>

using namespace std;

class Seif
{
	int pin;
	int suma;
	int getSuma()
	{
		return suma;
	}
	void setSuma(int s)
	{
		suma = s;
	}
public:
	Seif(int p, int s)
	{
		pin = p;
		suma = s;
	}
	void puneInSeif(Seif s, int su)
	{
		suma = su + s.getSuma();
		cout << "\n\tSuma cont: " << suma;
	}
	void scoateDinSeif(Seif s, int su)
	{
		if (su < s.getSuma())
		{
			suma = s.getSuma() - su;
			cout << "\n\tSuma cont: " << suma;
		}
		else
		{
			cout << "\n\tNu se poate efectua tranzactia!";
		}
	}
	int getPin()
	{
		return pin;
	}
	void setPin(int p)
	{
		pin = p;
	}
};