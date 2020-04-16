#include "Logout.h"
#include <iostream>
#include <stdlib.h>
#include <windows.h>
#include <string>

using namespace std;

void Logout::displayLogout_LoginPage()
{	
	
	system("CLS");
	Sleep(500);
	
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


void Logout::displayLogout_MainPage()
{
	system("CLS");
	Sleep(500);
	
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

