#include "Controller.h"

//function which creates an object of type Cheltuiala and adds it to Repository
//In: an integer id, an integer nrap (apartment number), an integer suma (the sum of expense), and a string tip (the type of expense)
//Out:
void Controller::addCheltuiala(int id, int nrap, int suma, const char* tip)
{
	Cheltuiala c(id, nrap, suma, tip);
	this->repo.addElem(c);
}

//function which deletes an object of type Cheltuiala which has the same id as the integer id
//In:an integer id 
//Out:
void Controller::deleteCheltuiala(int id)
{
	for (int i = 0; i < this->repo.getSize(); i++)
		if (this->repo.getItemFromPos(i).getId() == id)
			this->repo.deleteElem(i);
}

//function which deletes all objects of type Cheltuiala which have the same apartment number as the integer nrap
//In:an integer nrap (apartment number)
//Out
void Controller::deleteCheltuieliByAp(int nrap)
{
	for (int i = 0; i < this->repo.getSize(); i++) 
	
		if (this->repo.getAll()[i].getNrAp() == nrap) {
			this->repo.deleteElem(i);
			i--;
		}
}

//function which deletes all ojects of type Cheltuiala which have the same type as the string tip
//In:a string tip (type of expense)
//Out:
void Controller::deleteCheltuieliByType(const char* tip)
{
	for (int i = 0; i < this->repo.getSize(); i++)
		if (strcmp(this->repo.getItemFromPos(i).getTip(), tip) == 0) {
			this->repo.deleteElem(i);
			i--;
		}
}

//function which deletes all objects of type Cheltuiala which have apartment number between these 2 values (int nrap1, int nrap2)
//In: two integers (nrap1, nrap2)
//Out:
void Controller::deleteCheltuieliByAp(int nrap1, int nrap2)
{
	for (int i = 0; i < this->repo.getSize(); i++)
		if (this->repo.getItemFromPos(i).getNrAp() >= nrap1 && this->repo.getItemFromPos(i).getNrAp() <= nrap2) {
			this->repo.deleteElem(i);
			i--;
		}		
}

//function which updates an object of type Cheltuiala which have the same id as the integer id
//In: an integer id , an integer newNrAp , an integer newSum, a string newType
//Out:
void Controller::updateCheltuiala(int id, int newNrAp, int newSum, char* newType)
{
	for(int i = 0;i < this->repo.getSize(); i++)
		if (this->repo.getAll()[i].getId() == id) {
			this->repo.getAll()[i].setNrAp(newNrAp);
			this->repo.getAll()[i].setSuma(newSum);
			this->repo.getAll()[i].setTip(newType);

		}
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

//function which prints all objects of type Cheltuiala from Repository
//In:
//Out:
void Controller::printCheltuieli()
{
	Cheltuiala* sir = this->repo.getAll();
	int lung = this->repo.getSize();
	for (int i = 0; i < lung; i++)
		cout << sir[i].getId() << "," << sir[i].getNrAp() << "," << sir[i].getSuma() << "," << sir[i].getTip() << endl;
}

//function which prints all objects of type Cheltuiala which have the same apartment number as the integer nrap
//In: an integer nrap
//Out:
void Controller::printCheltuialiByAp(int nrap)
{
	Cheltuiala* sir = this->repo.getAll();
	int lung = this->repo.getSize();
	for (int i = 0; i < lung; i++) {
		if (sir[i].getNrAp() == nrap)
			cout << sir[i].getId() << "," << sir[i].getNrAp() << "," << sir[i].getSuma() << "," << sir[i].getTip() << endl;
	}
		
	
}

//function which prints all objects of type Cheltuiala which have the sum greater than integer sum value
//In: an integer sum
//Out:
void Controller::printCheltuieliGreaterThan(int sum)
{
	Cheltuiala* sir = this->repo.getAll();
	int lung = this->repo.getSize();
	for (int i = 0; i < lung; i++) 
		if (sir[i].getSuma() > sum)
			cout << sir[i].getId() << "," << sir[i].getNrAp() << "," << sir[i].getSuma() << "," << sir[i].getTip() << endl;
}

//function which prints all objects of type Cheltuiala which have the sum equal to integer sum value
//In: an integer sum
//Out:
void Controller::printCheltuieliBySum(int sum)
{
	Cheltuiala* sir = this->repo.getAll();
	int lung = this->repo.getSize();
	for (int i = 0; i < lung; i++) 
		if (sir[i].getSuma() == sum)
			cout << sir[i].getId() << "," << sir[i].getNrAp() << "," << sir[i].getSuma() << "," << sir[i].getTip() << endl;
}

//function which deletes all objects of type Cheltuiala which have the type different from the string tip value
//In: a string tip
//
void Controller::filterByType(const char* tip)
{
	for (int i = 0; i < this->repo.getSize(); i++) 
		if (strcmp(this->repo.getItemFromPos(i).getTip(), tip) != 0) {
			this->repo.deleteElem(i);
			i--;
		}

}

//function which deletes all objects of type Cheltuiala which have the sum greater than integer value sum
//In:an integer sum
//
void Controller::filterBySum(int sum)
{
	for(int i = 0; i < this->repo.getSize(); i++)
		if (this->repo.getItemFromPos(i).getSuma() >= sum) {
			this->repo.deleteElem(i);
			i--;
		}
}

//function which returns the sum of all expenses which have the type equal to string value tip
//In: a string value tip
//Out: an integer sum (the sum of expenses with the same type as tip)
int Controller::sumCheltuielyByTip(const char* tip)
{
	int sum = 0;
	for (int i = 0; i < this->repo.getSize(); i++)
		if (strcmp(this->repo.getItemFromPos(i).getTip(), tip) == 0)
			sum = sum + this->repo.getItemFromPos(i).getSuma();
	
	return sum;
}

//function which returns the most valueable expense of an apartment
//In: an integer nrap (apartment number)
//Out: an object of type Cheltuiala 
Cheltuiala Controller::maxCheltuialaByAp(int nrap)
{
	Cheltuiala c1;
	int max = 0;
	
	for(int i = 0; i < this->repo.getSize(); i++)
		if (this->repo.getItemFromPos(i).getNrAp() == nrap && this->repo.getItemFromPos(i).getSuma() > max) {
			max = this->repo.getItemFromPos(i).getSuma();
			c1 = this->repo.getItemFromPos(i);
		}

	return c1;
}

