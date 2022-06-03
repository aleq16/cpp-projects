#pragma once
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

void getBedDatabase();

class bed {
public:
	int total = 351;
	friend void getStatus();
	friend void getBedDatabase();
};

//the getStatus function
void getStatus()
{
	bed b;
	cout << "\n\tTotal Number of Beds in the hospital:" << b.total << endl;
	fstream file("patient.txt");
	file.seekg(0);
	string fname, lname, occupation, p_city, dis, addDate, relDate, dept;
	int p_age, p_ID, count = 0;
	long double phnumber, bill;
	while (file >> p_ID >> fname >> lname >> p_age >> phnumber >> occupation >> p_city >> dis >> addDate >> relDate >> bill >> dept)
	{
		count++;
	}

	file.close();
	cout << "\n\tThe number of Occupied Beds=" << count << endl;
	cout << "\n\tThe number of Empty Beds=" << b.total - count << endl;

	cout << "\n\nEnter 1 to return to Bed Database\nEnter 2 to Exit." << endl;
	int c;
	cin >> c;
	if (c == 1) {
		system("cls");
		getBedDatabase();
	}

	else
		exit(0);

}
//the getBedDatabase function
void getBedDatabase() {
	int choice_bed;
	cout << "\nWELCOME TO BED DATABASE" << endl;
	cout << "1.Check Bed Status" << endl;
	cout << "2.Exit" << endl;
	cout <<"----------" << endl;

	cout << "\nEnter the number corresponding to your choice:" << endl;
	cin >> choice_bed;
	system("cls");
	switch (choice_bed)
	{
	case 1: {
		//getStatus()
		getStatus();
		break;
	}
	case 2: {
		//exit	
		exit(0);
		break;
	}
	}
}



