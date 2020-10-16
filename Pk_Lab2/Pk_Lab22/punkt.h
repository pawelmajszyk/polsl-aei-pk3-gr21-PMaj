#ifndef punkt_h
#define punkt_h

class punkt
{
	int x;
	int y;
public:
	punkt(punkt& p);// konstruktor kopiujacy
	punkt(float x_ = 0, float y_ = 0);
	void dodaj(punkt& p);// dodanie wektorow przez refeencje
	void dodaj(punkt* p); // dodanie wektorow przez wskaznik
	void drukuj();
	bool compare(punkt&pkt);// porownanie czy pkt sa takie same

	punkt operator=(punkt& punkt);
	void operator+=(const punkt punkt);
	bool operator==(const punkt punkt);
	punkt& operator+(punkt& punkt);
};


#endif