#pragma once
class OraCurenta
{
	int h;
	int m;
	int s;
public:
	int getOra()
	{
		return h;
	}
	void setOra(int h)
	{
		this->h = h;
	}
	int getMinute()
	{
		return m;
	}
	void setMinute(int m)
	{
		this->m = m;
	}
	int getSecunde()
	{
		return s;
	}
	void setSecunde(int s)
	{
		this->s = s;
	}
	friend OraCurenta adunare_ore(OraCurenta ora);
};

OraCurenta adunare_ore(OraCurenta ora)
{
	OraCurenta l;
	l.h = ora.h - 2;
	l.m = ora.m;
	l.s = ora.s;
	return l;
}
