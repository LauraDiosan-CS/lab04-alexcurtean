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
	assert(c1.getId() == 0);

	Cheltuiala c2 = Cheltuiala(1,81, 250, "gaz");
	assert(c2.getNrAp() == 81);
	assert(c2.getSuma() == 250);
	assert(strcmp(c2.getTip(), "gaz") == 0);

	c2.setId(5);
	assert(c2.getId() == 5);
	assert(!(c2 == c1));
	cout << "Asserts for constructors verified." << endl;


}
