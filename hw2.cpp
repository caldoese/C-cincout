//hw2.cpp-CS1210 second homework program
//Caleb Doese
//8-30-21

#include <iostream>
using namespace std;

int main() {
	string firstName;
	string lastName;
		cout << "What is your first name?" << endl;
		cin >> firstName;
		cout << "What is your last name?" << endl;
		cin >> lastName;
		cout << "Hello, " << firstName << " " << lastName << endl;
	int userAge;
		cout << "What is your age?" << endl;
		cin >> userAge;
		cout << "Your 100 years birthday will be celebrated in " << 100 - userAge << " years." << endl;
	float userCash;
		cout << "How much cash is in your pocket?" << endl;
		cin >> userCash;
	int userDollars = userCash;
	int userCents = userCash * 100;
		cout << "You have " << userDollars << " dollars in your pocket." << endl
		     << "You have exactly " << userCents << " cents in your pocket." << endl; 
		cout << "Goodbye " << firstName << " " << lastName << endl;
return 0;
}




