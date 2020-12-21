#pragma once
#include "UndoRedoCommand.h"
#include "Shape.h"
class Scale :public UndoRedoCommand
{
public:
    Shape* shapes;
    int z;
    Scale(Shape* a, int z);
    void execute();
    void unexecute();
};

