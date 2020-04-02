#include "testRepository.h"
#include <iostream>
#include "Cheltuiala.h"
#include "Repo.h"
#include <assert.h>
#include <string.h>

using namespace std;

void testRepo()
{
	Repo repo;
	Cheltuiala c1(1,81, 200, "gaz");
	Cheltuiala c2(2,17, 150, "apa");
	Cheltuiala c3(3,25, 20, "alimente");

	repo.addElem(c1);
	repo.addElem(c2);
	assert(repo.getSize() == 2);

	repo.addElem(c3);
	Cheltuiala* v1 = repo.getAll();
	assert(v1[0].getNrAp() == 81);
	assert(v1[2].getSuma() == 20);

	Cheltuiala c4 = repo.getItemFromPos(0);
	assert(c4.getSuma() == 200);

	repo.deleteElem(1);
	assert(repo.getSize() == 2);
	
	cout << "Repo asserts verified..." << endl;
}
