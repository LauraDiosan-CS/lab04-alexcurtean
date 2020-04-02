#pragma once
#include "Controller.h"

class Ui
{	
private:
	Controller ctrl;
	int printMenu();
public:
	Ui(Controller &ctrl) : ctrl{ ctrl } {}
	void run();
};

