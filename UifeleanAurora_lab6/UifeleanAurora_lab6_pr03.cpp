/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Pornind de la exemplul care tratează lucrul cu matrice, considerati ca si atribute private
matricea data printr-un pointer dublu pentru a aloca un tablou de pointeri catre liniile matricii
(sau pointer simplu la alocarea dinamica contigua a matricii), si doua atribute private de tip int
pentru numarul de linii si coloane. Constructorul cu doi parametrii va aloca dinamic spatiu
pentru matrice initializand elementele cu 0. Implementati un destructor explicit pentru a
elibera spatiul alocat. Definiti o metoda publica void setElement(int l, int c, int v) care va seta
un element cu valoarea v, de pe linia l si coloana c. Declarati o functie globala void
readMatrix(Matrix m) care va avea ca si parametru o matrice instantiata la care se va valida in
main() ca dimensiunile sa fie corecte, >=1 si <=10, si care va citi elementele matricii de la
tastaura (va folosi si metoda publica setElement()). Metoda din clasa displayMatrix() va fi
definita ca si o functie globala la fel ca si readMatrix() considerand metoda getElement() ca si
metoda public.
Metoda de afisare a unei coloane, nu va valida numarul coloanei, coloana fiind validata in
main(). Completați codul scris cu metode specifice pentru:
- afișarea elementelor de pe diagonala secundara a matricei, dacă matricea este pătratică; în
caz contrar se afișează un mesaj corespunzător;
- afișarea elementelor de sub diagonala principala;
- afișarea unei matrice de dimensiunea celei inițiale ale cărei elemente pot avea valori de 0
(dacă elementul corespunzător este mai mic decât o valoare in prealabil citita de prag) sau
1 (în caz contrar), si verifica daca matricea este rara, >= 67% din elemente sunt zero);
Refaceti aplicatia in care considerati metodele getElement() si setElement() private iar functile
readMatrix() si displayMatrix() metode membere publice in cadrul clasei.
*/

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include "UifeleanAurora_lab6_pr03_Headerfile.h"

using namespace std;

void Matrix::readMatrix()
{
	int l = getlinie(), c = getcoloana(), element;
	for (int i = 0; i < l; i++)
	{
		for (int j = 0; j < c; j++)
		{
			cin >> element;
			setElement(i, j, element);
		}
	}
}

void Matrix::displayMatrix()
{
	int l = getlinie(), c = getcoloana();
	for (int i = 0; i < l; i++)
	{
		cout << endl << "\t\t";
		for (int j = 0; j < c; j++)
		{
			cout << getElement(i, j) << " ";
		}
	}
}

int main()
{
	int l, c;
	do
	{
		cout << "\n\tIntroduceti numarul de linii: ";
		cin >> l;
		cout << "\tIntroduceti numarul de coloane: ";
		cin >> c;
		if (!((l >= 1 && l <= 10) && (c >= 1 && c <= 10)))
		{
			cout << "\n\tDate invalide! Mai incearca!\n";
		}
	} while (!((l >= 1 && l <= 10) && (c >= 1 && c <= 10)));
	Matrix m(l ,c);

	cout << "\n\tIntroduceti elementele matricii:\n\t\t";
	m.readMatrix();
	cout << "\n\tMatricea este: ";
	m.displayMatrix();

	if (m.getlinie() == m.getcoloana())
	{
		m.diagonala_secundara();
		m.sub_diagonala_principala();
	}
	else
	{
		cout << "\n\tMatricea nu este patratica!";
	}

	int val;
	cout << "\n\tCititi o valoare de prag: ";
	cin >> val;
	Matrix m2(m);
	//Matrix m2(l, c);
	m2.matrice_rara(val);
	m2.displayMatrix();
	if (m2.verif_matrice_rara() == 1)
	{
		cout << "\n\tMatricea este rara.";
	}
	else
	{
		cout << "\n\tMatricea NU este rara.";
	}
	return 0;
}