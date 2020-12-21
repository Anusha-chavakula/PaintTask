#pragma once
#include "UndoRedoCommand.h"
#include "Shape.h"
class Move: public UndoRedoCommand
{
    int x, y;
public:
    Shape* shapes;
    Move(Shape* sh, int x, int y);
    void execute();
    void unexecute();
};

