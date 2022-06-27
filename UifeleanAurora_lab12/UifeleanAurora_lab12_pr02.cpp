/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Scrieti o aplicatie C++ in care se citesc de la tastatura date de diferite tipuri, urmand a fi
afisate pe ecran utilizand manipulatorii standard.
*/

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<iomanip>
using namespace std;

int main() {

	int a = 100;
	double b = 123.4567;
	char c = 'a';
	char d[] = "pisici";

	cout << "\n\tPrecizie de 6: " << setprecision(6) << b;
	cout << "\n\tPrecizie de 5: " << setprecision(5) << b;
	cout << "\n\tPrecizie de 4: " << setprecision(4) << b;

	cout << "\n\n\tDecimal: " << dec;
	cout << a << " " << b << " " << c << " " << d;
	cout << "\n\tOctal: " << oct;
	cout << a << " " << b << " " << c << " " << d;
	cout << "\n\tHexazecimal: " << hex;
	cout << a << " " << b << " " << c << " " << d;

	return 0;
}