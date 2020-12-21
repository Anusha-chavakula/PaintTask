#include "CommandManager.h"
#include "UndoRedoCommand.h"
#include<stack>
#include "shape.h"
#include<iostream>
using namespace std;
void CommandManager::invoke(UndoRedoCommand* obj)
{
	obj->execute();
	undostack.push(obj);
}
void CommandManager::undoCommand()
{
	UndoRedoCommand* temp;
	if (!undostack.empty())
	{
		temp = undostack.top();
		redostack.push(temp);
		temp->unexecute();
		undostack.pop();
	}
	else
	{
		cout << "No Action to perform";
	}
}
void CommandManager::redoCommand()
{
	UndoRedoCommand* temp;
	if (!redostack.empty())
	{
		temp = redostack.top();
		undostack.push(temp);
		temp->execute();
		redostack.pop();
	}
	else
	{
		cout << "No action to perform\n";
	}
}
