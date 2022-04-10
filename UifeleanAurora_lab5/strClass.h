#define _CRT_SECURE_NO_WARNINGS

#include<string.h>

class myString {
	char s[10];
public:
	myString(char sir[10])
	{
		strcpy(s, sir);
	}
	int lungime_sir()
	{
		int i = 0;
		while (s[i] != '\0')
		{
			i++;
		}
		return i;
	}
	int poz_caracter(char c)
	{
		int poz = -1;
		for (int i = 0; i < lungime_sir(); i++)
		{
			if (c == s[i])
			{
				poz = i;
			}
		}
		return poz;
	}
	char* majuscule()
	{
		for (int i = 0; i < lungime_sir(); i++)
		{
			if (s[i] >= 'a' && s[i] <= 'z')
			{
				s[i] = s[i] - 32;
			}
		}
		return s;
	}
	char* minuscule()
	{
		for (int i = 0; i < lungime_sir(); i++)
		{
			if (s[i] >= 'A' && s[i] <= 'Z')
			{
				s[i] = s[i] + 32;
			}
		}
		return s;
	}
	int aparitii_caracter(char c)
	{
		int k = 0;
		for (int i = 0; i < lungime_sir(); i++) 
		{
			if (c == s[i])
			{
				k++;
			}
		}
		return k;
	}
	char* getString()
	{
		return s;
	}
	void setString(char sir[])
	{
		for (int i = 0; i < lungime_sir(); i++)
		{
			sir[i] = s[i];
		}
	}
};
