#include<iostream>
using namespace std;

int linii;
int coloane;

class Matrix {
	int rows;
	int cols;
	int* elems;
public:
	Matrix();
	Matrix(int rows, int cols);
	Matrix(const Matrix&);
	~Matrix() { delete[] elems; }
	int& operator ( ) (int row, int col);
	Matrix& operator=(const Matrix&);
	//friend Matrix operator+(Matrix&, Matrix&);
	Matrix operator+(Matrix&);//method
	Matrix operator-(Matrix&);
	Matrix operator*(Matrix&);
	int getRows() { return rows; }
	int getCols() { return cols; }
	void diagonala_principala();
	void diagonala_secundara();
	void init(int r, int c);
	void citire();
	void afisare();
};//Matrix
Matrix::Matrix() : rows(linii), cols(coloane)
{
	elems = new (nothrow) int[rows * cols];
}
Matrix::Matrix(int r, int c) : rows(r), cols(c)
{
	elems = new (nothrow) int[rows * cols];
}
Matrix::Matrix(const Matrix& m) : rows(m.rows), cols(m.cols)
{
	int n = rows * cols;
	elems = new (nothrow) int[n];
	for (int i = 0; i < n; i++)
		elems[i] = m.elems[i];
}
void Matrix::init(int r, int c) {
	rows = r;
	cols = c;
	elems = new (nothrow) int[rows * cols];
}
int& Matrix:: operator( )(int row, int col)
{
	return elems[row * cols + col];
}
void Matrix::diagonala_principala() {
	for (int i = 0; i < rows; i++) {
		cout << elems[cols * i + i] << " ";
	}
}
void Matrix::diagonala_secundara() {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			if (i + j == rows - 1)
			{
				cout << elems[cols * i + j] << " ";
			}
		}
	}
}
Matrix& Matrix:: operator=(const Matrix& m) {
	if (this != &m) {
		delete[] elems;
		rows = m.rows; cols = m.cols;
		int n = rows * cols;
		elems = new (nothrow) int[n];
		for (int i = 0; i < n; i++)
			elems[i] = m.elems[i];
	}
	return *this;
}
/*
Matrix operator+(Matrix &p, Matrix &q) {
Matrix m(p.rows, p.cols);
for (int r = 0; r < p.rows; ++r)
for (int c = 0; c < p.cols; ++c)
m(r, c) = p(r, c) + q(r, c);
return m;
}op+ friend*/
Matrix Matrix::operator+(Matrix& p) {
	Matrix m(p.rows, p.cols);
	for (int r = 0; r < p.rows; ++r)
		for (int c = 0; c < p.cols; ++c)
			m(r, c) = p(r, c) + elems[r * cols + c];
	return m;
}//op+ methods
Matrix Matrix::operator-(Matrix& p) {
	Matrix m(p.rows, p.cols);
	for (int r = 0; r < p.rows; ++r)
		for (int c = 0; c < p.cols; ++c)
			m(r, c) = p(r, c) - elems[r * cols + c];
	return m;
}//op
Matrix Matrix::operator*(Matrix& p) {
Matrix m(p.rows, p.cols);
for (int r = 0; r < p.rows; ++r)
	for (int c = 0; c < p.cols; ++c) {
		m(r, c) = 0;
		for (int i = 0; i < p.cols; ++i)
			m(r, c) += p(r, i) * elems[r * cols + c];
	}
return m;
}//op*
void Matrix::citire() {
	for (int i = 0; i < rows; i++)
		for (int j = 0; j < cols; j++) {
			cout << "Dati elem. [" << i << "][" << j << "] ";
			cin >> elems[cols * i + j];
		}
}//citire
void Matrix::afisare() {
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
			cout << elems[cols * i + j] << "\t";
		cout << endl;
	}
}//afisare