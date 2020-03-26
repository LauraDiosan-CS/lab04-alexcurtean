#pragma once
#include "Repo.h"
#include "Cheltuiala.h"

class Controller
{
private:
	Repo& repo;
public:
	Controller(Repo &repo) : repo(repo) {}

	void addCheltuiala(int nrap, int suma, const char* tip);
	
	void deleteCheltuialaByAp(int nrap);

	void updateCheltuialaBySum(int nrap, int newSuma, const char* tip);
};

