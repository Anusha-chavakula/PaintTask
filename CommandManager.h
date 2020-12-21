#pragma once
#include "UndoRedoCommand.h"
#include<stack>
#include "shape.h"
#include<iostream>
using namespace std;
class CommandManager
{
public:
	Shape* shapes;
	void invoke(UndoRedoCommand* obj);
	stack<UndoRedoCommand*> undostack;
	stack<UndoRedoCommand*> redostack;
	void undoCommand();
	void redoCommand();
};

