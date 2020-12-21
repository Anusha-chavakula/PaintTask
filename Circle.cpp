#include "Circle.h"
#include<iostream>

using namespace std;

Circle::Circle(int r, int x, int y)
{
	radius = r;
	xcoordinate = x;
	ycoordinate = y;
}
void Circle::move(int x, int y)
{
	xcoordinate += x;
	ycoordinate += y;
}
void Circle::unmove(int x, int y)
{
	xcoordinate -= x;
	ycoordinate -= y;
}
void Circle::scale(int sval)
{
	radius = radius + sval;
}
void Circle::unscale(int sval)
{
	radius = radius - sval;
}
void Circle::rotate()
{

	xcoordinate = xcoordinate + ycoordinate;
	ycoordinate = xcoordinate - ycoordinate;
	xcoordinate = xcoordinate - ycoordinate;
}
void Circle::unrotate()
{
	xcoordinate = xcoordinate + ycoordinate;
	ycoordinate = xcoordinate - ycoordinate;
	xcoordinate = xcoordinate - ycoordinate;
}
void Circle::display() {
	cout << "Circle  Radius= " << radius << " X Coordinate: " << xcoordinate << " Y Coordinate: " << ycoordinate << "\n";
}
