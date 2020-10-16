#include <iostream>
#include "Class.h"

using namespace std;

int main()
{
	//punkt x(12,4);
//	punkt y(2, 2);
	//punkt z;
	//z = x + y;
	//cout << z;
	//z.drukuj();
	//x.drukuj();
	//x.zmiana(3, 4);

	//y += x; // Operator += dziala
	//y.drukuj();
	//x.drukuj();

	//punkt pkt1;
	//punkt pkt2(2, 4); Operator = dziala
	//pkt1 = pkt2; //
	//pkt1.drukuj();

	/*if (x == y)
	{
		cout << "Rowne" << endl;
	}
	else                                   Operator == dziala
	{
		cout << "Nie rowne" << endl;
	}*/
	


	// TEST TABLIC
	int x1[3] = { 2,2,2 };
	int y1[3] = { 3,3,3 };
	int x[3] = { 0,1,3 };
	int y[3] = { 3,1,0 };

	/*tablica tab(x, y, 3);
	tablica tmp;              // Operator = dziala 
	tmp = tab;
	tmp.wyswietl();*/
	//
	//tablica cmp1(x, y, 3);
	//tablica cmp2(x, y, 3);
	//if (cmp1 == cmp2)
	//{
	//	cout << "Takie same" << endl;   Operator == dziala
	//}
	/*punkt pkt;
	tablica wyjscie(x, y, 3);     << dla tablicy nie dziala
	cout << wyjscie;*/

	// test +=
	/*tablica t1(x, y, 3);
	tablica t2(x1, y1, 3);    += Nie wiem czy o taka implementacje chodzilo, ale dziala
	t1 += t2;
	t1.wyswietl();*/



	// Test []
	/*tablica t1(x, y, 3);
	t1[1];*/

}