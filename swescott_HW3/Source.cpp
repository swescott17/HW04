#include <iostream>
#include <string>
#include "Thatdothfile.h"
using namespace std;

int main()
{

	stackOfString stack; //problem 10.5 test code

	string name;
	cout << "Enter a string." << endl; //enter a string in order to see if it is a palindrome
	cin >> name;

	stack.palindrome(name); //tests if it is a palindrome
	
	return 0;
}
