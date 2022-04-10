#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

class Calculator
{
	int x, y;
public:
	int plus(int x, int y)
	{
		this->x = x;
		return x + y;
	}
	int minus(int x, int y)
	{
		this->x = x;
		return x - y;
	}
	int inmultit(int x, int y)
	{
		this->x = x;
		return x * y;
	}
	float inpartit(int x, int y)
	{
		this->x = x;
		if ((float)x / y == 0)
		{
			printf("\n\tImpartire invalida!");
		}
		else
		{
			return (float)x / y;
		}
	}
	int getCalculator()
	{
		return x;
	}
	void setCalculator(int X)
	{
		x = X;
	}
};

