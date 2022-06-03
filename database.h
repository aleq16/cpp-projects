/*#pragma once
#include <iostream>
#include <iomanip>
#include "bed.h"
#include "password.h"
#include "patient.h"
using namespace std;
class database {
public:
	void getPatientDatabase();
};
//the getPatientDatabase function
void getPatientDatabase() {
	int choice_pat;
	cout << "\n                         " << "WELCOME TO PATIENT'S DATABASE" << endl << endl;
	cout << "			" << "1.Add New Patient's Information" << endl;
	cout << "			" << "2.Edit a Patient's Information" << endl;
	cout << "			" << "3.Display a Patient's Information" << endl;
	cout << "			" << "4.Delete a Patient's Information" << endl;
	cout << "			" << "5.Display Entire Patient Database" << endl;
	cout << "			" << "6.Total Number of Patients" << endl;
	cout << "			" << "7.Check for doctor availability" << endl;
	cout << "			" << "8.Exit" << endl;
	cout << right << setw(80) << setfill('-') << "----------" << endl;

	cout << right << setw(60) << setfill(' ') << "\nEnter the number corresponding to your choice:" << endl << endl;
	cin >> choice_pat;
	system("cls");
	switch (choice_pat) {
	case 1: {
		//addPat()
		addPat();
		break;
	}
	case 2: {
		//editPat()  
		patient p;
		editPat(p);
		break;
	}
	case 3: {
		//displayPat()
		displayPat();
		break;
	}
	case 4: {
		//deletePat()
		deletePat();
		break;
	}
	case 5: {
		//dispPatDatabase()
		dispPatDatabase();
		break;
	}
	case 6: {
		//numberOfPats()
		numberofPats();
		break;
	}


	case 8: {
		//exit	
		exit(0);
		break;
	}

	}
}
*/