/*
	This is the implementation file for the NewAccount class in the NewAccount.h headerfile.
	
	This file is used to define the function definitions declared inside the NewAccount.h headerfile
*/

#include "NewAccount.h"			// This uses the NewAccount headerfile
#include <string>
#include <iostream>
#include <stdlib.h>


using namespace std;

void NewAccount::getFirstName()		// defines the function prompting the user's first name
{
	
	cout << "Please Enter your name down below:" << "\n" << endl;
		
	cout << "First Name -> ";
	cin >> firstName;
	cout << endl;
	
}

void NewAccount::getLastName()		// defines the function prompting the user's last name
{
	
	cout << "Last Name -> ";
	cin >> lastName;
	
}


void NewAccount::welcomeSentence()	// welcome sentence function is made out of a sentence including user first and last name
{
	
	system("CLS");
	cout << "Welcome, " << firstName << " " << lastName;
	system("CLS");			// this is used for clear screen
	
}


int NewAccount::getAge()		// prompt user to input age
{
	
	cout << "Year -> ";		// ask for year
	cin >> year;
	cout << "\n";	
	
	cout << "Month -> ";		// ask for month
	cin >> month;
	cout << "\n";
	
	cout << "Day -> ";		// ask for day
	cin >> day;
	
	system("CLS");
	cout << "Is your birth date " << year << "/" << month << "/" << day << "?" << endl;
	cout << "Please Enter y/n:  ";
	
	string response;
	cin >> response;		// ask for input
	
	if (response == "y")
	{
		if (year <= 2001)	// check if the user is above 18 years of age
		{
			cout << "Perfect! You have created a new account!";
		}
		else
		{
			cout << "Sorry, you have not met the age requirement to register.";	// deny to register if age < 18
		}
	}
	
	else if (response == "n")
	{
		cout << "Sorry, please enter your age again.";
		system("CLS");
		
		NewAccount::getAge();
	}

