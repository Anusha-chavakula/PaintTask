
#include "Square.h"
#include<iostream>
using namespace std;
Square::Square(int l, int x, int y)
{
	side = l;
	xcoordinate = x;
	ycoordinate = y;
}
void Square::move(int x, int y)
{
	xcoordinate += x;
	ycoordinate += y;
}
void Square::unmove(int x, int y)
{
	xcoordinate -= x;
	ycoordinate -= y;
}
void Square::scale(int sval)
{
	side = side + sval;
}
void Square::unscale(int sval)
{
	side = side - sval;
}
void Square::rotate()
{
	xcoordinate = xcoordinate + ycoordinate;
	ycoordinate = xcoordinate - ycoordinate;
	xcoordinate = xcoordinate - ycoordinate;
}
void Square::unrotate()
{
	xcoordinate = xcoordinate + ycoordinate;
	ycoordinate = xcoordinate - ycoordinate;
	xcoordinate = xcoordinate - ycoordinate;
}
void Square::display() {
	cout << "Square Side: " << side << " X Coordinate: " << xcoordinate << " Y Coordinate: " << ycoordinate << endl;
}
