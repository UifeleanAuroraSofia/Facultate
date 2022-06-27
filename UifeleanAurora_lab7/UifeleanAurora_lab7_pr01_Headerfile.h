#define _CRT_SECURE_NO_WARNINGS

#include<iostream>

using namespace std;

class CPunctText {
	int x;
	int y;
	string sNume;
public:
	//constructor explicit vid
	CPunctText();
	//constructor cu parametri
	CPunctText(int ix, int iy, string sText = "Punct");
	//constructor de copiere
	CPunctText(const CPunctText& pct);
	//destructor:
	//~CPunctText();
	//punct nou
	void adunare(CPunctText punct);
	double distanta();
	/*void afis() {
		cout << "\nObiectul are x= " << x;
		cout << "\nObiectul are y= " << y;
		cout << "\nObiectul are sirul = " << sNume;
	}//afis*/
	int getX()
	{
		return x;
	}
	void setX(int a)
	{
		x = a;
	}
	int getY()
	{
		return y;
	}
	void setY(int b)
	{
		y = b;
	}
	int getLungime()
	{
		return sNume.length();
	}
	string getSNume()
	{
		return sNume;
	}
	void setSNume(string n)
	{
		sNume = n;
	}
};
CPunctText::CPunctText() {
	cout << "\n constructor explicit vid";
	x = y = 0;
	string sNume = "Veronica";
}
CPunctText::CPunctText(int ix, int iy, string sText) {
	cout << "\n constructor cu parametri";
	x = ix;
	y = iy;
	sNume = sText;
}
CPunctText::CPunctText(const CPunctText& pct) {
	//cout << "\n constructor de copiere";
	x = pct.x;
	y = pct.y;
	sNume = pct.sNume;
}
/*CPunctText::~CPunctText() {
	cout << "\n destructor";
	delete[] sNume;
}*/

void CPunctText::adunare(CPunctText punct)
{
	x += punct.x;
	y += punct.y;
	sNume = sNume + punct.sNume;
}

double CPunctText::distanta()
{
	return sqrt((x * x) + (y * y));
}