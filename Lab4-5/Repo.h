#pragma once
#include "Cheltuiala.h"
class Repo
{
private:
	Cheltuiala cheltuieli[20];
	int noCheltuieli;
public:
	Repo();
	~Repo();

	void addElem(Cheltuiala &c);
	void deleteElem(int pos);
	Cheltuiala getItemFromPos(int pos);
	Cheltuiala* getAll();
	int getSize();
};

