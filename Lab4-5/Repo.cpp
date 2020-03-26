#include "Repo.h"

//Constructor implicit
//In:
//Out: an empty object of type Repo
Repo::Repo()
{
	this->noCheltuieli = 0;
}

//Destructor
//In:
//Out:
Repo::~Repo() {}

//function which add an object of type Cheltuiala in Repo
//In: an object c of type Cheltuiala
//Out:
void Repo::addElem(Cheltuiala &c)
{
	this->cheltuieli[this->noCheltuieli++] = c;
}

//function which deletes an object of type Cheltuiala from a specific index (int pos)
//In: an integer value (pos)
//Out:
void Repo::deleteElem(int pos)
{
	if (pos == noCheltuieli - 1)
		noCheltuieli--;
	
	else if (pos < 0 || pos> noCheltuieli - 1)
		cout << "Pozitie invalida";

	else {
		for (int i = pos; i < noCheltuieli - 1;i++ )
			cheltuieli[i] = cheltuieli[i + 1];
		noCheltuieli--;

	}
}

//function which returns an object of type Cheltuiala from a specific index (int pos)
//In: an integer value (pos)
//Out: an object of type Cheltuiala 
Cheltuiala Repo::getItemFromPos(int pos)
{
	return this->cheltuieli[pos];
}

//function which returns the array with elements of type Cheltuiala from Repository
//In:
//Out: an array which contains all objects of type Cheltuiala
Cheltuiala* Repo::getAll()
{
	return this->cheltuieli;
}

//function which returns the size of the array 
//In:
//Out: the size of array (the number of objects Cheltuiala from Repository)
int Repo::getSize()
{
	return this->noCheltuieli;
}
