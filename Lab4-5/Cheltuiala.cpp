#include "Cheltuiala.h"
#include <string>
#include <iostream>

using namespace std;

//Constructor implicit
//In:
//Out: an empty object of type Cheltuiala
Cheltuiala::Cheltuiala()
{	
	this->id = 0;
	this->tip = NULL;
	this->nrap = 0;
	this->suma = 0;
}

//Constructor with parameters
//In: a number (integer), a sum (integer) and a type (string)
//Out: an object of type Cheltuiala that contains the given info
Cheltuiala::Cheltuiala(int id,int nr, int s, const char* ti)
{
	this->id = id;
	this->nrap = nr;
	this->suma = s;
	this->tip = new char[strlen(ti) + 1];
	strcpy_s(this->tip, strlen(ti) + 1, ti);
}

//Copy constructor
//In: an object c of type Cheltuiala
//Out: another object of type Cheltuiala that contains the same info as c
Cheltuiala::Cheltuiala(const Cheltuiala& c)
{	
	this->id = c.id;
	this->nrap = c.nrap;
	this->suma = c.suma;
	this->tip = new char[strlen(c.tip) + 1];
	strcpy_s(this->tip, strlen(c.tip) + 1, c.tip);
}

//Deconstructor
//In: an object of type Cheltuiala
//Out: 
Cheltuiala::~Cheltuiala()
{
	if (this->tip) {
		delete[] this->tip;
		this->tip = NULL;
	}
}

//getter
//In: an object of type Cheltuiala
//Out: id of the Cheltuiala object
int Cheltuiala::getId()
{
	return this->id;
}

//getter
//In: an object of type Cheltuiala
//Out: apartment number of the Cheltuiala
int Cheltuiala::getNrAp()
{
	return this->nrap;
}

//getter
//In: an object of type Cheltuiala
//Out: sum of the Cheltuiala
int Cheltuiala::getSuma()
{
	return this->suma;
}

//getter
//In: an object of type Cheltuiala
//Out: type of the Cheltuiala
char* Cheltuiala::getTip()
{
	return this->tip;
}

//setter
//In: an object of type Cheltuiala and an id (integer)
//Out: the same object with a new id
void Cheltuiala::setId(int id)
{
	this->id = id;
}

//setter
//In: an object of type Cheltuiala and number of apartament (integer)
//Out: the same object with a new apartment number
void Cheltuiala::setNrAp(int nr)
{
	this->nrap = nr;
}

//setter
//In: an object of type Cheltuiala and a sum (integer)
//Out: the same object with a new sum
void Cheltuiala::setSuma(int s)
{
	this->suma = s;
}

//setter
//In: an object of type Cheltuiala and a type (string)
//Out: the same object with a new type
void Cheltuiala::setTip(char* t)
{
	if (this->tip)
		delete[] this->tip;

	this->tip = new char[strlen(t) + 1];
	strcpy_s(this->tip, strlen(t) + 1, t);
}


//comparator
//In: two object of type Cheltuiala (this and c)
//Out: true or false
bool Cheltuiala::operator==(const Cheltuiala& c)
{
	return this->id == c.id;
}

//assignment operator
//In: two object of type Cheltuiala (the current one, this, and c)
//Out: the new state of the current object (this)
Cheltuiala& Cheltuiala::operator=(const Cheltuiala& c)
{
	this->setId(c.id);
	this->setNrAp(c.nrap);
	this->setSuma(c.suma);
	this->setTip(c.tip);
	
	return *this;
}


