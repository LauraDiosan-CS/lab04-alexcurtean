// Lab4-5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "testCheltuiala.h"
#include "Cheltuiala.h"
#include "testRepository.h"
#include "testController.h"
#include "Repo.h"
#include "Controller.h"
#include "Ui.h"
using namespace std;

int main()
{
    testConstructori();
    testRepo();
    testCtrl();
    Repo repo;
    Controller ctrl(repo);
    Ui ui(ctrl);
    ui.run();

}


