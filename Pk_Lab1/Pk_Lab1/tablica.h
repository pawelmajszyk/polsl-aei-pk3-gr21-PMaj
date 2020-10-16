#ifndef tablica_h
#define tablica_h
#include "punkt.h"
#include <iostream>
class tablica
{
	punkt* pkt;
	int dl;

public:
	tablica(int dlug=0);
	tablica(tablica& pkt);
	tablica(float* x, float* y, int  dl);
	~tablica(); //Dekonstrukot 
	void dodaj(tablica& tab); // Dodanie wektora
	bool porownaj(tablica& tab);// Porownanie czy tablice sa takie same
};


#endif