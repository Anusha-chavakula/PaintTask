#pragma once
#include "Shape.h"
class Circle : public Shape
{
    int radius, xcoordinate, ycoordinate;
public:
    Circle(int r, int x, int y);
    void display() override;
    void move(int x, int y);
    void unmove(int x, int y);
    void scale(int sval);
    void unscale(int sval);
    void rotate();
    void unrotate();
};

