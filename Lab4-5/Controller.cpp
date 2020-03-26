#include "Controller.h"

//function which creates an object of type Cheltuiala and adds it to Repository
//In: an integer nrap (apartment number), an integer suma (the sum of expense), and a string tip (the type of expense)
//Out:
void Controller::addCheltuiala(int nrap, int suma, const char* tip)
{
	Cheltuiala c(nrap, suma, tip);
	this->repo.addElem(c);
}

//function which deletes an object of type Cheltuiala which has the same apartment number as the integer nrap 
//In:an integer nrap (apartment number)
//Out:
void Controller::deleteCheltuialaByAp(int nrap)
{
	for (int i = 0; i < this->repo.getSize(); i++)
		if (this->repo.getAll()[i].getNrAp() == nrap)
			this->repo.deleteElem(i);
}

//function which updates an object of type Cheltuiala which have the same apartment number as the integer nrap and the same type of expense
//as the string tip
//In:an integer nrap (apartment number), an integer newSuma (new sum of the Cheltuiala object), a string tip (type of expense)
//Out:
void Controller::updateCheltuialaBySum(int nrap, int newSuma, const char* tip)
{
	for (int i = 0; i < this->repo.getSize(); i++)
		if ((this->repo.getAll()[i].getNrAp() == nrap) && (strcmp(this->repo.getAll()[i].getTip(), tip) == 0))
			this->repo.getAll()[i].setSuma(newSuma);
}

