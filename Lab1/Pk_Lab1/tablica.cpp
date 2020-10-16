#include "tablica.h"
#include "punkt.h"




tablica::tablica(int dlug)
{
	pkt = new punkt[dlug];
	for (int i = 0; i < dlug; ++i)
	{
		pkt[i].drukuj();
	}
}
tablica::tablica(tablica&tab)//Konstruktor kopiujacy
{
	this->dl = tab.dl;
	pkt = new punkt[dl];
	for (int i = 0; i < dl; ++i)
	{
		pkt[i] = tab.pkt[i];
		
		
	}
}
tablica::tablica(float* x, float* y, int  dl)
{
	this->dl = dl;
	pkt = new punkt[dl];
	for (int i = 0; i < dl; ++i)
	{
		pkt[i] = punkt(x[i], y[i]);


	}

}
tablica::~tablica()
{
	delete pkt;
}
void tablica::dodaj(tablica&tab)
{
	if (this->dl >= tab.dl)// Jezeli tablica glowna jest wieksza to dodajemy tylko tab.dl elementow
	{
		for (int i = 0; i < tab.dl; ++i)
		{
			this->pkt[i].dodaj(tab.pkt[i]);
		}
	}
	else if (this->dl < tab.dl) // jezeli tablica glowna jest mniejsza to dodajemy this->dl elementow
	{

		for (int i = 0; i < this->dl; ++i)
		{
			this->pkt[i].dodaj(tab.pkt[i]);
		}
	}
//


}
bool tablica::porownaj(tablica& tab)// Nie do konca wiem co to znaczy porownac. Sprawdze ich rozmiar i czy ich elementy sa takie same.
{
	if (this->dl == tab.dl)// Porownanie dlugosci
	{
		for (int i = 0; i < dl; ++i) // Iteracja po tablicy
		{
			if (!this->pkt->compare(tab.pkt[i]))// Porownanie kazdego punktu z tablicy
			{
				return false;
			}
		}
	}
	return true;
}