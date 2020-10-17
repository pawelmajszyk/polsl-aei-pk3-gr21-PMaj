#include "Class.h"




punkt::punkt() :x(0), y(0)
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
//punkt punkt::operator=(punkt& tmp)
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
std::ostream& operator << (ostream& output, const punkt pkt)
{
	output << "Operator x:" << pkt.x << " y:" << pkt.y << endl;
	return output;
}

wektor::wektor()
 {
	dlugosc = 0;
	kierunek = 0;
}
wektor::wektor(int x, int y):punkt(x,y)
{
	dlugosc = sqrt(x * x + y * y);
	kierunek = atan(y / x);
}
void wektor::zmiana(int x, int y)
{
	punkt::zmiana(x, y);
	dlugosc= sqrt(x * x + y * y);
	kierunek= atan(y / x);
}
void wektor::drukuj()
{
	punkt::drukuj();
	cout << "Wektor ma dlugosc: " << dlugosc << " oraz kierunek: " << kierunek << endl;
}
int wektor::dlug()
{
	return dlugosc;
}
TabWektorow::TabWektorow()
{
	n = 0;
	tablica = nullptr;
}
TabWektorow::TabWektorow(int n)
{
	this->n = n;
	wektor tmp;
	tablica = new wektor[n];
	for (int i = 0; i < n; ++i)
	{
		tablica[i] = tmp;
	}
}
TabWektorow::TabWektorow(int n, wektor* tab)
{
	this->n = n;
	tablica = new wektor[n];
	for (int i = 0; i < n;++i)
	{
		tablica[i] = tab[i];
	}
}
void TabWektorowSort::WstawWektor(wektor& tmp)
{
	this->n++;
	wektor*tmp1=this->tablica;
	this->tablica = new wektor[this->n];
	this->tablica[this->n - 1] = tmp;
	for (int i = 0; i < n - 1; ++i)
	{
		this->tablica[i] = tmp1[i];
	}
	this->Sortuj();

}
void TabWektorowSort::Sortuj() //Sortowanie przez wstawianie
{
	wektor temp;
	int j;
	for (int i = 0; i < this->n; ++i)
	{
		temp = tablica[i];
		for (j = i - 1; j >= 0 && tablica[j].dlug() > temp.dlug(); j--)
		{
			tablica[j + 1] = tablica[j];
		}
		tablica[j + 1] = temp;
	}
}
TabWektorowSort TabWektorowSort:: operator=(wektor& tmp)
{
	this->WstawWektor(tmp);
	return *this;
}
ostream& operator<<(ostream& tmp, TabWektorowSort tab)
{
	tmp << "Test operatora << wypisuje dlugosc wektorow" << endl;
	for (int i = 0; i < tab.n; ++i)
	{
		int test = tab.tablica[i].dlug();
		tmp << "Wektor"<<i<<" ma dlugosc: " << test<<endl;
	}
	return tmp;
}