
#include "Shape.h"
class Square : public Shape
{
    int side, xcoordinate, ycoordinate;
public:
    Square(int, int, int);
    void display() override;
    void move(int x, int y);
    void unmove(int x, int y);
    void scale(int sval);
    void unscale(int sval);
    void rotate();
    void unrotate();
};
