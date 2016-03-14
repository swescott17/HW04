#include "Thatdothfile.h"
using namespace std;

stackOfString::stackOfString()
{
	size = 0;
}


bool stackOfString::isEmpty() const
{
	return size == 0;
}

int stackOfString::getSize() const 
{
	return size;
}

int stackOfString::peek() const
{
	return element[size - 1];
}
void stackOfString::push(int value)
{
	element[size++] = value;
}

int stackOfString::pop()
{
	return element[--size];
}