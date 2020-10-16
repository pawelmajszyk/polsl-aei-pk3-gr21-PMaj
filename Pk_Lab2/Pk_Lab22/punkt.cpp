#include "punkt.h"
#include <iostream>


using namespace std;

punkt::punkt(punkt& pkt)// Konstruktor kopiujacy
{
	this->x = pkt.x;
	this->y = pkt.y;
}

punkt::punkt(float x_,float y_):x(x_),y(y_)
{
	
}
void punkt::dodaj(punkt& pkt)
{
	this->x = this->x+pkt.x;
	this->y = this->y+pkt.y;
}
void punkt::dodaj(punkt* pkt)
{
	this->x += pkt->x;
	this->y +=pkt->y;
}
void punkt::drukuj()
{
	cout << "Moje wspolrzedne to" << endl << "x: " << this->x << " y: " << this->y << endl;
}
bool punkt::compare(punkt& pkt)
{
	if (this->x == pkt.x && this->y == pkt.y)
	{
		return true;

	}
	else return false;
}

punkt punkt::operator=( punkt& punkt)
{
	this->x = punkt.x;
	this->y = punkt.y;
	return *this;
}

void punkt::operator+=(const punkt punkt)
{
	this->x += punkt.x;
	this->y += punkt.y;
}
bool punkt::operator==(const punkt punkt)
{
	if (this->x == punkt.x && this->y == punkt.y) return true;
	else
		return false;
}
punkt& punkt::operator+(punkt& punkt1)
{
	punkt wynik(0,0);
	//punkt tmp = *this;
	wynik.x=this->x + punkt1.x;
	wynik.y = punkt1.y + this->y;
	return wynik;
}