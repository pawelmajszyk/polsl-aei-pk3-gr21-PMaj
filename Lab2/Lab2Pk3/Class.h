#pragma once
#ifndef class_h
#define class_h


#include <iostream>
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
	//void operator=(punkt& tmp);
	bool operator==(punkt& tmp);
	punkt operator+(punkt& tmp);
	std::ostream& operator<<(ostream& os,const punkt& tmp);
};


class tablica
{
private:
	int dl;
	punkt* tab;
public:
	tablica();
	tablica(int* x, int* y,int dlugosc);


};


#endif