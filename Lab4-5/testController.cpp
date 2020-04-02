#include "testController.h"
#include "Repo.h"
#include "Cheltuiala.h"
#include "Controller.h"
#include <assert.h>
#include <string.h>

void testCtrl()
{
	Repo r;
	Controller ctrl(r);
	
	ctrl.addCheltuiala(1,17, 500, "gaz");
	ctrl.addCheltuiala(2,18, 200, "curent");
	assert(r.getSize() == 2);
	assert(r.getItemFromPos(0).getNrAp() == 17);

	ctrl.deleteCheltuiala(1);
	assert(r.getItemFromPos(0).getNrAp() == 18);
	assert(r.getSize() == 1);
	
	ctrl.addCheltuiala(3,81, 100, "mancare");
	assert(r.getSize() == 2);
	assert(r.getItemFromPos(1).getId() == 3);

	ctrl.updateCheltuialaBySum(81, 50, "mancare");
	assert(r.getItemFromPos(1).getSuma() == 50);

	cout << "Controller asserts verified..." << endl;

}
