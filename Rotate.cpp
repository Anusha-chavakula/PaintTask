#include "Rotate.h"
#include "Shape.h"
Rotate::Rotate(Shape* a)
{
	this->shapes = a;


}
void Rotate::execute()
{
	shapes->rotate();
}
void Rotate::unexecute()
{
	shapes->unrotate();
}