#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<iostream>

using namespace std;

class Complex_nr
{
	double real, imaginar;
public:
	Complex_nr(double x = 0.0, double y = 0.0)
	{
		real = x;
		imaginar = y;
	}
	double modul()
	{
		return sqrt(real * real + imaginar * imaginar);
	}
	Complex_nr conjugat()
	{
		Complex_nr b;
		b.imaginar = -imaginar;
		b.real = real;
		return b;
	}
	void afisare()
	{
		if (imaginar > 0.0)
		{
			cout << real << " + " << imaginar << "i";
		}
		else
		{
			cout << real << " - " << -imaginar << "i";
		}
	}
	double getReal()
	{
		return real;
	}
	void setReal(double x)
	{
		real = x;
	}
	double getImaginar()
	{
		return imaginar;
	}
	void setImaginar(double y)
	{
		imaginar = y;
	}
	Complex_nr adunare(Complex_nr a)
	{
		Complex_nr b;
		b.real = real + a.real;
		b.imaginar = imaginar + a.imaginar;
		return b;
	}
	Complex_nr scadere(Complex_nr a)
	{
		Complex_nr b;
		b.real = real - a.real;
		b.imaginar = imaginar - a.imaginar;
		return b;
	}
};

