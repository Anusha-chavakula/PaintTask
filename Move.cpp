#include "Move.h"
#include "Shape.h"

Move::Move(Shape* sh, int x, int y)
{
	this->shapes = sh;
	this->x = x;
	this->y = y;

}
void Move::execute()
{
	shapes->move(x, y);
}
void Move::unexecute()
{
	shapes->unmove(x, y);
}
