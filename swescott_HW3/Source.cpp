#include <iostream>
#include <string>
#include "Thatdothfile.h"
#include "RegularPolygon.h"
using namespace std;

int main()
{
	//EX3_01
	//See Thatdotfile.h for class and see stackofstring.cpp for the functions of the classes for 10.5
	stackOfString stack; //problem 10.5 test code

	string name;
	cout << "Enter a string." << endl; //enter a string in order to see if it is a palindrome
	cin >> name;

	stack.palindrome(name); //tests if it is a palindrome

	//EX3_02
	//See RegularPolygon.h and RegularPolygon.cpp for more information
	RegularPolygon l(6, 4);
	RegularPolygon k(10, 4, 5.6, 7.8);

	cout << "The first polygon has a perimeter of " << l.getPerimeter() << " and an area of " << l.getArea() << endl;
	cout << "The second polygon has a perimeter of " << k.getPerimeter() << " and an area of " << k.getArea() << endl;
	
	return 0;
}
