#ifndef _polygon_h_
#define _polygon_h_

//EX3_02
#include <iostream>
using namespace std;

class RegularPolygon
{
private:
	int n; //number of sides of a polygon
	double side; //length of each side
	double x; //x-coordinate of the polygon
	double y; //y-coordinate of the polygon
public:
	RegularPolygon(); //constructor that creates a regular polygon
	RegularPolygon(int s, double l); //s is the number of sides, l is the side length
	RegularPolygon(int s, double l, double w, double z); //s is the number of sides, l is the side length, w is the x-coordinate, z is the y-coordinate
	int getSides(); //return sides
	double getLength(); //return side length
	double getx(); //return x
	double gety(); //return y
	double getPerimeter(); //n*length
	double getArea(); //equation given in book
};

#endif
