#include<iostream>
#include<fstream>
#include<iomanip>
#include<string>
#include<stdlib.h>
#include<stdio.h> 
#include "password.h"
#include "patient.h"
#include "bed.h"
using namespace std;

//function declarations
int chooseMain();

//the main function
int main() {

	password pass;
	pass.verify_password();

	system("cls");

	
	cout << "HOSPITAL MANAGEMENT SYSTEM" << endl;
	
	cout << "--------------------------" << endl;

	cout << "1.Main Menu" << endl;
	cout << "2.Exit" << endl;
	cout << "--------------------------" << endl;
	cout << "Enter your choice:" << endl;
	int choice1;
	cin >> choice1;

	if (choice1 == 1) {
		system("cls");
		int var = chooseMain();
		system("cls");

		switch (var) {

		case 1: {
			
			system("cls");
			getPatientDatabase();
			break;

		}

		case 2: {
			
			system("cls");
			getBedDatabase();
			break;
		}

		case 3:
		{
			return 0;
			break;
		}
		default:
			cout << "\nEnter a valid option." << endl;
		}

	}
	else if (choice1 == 2) {
		return 0;
	}
	else
		cout << "\nEnter a valid option." << endl;



}
//the chooseMain function
int chooseMain() {

	int choice2;
	cout << "\nMAIN MENU" << endl;
	cout << "---------------------------" << endl;
	cout << "1.Patients' Database" << endl;
	cout << "2.Hospital Bed Availability" << endl;
	cout << "3.Exit" << endl;
	cout << "---------------------------" << endl;

	cout << "\nChoose one:" << endl;
	cin >> choice2;
	return choice2;

}