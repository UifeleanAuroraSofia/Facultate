/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
2. Să se definească o clasă numită myString (într-un fişier numit strClass.h) care să fie compusă
din metodele specifice care efectuează următoarele operaţii pe şiruri de caractere:
- determină lungimea şirului primit la intrare.
- determină ultima poziţie de apariţie a unui anumit caracter din şirul de intrare.
- returnează şirul primit la intrare, scris cu caractere majuscule.
- returnează şirul primit la intrare, scris cu caractere minuscule.
- returnează numărul de apariţii ale unui anumit caracter din şirul primit.
3. Să se scrie programul care citeşte de la tastatură un şir de maxim 10 caractere şi care, pe baza
clasei implementate anterior, efectuează asupra şirului de intrare operaţiile definite în cadrul
clasei.
*/

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include "strClass.h"

using namespace std;

#define DIM 256

int main()
{
	char s[DIM], c;
	cout << "\n\tIntroduceti un sir de caractere: ";
	cin >> s;
	myString sirul(s);
	sirul.setString(s);
	cout << "\n\tLungimea sirului este: " << sirul.lungime_sir();

	cout << "\n\tIntroduceti un caracter: ";
	cin >> c;
	cout << "\n\tUltima pozitie de apartitie a caracterului " << c << " in sir este " << sirul.poz_caracter(c);

	cout << "\n\tSirul scris cu majuscule: " << sirul.majuscule();
	cout << "\n\tSirul scris cu minuscule: " << sirul.minuscule();

	cout << "\n\tIntroduceti un caracter: ";
	cin >> c;
	cout << "\n\tNumarul de aparitii a caracterului " << c << " in sir este " << sirul.aparitii_caracter(c);

	return 0;
}