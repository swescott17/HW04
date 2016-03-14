#ifndef _HW3_h
#define _HW3_H

#include <iostream>
using namespace std;

class stackOfString
{
private:
	int size;
	int element[100];
public: //follows the example in 10.9 create a way to make it pass characters through
	stackOfString();
	bool isEmpty() const;
	int getSize() const;
	int peek() const;
	int pop();
	void push(int value);
	
};

#endif
