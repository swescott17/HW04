#include "Thatdothfile.h"
using namespace std;

//EX3_01

stackOfString::stackOfString()
{
	size = 0;
}


bool stackOfString::isEmpty() const
{
	return size == 0;
}
bool stackOfString::palindrome(const string& s)
{
	stackOfString stack;
	string k = ""; //empty string to check if the characters of entered string are the same backwards and forwards
	for (int i = 0; i < s.length(); i++)
	{
		stack.push(s[i]); //pushes each char into array
		
	}
	{
		while (!stack.isEmpty())
		{
			k += stack.top(); //allocates all chars into a string
			cout << stack.pop(); //returns all of the chars backwards
			
		}
		
	}
	
	
	if (k == s)
	{
	
		cout << " is a palindrome." << endl; //got it right
		return true;
	}
	else 
	{
		cout << " is not a palindrome." << endl; //nope
	return false;
	}
	
}
int stackOfString::getSize() const 
{
	return size;
}

char stackOfString::top()
{
	return element[0];
}

int stackOfString::peek() const
{
	return element[size - 1];
}
void stackOfString::push(char value) //enters a value for each step in the array
{
	element[size++] = value;
}

char stackOfString::pop() //pushes back what was entered from the push function
{
	return element[--size];
}