#define _CRT_SECURE_NO_WARNINGS

#include<iostream>

using namespace std;

class Test2 
{
	int x;
public:
	Test2() {
		x = 0;
		cout << "\n\tApel constructor explicit vid.";
	}
public:
	int getTest2()
	{
		return x;
	}
	void setTest2(int a)
	{
		x = a;
	}
};
