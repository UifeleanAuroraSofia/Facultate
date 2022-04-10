#define _CRt_SECURE_NO_WARNINGS

#include<iostream>

using namespace std;

class Matrix
{
	int** matrice;
	int linii, coloane;
public:
	Matrix(int l, int c)
	{
		linii = l;
		coloane = c;
		matrice = new (std::nothrow) int * [linii];
		for (int i = 0; i < linii; i++)
		{
			matrice[i] = new (std::nothrow) int[coloane];
		}
		for (int i = 0; i < linii; i++)
		{
			for (int j = 0; j < coloane; j++)
			{
				matrice[i][j] = 0;
			}
		}
	}
	~Matrix();
	Matrix(const Matrix& pct); //constructor copiere
	void readMatrix();
	void displayMatrix();
	void diagonala_secundara();
	void sub_diagonala_principala();
	void matrice_rara(int val);
	int verif_matrice_rara();
	int getElement(int l, int c)
	{
		return matrice[l][c];
	}
	void setElement(int l, int c, int v)
	{
		matrice[l][c] = v;
	}
	int getlinie()
	{
		return linii;
	}
	void setlinie(int l)
	{
		linii = l;
	}
	int getcoloana()
	{
		return coloane;
	}
	void setcoloana(int c)
	{
		coloane = c;
	}
};

Matrix::~Matrix()
{
	for (int i = 0; i < linii; i++)
	{
		delete[]matrice[i];
	}
	delete matrice;
}

void Matrix::diagonala_secundara()
{
	cout << "\n\tElementele de pe diagonala secundara: ";
	for (int i = 0; i < linii; i++)
	{
		cout << matrice[i][coloane - 1 - i] << " ";
	}
}

void Matrix::sub_diagonala_principala()
{
	cout << "\n\tElementele de sub diagonala principala: ";
	for (int i = 0; i < linii; i++)
	{
		cout << "\n\t\tLinia " << i << ": ";
		for (int j = 0; j < coloane; j++)
		{
			if (j < i)
			{
				cout << matrice[i][j] << " ";
			}
		}
	}
}

void Matrix::matrice_rara(int val)
{
	for (int i = 0; i < linii; i++)
	{
		for (int j = 0; j < coloane; j++)
		{
			if (matrice[i][j] < val)
			{
				setElement(i, j, 0);
			}
			else
			{
				setElement(i, j, 1);
			}
		}
	}
}

int Matrix::verif_matrice_rara()
{
	int zerouri = 0;
	for (int i = 0; i < linii; i++)
	{
		for (int j = 0; j < coloane; j++)
		{
			if (matrice[i][j] == 0)
			{
				zerouri++;
			}
		}
	}
	if (zerouri > (double)(((double)67 / 100) * (linii * coloane)))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

Matrix::Matrix(const Matrix& pct)
{
	linii = pct.linii;
	coloane = pct.coloane;
	matrice = new (std::nothrow) int* [linii];
	for (int i = 0; i < linii; i++)
	{
		matrice[i] = new (std::nothrow) int[coloane];
	}
	for (int i = 0; i < linii; i++)
	{
		for (int j = 0; j < coloane; j++)
		{
			matrice[i][j] = pct.matrice[i][j];
		}
	}
}//constructor copiere