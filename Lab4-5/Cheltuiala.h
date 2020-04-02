#pragma once
#include <iostream>

using namespace std;

class Cheltuiala
{
private:
	int id;
	int nrap;
	int suma;
	char* tip;

public:
	Cheltuiala();  //constructor fara parametrii
	Cheltuiala(int id,int nr, int s, const char* ti);   //constructor cu parametrii
	Cheltuiala(const Cheltuiala& c);   //constructor de copiere
	~Cheltuiala();
	int getId();
	int getNrAp();
	int getSuma();
	char* getTip();
	void setId(int id);
	void setNrAp(int nr);
	void setSuma(int s);
	void setTip(char* t);
	bool operator==(const Cheltuiala& c);
	Cheltuiala& operator=(const Cheltuiala& c);
};

