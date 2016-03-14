#include <iostream>
#include <string>
#include "Thatdothfile.h"
using namespace std;

/*void characters(string s) //when a string is input, the length is compared and so is the character at each point
{
	int k = 0;
	int f = s.length();
	if (f % 2 == 0)
	{
		for (unsigned i = 0; i < (f / 2); i++) //compare the length at different points
		{

			if (s.at(i) != s.at((f - i)))
			{
				k++;
			}
		}
	}
	else
	{
		for (unsigned w = 0; w < (f / 2); w++) //compare the length at different points
		{

			if (s.at(w) != s.at((f - w))) //fix this up
			{
				k++;
			}
		}
	}
	if (k > 0)
		cout << "The string was not a palindrome." << endl;
	else
		cout << "The string is a palindrome." << endl;
}*/

int main()
{

	stackOfString stack;

	for (int i = 0; i < 10; i++)
	{
		stack.push(i);
	}
	{
		while (!stack.isEmpty())
		{
			cout << stack.pop() << " ";
		}
	}

	
	return 0;
}
