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
//punkt& punkt::operator=(punkt& tmp)
//{
//	this->x = tmp.x;
//	this->y = tmp.y;
//	return *this;
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
//ostream& punkt::operator<<(ostream& os)
//{
//	os << "Operator:x:" << x << " y:" << y << endl;
//	return os;
//}
std::ostream&  operator << (ostream& output, const punkt pkt)
{
	output <<"Operator x:"<< pkt.x <<" y:"<< pkt.y << endl;
	return output;
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
tablica::~tablica()
{
	delete this->tab;
}
void tablica::wyswietl()
{
	for (int i = 0; i < dl; ++i)
	{
		cout << tab[i];
	}
}
void tablica:: operator =(tablica& tmp)
{
	this->dl = tmp.dl;
	this->tab = new punkt[this->dl];
	for (int i = 0; i < this->dl; ++i)
	{
		this->tab[i] = tmp.tab[i];
	}
}
bool tablica::operator ==(tablica& tmp)
{
	bool test;
	if (this->dl == tmp.dl)
	{
		for (int i = 0; i < dl; ++i)  
		{
			if (!(test=this->tab[i] == tmp.tab[i]))
			{
				return false;
			}
		}
		return true;
	}
	return false;

}
//std::ostream& operator<<(ostream& output,  tablica tablica) Do poprawy
//{
//	for
//	output << tablica.tab[0];
//	return output;
//}
void tablica::operator+=(tablica& tmp)
{
	for (int i = 0; i < this->dl; ++i)
	{
		this->tab[i] += tmp.tab[i];
	}
}
void  tablica::operator [](int i)
{
	cout<<this->tab[i];
}

tablica::tablica(string pliks) // Zakladam, ze pierwsza liczba w pliku to jest Liczba punktow a nastepnie pobieram x i y  i dodaje je do tablicy
{
	int iterator = 0;
	int x;
	int y;
	fstream plik;
	plik.open(pliks, std::ios::in | std::ios::out);
	{
		if (plik.good())
		{
			plik >> this->dl;
			this->tab = new punkt[dl];
			while (!plik.eof())
			{
				plik >> x;
				plik >> y;
				this->tab[iterator].zmiana(x, y);
			}
		}

	}
}