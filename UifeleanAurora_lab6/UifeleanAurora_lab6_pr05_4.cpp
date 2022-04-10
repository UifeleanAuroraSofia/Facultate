/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Să se scrie o clasă care are ca variabilă privată un câmp de tip dată, definit într-o structură
externă clasei (zi – int, luna – int, an - int). Clasa conține metode mutator/setter și
accesor/getter (publice) pentru informația privată. In clasă se mai află doua metode publice
care:
- testează validitatea datei stocate;
- scrie într-un fișier toate datele din anul curent care preced (cronologic) data stocată în
clasă considerand doar atributul an ca fiind variabil;
In functia main( ), după instanțierea clasei și citirea de la tastatură a componentelor unei date,
să se apeleze metodele membre și apoi să se verifice rezultatele obținute.

CU POINTERI SI ADRESE
*/

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include "UifeleanAurora_lab6_pr04_Headerfile.h"

using namespace std;

int main()
{
	int zi, luna, an;
	ClasData d;
	ClasData* ptrd;
	ptrd = &d;
	cout << "\n\tIntroduceti ziua: ";
	cin >> zi;
	ptrd->setZi(zi);
	cout << "\tIntroduceti luna: ";
	cin >> luna;
	ptrd->setLuna(luna);
	cout << "\tIntroduceti anul: ";
	cin >> an;
	ptrd->setAn(an);
	ptrd->afisare_date(an);

	return 0;
}