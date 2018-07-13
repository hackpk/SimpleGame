#include "Game.h"
#include "Rect.h"


Rect::Rect(int in_x, int in_y)
{
	x = in_x;
	y = in_y;
}

void Rect::Draw(Graphics & gfx) 
{
	gfx.DrawRect(x, y, dimension, dimension, c);
}

bool Rect::TestCollision(const Guy & guy) const
{
	const int rightguy = guy.GetX() + guy.GetWidth();
	const int rightpoo = x + dimension;
	const int bottomguy = guy.GetY() + guy.GetHeight();
	const int bottompoo = y + dimension;

	return (rightguy >= x &&
		rightpoo >= guy.GetX() &&
		guy.GetY() <= bottompoo &&
		bottomguy >= y);
	
}

void Rect::respawn(int in_x, int in_y)
{
	x = in_x;
	y = in_y;
}




