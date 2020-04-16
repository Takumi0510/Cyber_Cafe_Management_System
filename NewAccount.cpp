#include "NewAccount.h"
#include <string>
#include <iostream>
#include <stdlib.h>
#include <windows.h>


using namespace std;

void NewAccount::getFirstName()
{
	
	cout << "Please Enter your name down below:" << "\n" << endl;
	
	Sleep(1500);
	
	cout << "First Name -> ";
	cin >> firstName;
	cout << endl;
	
}

void NewAccount::getLastName()
{
	
	cout << "Last Name -> ";
	cin >> lastName;
	
}


void NewAccount::welcomeSentence()
{
	
	system("CLS");
	cout << "Welcome, " << firstName << " " << lastName;
	Sleep(3000);
	system("CLS");
	
}


int NewAccount::getAge()
{
	
	cout << "Year -> ";
	cin >> year;
	cout << "\n";	
	
	cout << "Month -> ";
	cin >> month;
	cout << "\n";
	
	cout << "Day -> ";
	cin >> day;
	
	system("CLS");
	cout << "Is your birth date " << year << "/" << month << "/" << day << "?" << endl;
	cout << "Please Enter y/n:  ";
	
	string response;
	cin >> response;
	
	if (response == "y")
	{
		if (year <= 2001)
		{
			cout << "Perfect! You have created a new account!";
		}
		else
		{
			cout << "Sorry, you have not met the age requirement to register.";
		}
	}
	
	else if (response == "n")
	{
		cout << "Sorry, please enter your age again.";
		Sleep(1500);
		system("CLS");
		
		NewAccount::getAge();
	}

	

	
}

int main()
{

	NewAccount ryan;


	ryan.getFirstName();
	ryan.getLastName();	
	ryan.welcomeSentence();
	ryan.getAge();

}
