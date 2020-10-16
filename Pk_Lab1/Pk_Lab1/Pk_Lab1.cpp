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
	pkt.drukuj();
	// Wszystkie funkcje klasy dzialaja
	tablica tab(2);
}

