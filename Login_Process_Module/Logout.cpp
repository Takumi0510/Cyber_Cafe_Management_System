/*
	This implementation file is used for defining the logout features from the headerfile
*/

#include "Logout.h"
#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

void Logout::displayLogout_LoginPage()	// this function is defining the exit function on the login screen
{	
	
	system("CLS");
	
	cout << "You have chosen to log-out.";
	cout << "\n\n Are you sure?	Please confirm.";
	cout << "\tEnter: yes / no\t";

	cin >> response;
	
	if (response == "yes")
	{
		cout << "\n\n" << "You have successfully Logged-Out" << "\n" << endl;
		cout << "We hoped you enjoyed your time here." << endl;
		
		cout << "\n" << "You have not Logged in your account. You are Free of Charged." << endl;
	}
	
	else if (response == "no")
	{
		
		cout << "\n" << "You have chosen to return back to Login page.";
		
	}
}


void Logout::displayLogout_MainPage()	// this function is defining the exiting function on the main menu screen.
{	
	system("CLS");
	
	cout << "You have chosen to log-out.";
	cout << "\n\n Are you sure?	Please confirm.";
	cout << "\tEnter: yes / no\t";
	
	string response;
	cin >> response;
	
	if (response == "yes")
	{
		cout << "\n\n" << "You have successfully Logged-Out" << "\n" << endl;
		cout << "We hoped you enjoyed your time here." << endl;
		
		cout << "\n" << "Please pay at the front desk." << endl;
	}
	
	else if (response == "no")
	{
		
		cout << "You have chosen to return back to the Main Menu. Time will be reinitiated again.";
		
	}
}

