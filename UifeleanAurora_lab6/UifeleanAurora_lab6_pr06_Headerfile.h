#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES

#include<iostream>
#include<math.h>

using namespace std;

class Triunghi
{
	int a;
	int b;
	int c;
	int verificare_triunghi()
	{
		if (a + b > c && b + c > a && c + a > b)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
public:
	Triunghi(int l1, int l2, int l3)
	{
		a = l1;
		b = l2;
		c = l3;
	}
	Triunghi()
	{
		cout << "\n\tConstructor clasa triunghi";
	}
	int getLatura1()
	{
		return a;
	}
	void setLatura1(int l1)
	{
		a = l1;
	}
	int getLatura2()
	{
		return b;
	}
	void setLatura2(int l2)
	{
		b = l2;
	}
	int getLatura3()
	{
		return c;
	}
	void setLatura3(int l3)
	{
		c = l3;
	}
	int perimetrul()
	{
		return a + b + c;
	}
	double aria()
	{
		double p = (double)((a + b + c) / 2);
		return sqrt(p * (double)(p - a) * (double)(p - b) * (double)(p - c));
	}
	int verificare_dreptunghic()
	{
		if ((a * a == b * b + c * c) || (b * b == a * a + c * c) || (c * c == a * a + b * b))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	int getVerificare_Triunghi()
	{
		return verificare_triunghi();
	}
};

