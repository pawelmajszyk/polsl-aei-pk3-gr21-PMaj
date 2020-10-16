#include "Class.h"



punkt::punkt():x(0),y(0)
{

}
punkt::punkt(int a, int b) : x(a), y(b)
{

}
void punkt::drukuj()
{
	cout << "x:" << x << " y:" << y << endl;
}

void punkt::zmiana(int a, int b)
{
	this->x = a;
	this->y = b;
}
void punkt::operator+=(punkt& tmp)
{
	this->x += tmp.x;
	this->y += tmp.y;
}
//void punkt::operator=(punkt& tmp)
//{
//	this->x = tmp.x;
//	y = tmp.y;
//
//}
bool punkt::operator==(punkt& tmp)
{
	if (x == tmp.x && y == tmp.y) return true;
	else
	{
		return false;
	}
}
punkt punkt::operator+(punkt& tmp)
{
	punkt tmp1;
	tmp1.x = this->x + tmp.x;
	tmp1.y = this->y + tmp.y;
	return tmp1;
}
ostream& punkt::operator<<(ostream& os)
{
	os << "Operator:x:" << x << " y:" << y << endl;
	return os;
}

tablica::tablica()
{
	dl = 0;
	tab = nullptr;
}
tablica::tablica(int*x,int*y,int dlugosc)
{
	dl = dlugosc;
	tab = new punkt[dl];
	
	for (int i = 0; i < dl; ++i)
	{
		tab[i].zmiana(x[i],y[i]);
	}
}
