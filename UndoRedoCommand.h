#pragma once
class UndoRedoCommand
{
public:
	virtual void execute();
	virtual void unexecute();

};

