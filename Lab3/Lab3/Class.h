
#pragma once
#ifndef class_h
#define class_h


#include <iostream>
#include <string>
#include <fstream>
#include <cmath>
using namespace std;

class punkt
{
private:
	int x, y;

public:
	punkt();
	punkt(int a, int b);
	void zmiana(int a, int b);
	void drukuj();
	void operator+=(punkt& tmp);
	//punkt operator=(punkt& tmp);
	bool operator==(punkt& tmp);
	punkt operator+(punkt& tmp);
	friend std::ostream& operator << (ostream& output, const punkt pkt);

};

class wektor: public punkt
{
private:
	int dlugosc;
	float kierunek;
public:
	wektor();
	wektor(int x, int y);
	void drukuj();
	void zmiana(int x,int y);
	int dlug();
	bool operator ==(wektor& tmp)
	{
		if (this->dlugosc == tmp.dlugosc)return true;
		else
		{
			return false;
		}
	}
};

class TabWektorow
{
protected:
	int n;
	wektor* tablica;
public:
	TabWektorow();
	TabWektorow(int n);
	TabWektorow(int n,wektor*tab);

};

class TabWektorowSort:public TabWektorow {
private:
public:
	void WstawWektor(wektor& tmp);
	void Sortuj();
	TabWektorowSort operator=(wektor& tmp);
	friend ostream& operator<<(ostream& tmp, TabWektorowSort tab);
};
#endif