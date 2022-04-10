#include<stdio.h>

struct Scerc {
	int raza;
};

double ar_str(Scerc c)
{
	return 3.14 * c.raza * c.raza;
}

double per_str(Scerc c)
{
	return 2 * 3.14 * c.raza;
}
