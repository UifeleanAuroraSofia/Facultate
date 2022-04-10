#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<fstream>
using namespace std;

ofstream fout("data.out");

struct StrData
{
	int zi;
	int luna;
	int an;
};

class ClasData
{
	StrData data;
public:
	ClasData()
	{
		data.zi = 1;
		data.luna = 1;
		data.an = 2000;
	}
	int getZi()
	{
		return data.zi;
	}
	void setZi(int z)
	{
		data.zi = z;
	}
	int getLuna()
	{
		return data.luna;
	}
	void setLuna(int l)
	{
		data.luna = l;
	}
	int getAn()
	{
		return data.an;
	}
	void setAn(int a)
	{
		data.an = a;
	}
	int validare_date(int zi, int luna, int an)
	{
		data.zi = zi;
		data.luna = luna;
		data.an = an;
		if (data.an >= 1 && data.an <= 9999)
		{
			if (data.luna == 2 && data.an % 4 == 0)
			{
				if (data.zi >= 1 && data.zi <= 29)
				{
					return 1;
				}
			}
			else if (data.luna == 2 && data.an % 4 != 0)
			{
				if (data.zi >= 1 && data.zi <= 28)
				{
					return 1;
				}
			}
			else
			if (data.luna != 2 && data.luna >= 1 && data.luna <= 12)
			{
				if (data.luna <= 7 && data.luna % 2 == 1)
				{
					if (data.zi >= 1 && data.zi <= 31)
					{
						return 1;
					}
				}
				else if (data.luna <= 7 && data.luna % 2 == 0)
				{
					if (data.zi >= 1 && data.zi <= 30)
					{
						return 1;
					}
				}
				else if (data.luna > 7 && data.luna % 2 == 0)
				{
					if (data.zi >= 1 && data.zi <= 31)
					{
						return 1;
					}
				}
				else if (data.luna > 7 && data.luna % 2 == 1)
				{
					if (data.zi >= 1 && data.zi <= 30)
					{
						return 1;
					}
				}
			}
		}
		return 0;
	}
	void afisare_date(int an)
	{
		for (int i = data.luna; i <= 12; i++)
		{
			if (i == data.luna)
			{
				for (int j = data.zi; j <= 31; j++)
				{
					if (validare_date(j, i, an) == 1)
					{
						fout << j << "/" << i << "/" << an << endl;
					}
				}
			}
			else
			for (int j = 1; j <= 31; j++)
			{
				if (validare_date(j, i, an) == 1)
				{
					fout << j << "/" << i << "/" << an << endl;
				}
			}
		}
	}
};

