#pragma once
#include "Repo.h"
#include "Cheltuiala.h"

class Controller
{
private:
	Repo& repo;
public:
	Controller(Repo &repo) : repo(repo) {}

	void addCheltuiala(int id, int nrap, int suma, const char* tip);
	
	void deleteCheltuiala(int id);
	void deleteCheltuieliByAp(int nrap);
	void deleteCheltuieliByType(const char* tip);
	void deleteCheltuieliByAp(int nrap1, int nrap2);

	void updateCheltuiala(int id, int newNrAp, int newSum, char* newType);
	void updateCheltuialaBySum(int nrap, int newSuma, const char* tip);
	
	void printCheltuieli();
	void printCheltuialiByAp(int nrap);
	void printCheltuieliGreaterThan(int sum);
	void printCheltuieliBySum(int sum);

	void filterByType(const char* tip);
	void filterBySum(int sum);

	int sumCheltuielyByTip(const char* tip);
	Cheltuiala maxCheltuialaByAp(int nrap);

};

