#ifndef _HW3_h
#define _HW3_H

//EX3_01
#include <iostream>
using namespace std;

class stackOfString
{
private:
	int size;
	char element[100];
public: //follows the example in 10.9 create a way to make it pass characters through
	stackOfString();
	bool palindrome(const string& s); //the validity of a palindrome
	bool isEmpty() const; //checks if string is empty
	int getSize() const; //returns size
	int peek() const;
	char pop(); //returns what was put in backwards
	void push(char c); //pushes the next character in string
	char top(); 
	
};

#endif
