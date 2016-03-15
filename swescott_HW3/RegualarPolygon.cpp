#include "RegularPolygon.h"
using namespace std;

//Ex3_02
RegularPolygon::RegularPolygon() //no-arg constructor
{
	n = 3;
	side = 1;
	x = 0;
	y = 0;
}

RegularPolygon::RegularPolygon(int s, double l) //2 arg constructor asking for number of sides and length
{
	x = 0;
	y = 0;
	n = s;
	side = l;
}

RegularPolygon::RegularPolygon(int s, double l, double w, double z) //4 arg constructor asking for number of sides, length, x-coordinate, and y-coordinate
{
	n = s;
	side = l;
	x = w;
	y = z;
}
double RegularPolygon::getLength()
{
	return side;
}
double RegularPolygon::getx()
{
	return x;
}
double RegularPolygon::gety()
{
	return y;
}
int RegularPolygon::getSides()
{
	return n;
}
double RegularPolygon::getPerimeter() //returns the perimeter, since all sides has the same length it is sides multiplied by the side length
{
	return n*side;
}
double RegularPolygon::getArea() //returns the area of a polygon
{
	return (n * pow(side, 2)) / (4 * tan(3.14159 / n));
}