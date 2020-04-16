/*
	This header file consists of the class NewAccount which contains various undefined functions used for creating new user accounts
*/

#ifndef NEWACCOUNT_H
#define NEWACCOUNT_H

#include <string>				// This includes the string file

using namespace std;

class NewAccount
{
	private:
		string firstName;		// Starting from here is the declaration of variables
		string lastName;
		int year;
		int month;
		int day;
		
	public:
		void getFirstName();		// this is for prompting user first name
		void getLastName();		// this is for prompting user last name
		void welcomeSentence();		// this is an individual welcome screen to display the name of user
		int getAge();			// this is for prompting user age
		
};


#endif
