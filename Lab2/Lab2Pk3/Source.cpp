#include <iostream>
#include "Class.h"

using namespace std;

int main()
{
	punkt x(12,4);
	punkt y(2, 2);
	punkt z;
	z = x + y;
	cout << z;
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
	


}