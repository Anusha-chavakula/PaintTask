#include "Scale.h"
#include "Shape.h"
Scale::Scale(Shape* a, int z)
{
	this->shapes = a;
	this->z = z;

}
void Scale::execute()
{
	shapes->scale(z);
}
void Scale::unexecute()
{
	shapes->unscale(z);
}