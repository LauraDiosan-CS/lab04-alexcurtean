#include "Ui.h"
#include <iostream>

using namespace std;

int Ui::printMenu()
{
	int opt;

	cout << endl << endl;
	cout << "0.Exit" << endl;
	cout << "1.Adauga cheltuiala." << endl;
	cout << "2.Afiseaza toate cheltuielile." << endl;
	cout << "3.Afiseaza toate cheltuielile unui apartament." << endl;
	cout << "4.Afiseaza toate cheltuielile care au suma mai mare decat o anumita valoare." << endl;
	cout << "5.Afiseaza toate cheltuielile care au suma o anumita valoare." << endl;
	cout << "6.Modifica o cheltuiala." << endl;
	cout << "7.Modifica suma unei cheltuieli." << endl;
	cout << "8.Sterge toate cheltuielile unui apartament." << endl;
	cout << "9.Sterge toate cheltuielile care au un anumit tip." << endl;
	cout << "10.Sterge toate cheltuielile apartamentelor cu numarul intre doua valori date." << endl;
	cout << "11Afiseaza suma totala a cheltuielilor pentru un anumit tip." << endl;
	cout << "12.Afiseaza cea mai scumpa cheltuiala a unui apartament." << endl;
	cout << "13.Ordoneaza descrescator cheltuielile care au un anumit tip." << endl;
	cout << "14.Pastreaza doar cheltuielile care au un anumit tip." << endl;
	cout << "15.Pastreaza doar cheltuielile cu valoare mai mica decat o anumita suma." << endl;
	cout << "16.UNDO" << endl;

	cout << "Alege o optiune: ";
	cin >> opt;
	return opt;

}

void Ui::run()
{
	this->ctrl.addCheltuiala(1, 81, 150, "curent");
	this->ctrl.addCheltuiala(2,81, 235, "alimente");
	this->ctrl.addCheltuiala(3,16, 120, "curent");
	this->ctrl.addCheltuiala(4,58, 343, "internet");
	this->ctrl.addCheltuiala(5,43, 120, "apa");


	int option = printMenu();
	while (option != 0) 
	{
		switch (option) 
		{
		case 1: {
			int id, nr, s;
			char* t = new char[20];
			cout << "Id:";
			cin >> id;
			cout << "Numar apartament:";
			cin >> nr;
			cout << "Suma de plata:";
			cin >> s;
			cout << "Tip:";
			cin >> t;
			this->ctrl.addCheltuiala(id, nr, s, t);
			break;
		}
		case 2: {
			this->ctrl.printCheltuieli();
			break;
		}
		case 3: {
			int nr;
			cout << "Nr apartament:";
			cin >> nr;
			this->ctrl.printCheltuialiByAp(nr);
			break;
		}
		case 4: {
			int sum;
			cout << "Suma:";
			cin >> sum;
			this->ctrl.printCheltuieliGreaterThan(sum);
			break;
		}
		case 5: {
			int sum;
			cout << "Suma:";
			cin >> sum;
			this->ctrl.printCheltuieliBySum(sum);
			break;
		}
		case 6: {
			int id, newSum, newNrAp;
			char* newType = new char[20];
			cout << "Id-ul cheltuielii:";
			cin >> id;
			cout << "Nr apartament nou:";
			cin >> newNrAp;
			cout << "Suma noua:";
			cin >> newSum;
			cout << "Tip nou:";
			cin >> newType;
			this->ctrl.updateCheltuiala(id, newNrAp, newSum, newType);
			break;

		}
		case 7: {
			int nrap, newSum;
			char* t = new char[20];
			cout << "Nr apartament:";
			cin >> nrap;
			cout << "Tip:";
			cin >> t;
			cout << "Suma noua:";
			cin >> newSum;
			this->ctrl.updateCheltuialaBySum(nrap, newSum, t);
			break;
		}
		case 8: {
			int nrap;
			cout << "Nr apartament:";
			cin >> nrap;
			this->ctrl.deleteCheltuieliByAp(nrap);
			break;
		}
		case 9:{
			char* t = new char[20];
			cout << "Tip:";
			cin >> t;
			this->ctrl.deleteCheltuieliByType(t);
			break;
		}
		case 10: {
			int nr1, nr2;
			cout << "Prima valoare:";
			cin >> nr1;
			cout << "A doua valoare:";
			cin >> nr2;
			this->ctrl.deleteCheltuieliByAp(nr1, nr2);
			break;
		}
		case 11: {
			char* t = new char[20];
			cout << "Tip:";
			cin >> t;
			int s = this->ctrl.sumCheltuielyByTip(t);
			
			if (s == 0)
				cout << "Nu exista nici o cheltuiala pt acest tip." << endl;
			else
				cout << "Suma cheltuielilor pentru " << t << " este " << s<<" lei" << endl;
			
			break;
		}
		case 12: {
			int nrap;
			cout << "Numar apartament:";
			cin >> nrap;
			Cheltuiala c = this->ctrl.maxCheltuialaByAp(nrap);
			cout << c.getId() << "," << c.getNrAp() << "," << c.getSuma() << "," << c.getTip() << endl;
			break;
		}
		case 14: {
			char* t = new char[20];
			cout << "Tip:";
			cin >> t;
			this->ctrl.filterByType(t);
			break;
		}
		case 15: {
			int sum;
			cout << "Suma:";
			cin >> sum;
			this->ctrl.filterBySum(sum);
			break;
		}


		}
		option = printMenu();
	}

	cout << "Program terminat...";

}
