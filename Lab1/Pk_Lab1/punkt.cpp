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