#pragma once
#include "UndoRedoCommand.h"
#include "Shape.h"
class Rotate : public UndoRedoCommand
{
public:
    Shape* shapes;
    int l, b;
    Rotate(Shape* a);
    void execute();
    void unexecute();
};

