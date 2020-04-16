/*
	This Logout.h header file is used for exitting the program
*/

#ifndef LOGOUT_H			// starts to define the header file
#define LOGOUT_H

#include <iostream>
#include <string>

using namespace std;

class Logout
{
	private:
		string response;	// this private variable is used for user inputs
	
	public:
		void displayLogout_LoginPage();		// logout option in the login page
		void displayLogout_MainPage();		// logout option in the main menu
	
};

#endif
