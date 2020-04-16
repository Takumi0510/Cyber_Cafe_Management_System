#ifndef NEWACCOUNT_H
#define NEWACCOUNT_H

#include <string>

using namespace std;

class NewAccount
{
	private:
		string firstName;
		string lastName;
		int year;
		int month;
		int day;
		
	public:
		void getFirstName();
		void getLastName();
		void welcomeSentence();
		int getAge();
		
};


#endif
