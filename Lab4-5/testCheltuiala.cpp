#include "testCheltuiala.h"
#include <iostream>
#include "Cheltuiala.h"
#include <assert.h>
#include <string.h>

void testConstructori()
{
	Cheltuiala c1;
	assert(c1.getNrAp() == 0);
	assert(c1.getSuma() == 0);
	assert(c1.getTip() == NULL);

	Cheltuiala c2 = Cheltuiala(81, 250, "gaz");
	assert(c2.getNrAp() == 81);
	assert(c2.getSuma() == 250);
	assert(strcmp(c2.getTip(), "gaz") == 0);

	cout << "Asserts for constructors verified." << endl;


}
