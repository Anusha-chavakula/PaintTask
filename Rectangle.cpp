#include "Rectangle.h"
#include "Shape.h"
#include<iostream>
using namespace std;
Rectangle::Rectangle(int l, int b, int x, int y)
{
	length = l;
	breadth = b;
	xcoordinate = x;
	ycoordinate = y;
}
void Rectangle::move(int x, int y)
{
	xcoordinate += x;
	ycoordinate += y;
}
void Rectangle::unmove(int x, int y)
{
	xcoordinate -= x;
	ycoordinate -= y;
}
void Rectangle::scale(int sval)
{
	length += sval;
	breadth += sval;
}
void Rectangle::unscale(int sval)
{
	length -= sval;
	breadth -= sval;
}
void Rectangle::rotate()
{

	xcoordinate = xcoordinate + ycoordinate;
	ycoordinate = xcoordinate - ycoordinate;
	xcoordinate = xcoordinate - ycoordinate;
}
void Rectangle::unrotate()
{
	xcoordinate = xcoordinate + ycoordinate;
	ycoordinate = xcoordinate - ycoordinate;
	xcoordinate = xcoordinate - ycoordinate;
}
void Rectangle::display()
{
	cout <<"Rectangle Length: " << length << " Breadth: " << breadth << " X Coordinate: " << xcoordinate << " Y Coordinate: " << ycoordinate << "\n";
}

