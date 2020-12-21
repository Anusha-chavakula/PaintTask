
#include <iostream>
#include "Shape.h"
#include "Square.h"
#include "Rectangle.h"
#include "Circle.h"
#include "UndoRedoCommand.h"
#include "CommandManager.h"
#include "Move.h"
#include "Rotate.h"
#include "Scale.h"

using namespace std;
int main()
{
	Shape* sh[3];
	int side, length, breadth, radius;
	cout << "Enter side of the Square\n";
	cin >> side;
	sh[0] = new Square(side, 0, 0);
	sh[0]->display();
	cout << "Enter length and breadth of Rectangle\n";
	cin >> length >> breadth;
	sh[1] = new Rectangle(length, breadth, 0, 0);
	sh[1]->display();
	cout << "Enter radius of Circle\n";
	cin >> radius;
	sh[2] = new Circle(radius, 0, 0);
	sh[2]->display();

	CommandManager* cmd = new CommandManager();
	Move* m1 = new Move(sh[0], 1, 2);
	cmd->invoke(m1);
	Move* m2 = new Move(sh[1], 3, 4);
	cmd->invoke(m2);
	cout << "\n\nAfter Moving......\nShapes at\n";
	for (int i = 0; i < 3; i++)
	{
		sh[i]->display();
	}

	Rotate* r1 = new Rotate(sh[1]);
	cmd->invoke(r1);
	Rotate* r2 = new Rotate(sh[2]);
	cmd->invoke(r2);
	cout << "\n\nAfter Rotating.....\nShapes at\n";
	for (int i = 0; i < 3; i++)
	{
		sh[i]->display();
	}

	Scale* s1 = new Scale(sh[0], 3);
	cmd->invoke(s1);
	Scale* s2 = new Scale(sh[2], 4);
	cmd->invoke(s2);
	Scale* s3 = new Scale(sh[1], 5);
	cmd->invoke(s3);
	cout << "\n\nAfter Scaling....\nShapes at\n";
	for (int i = 0; i < 3; i++)
	{
		sh[i]->display();
	}
	cout << "\n\n";
	cout << "After Undoing......\n";
	cmd->undoCommand();
	for (int i = 0; i < 3; i++)
	{
		sh[i]->display();
	}
	cout << "\n\n";
	cout << "After Undoing.....\n";
	cmd->undoCommand();
	for (int i = 0; i < 3; i++)
	{
		sh[i]->display();
	}
	cout << "\n\n";
	cout << "After Redoing\n";
	cmd->redoCommand();
	for (int i = 0; i < 3; i++)
	{
		sh[i]->display();
	}
	Move* m4 = new Move(sh[2], 6, 2);
	cmd->invoke(m4);
	cout << "\n\n";
	cout << "After Moving....\n Shapes at\n";
	for (int i = 0; i < 3; i++)
	{
		sh[i]->display();
	}
}


