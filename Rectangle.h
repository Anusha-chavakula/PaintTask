#pragma once
#include "Shape.h"
class Rectangle : public Shape
{
    int length, breadth, xcoordinate, ycoordinate;
public:
    Rectangle(int l, int b, int c_x, int c_y);
    void display();
    void move(int x, int y);
    void unmove(int x, int y);
    void scale(int sval);
    void unscale(int sval);
    void rotate();
    void unrotate();
};

