#pragma once
#ifndef class_h
#define class_h


#include <iostream>
#include <string>
#include <fstream>
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
	void operator+=(punkt&tmp);
	/*punkt& operator=(punkt& tmp);*/
	bool operator==(punkt& tmp);
	punkt operator+(punkt& tmp);
	friend std::ostream& operator << (ostream& output, const punkt pkt);
	
};


class tablica
{
private:
	int dl;
	punkt* tab;
public:
	tablica();
	tablica(int* x, int* y,int dlugosc);
	~tablica();
	void wyswietl();
	void operator =(tablica& tmp);
	bool operator ==(tablica& tmp);
	friend std::ostream& operator<<(ostream& output,  tablica tab);
	void operator +=(tablica& tmp);
	void operator [](int i);
	tablica(string plik);

};


#endif