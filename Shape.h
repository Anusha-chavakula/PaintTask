#pragma once
class Shape
{
public:
	virtual void display();
	virtual void move(int, int);
	virtual void scale(int);
	virtual void unscale(int);
	virtual void rotate();
	virtual void unmove(int, int);
	virtual void unrotate();
};

