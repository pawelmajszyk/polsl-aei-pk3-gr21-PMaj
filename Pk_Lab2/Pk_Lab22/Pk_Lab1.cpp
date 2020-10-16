#include <iostream>
#include "punkt.h"
#include "tablica.h"

int main()
{
	//punkt*test = new punkt (2, 4);
	//punkt* wsak = new punkt(1,1);
	//wsak->dodaj(*test);
	//wsak->drukuj();
	punkt pk1(2, 4);
	punkt pkt(pk1);// Test konstuktora kopiujacego
	//pkt.drukuj();
	// Wszystkie funkcje klasy dzialaja
	//tablica tab(2);

	punkt pk2(2, 5);
	punkt pk3;
	pk3 = pk1;
	//pk3 += pk2;
	pk3.drukuj();

	if (pk3 == pk2)
	{
		std::cout << "elo\n;";
	}
	else
	{
		printf("Nje!\n");
	}
	punkt pkt4(2, 2);
	punkt pkt5(3, 3);
	punkt pkt6;
	pkt6 = pkt5+pkt4;
	pkt6.drukuj();
}

