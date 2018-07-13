#pragma once
#include "Graphics.h"
#include "Guy.h"

class Rect{
	
public:
	Rect(int in_x, int in_y);
	void Draw(Graphics& gfx);
	bool TestCollision(const Guy& guy) const;
	void respawn(int in_x,int in_y);
	void Update()
	{
		if (isColorIncresing)
		{
			if (c.GetR() >= 253)
			{
				isColorIncresing = false;
			}
			else
			{
				c = Color(c.GetR() + 2, c.GetG() + 4, c.GetB() + 4);
			}
		}
		else
		{
			if (c.GetR() <= 127)
			{
				isColorIncresing = true;
			}
			else
			{
				c = Color(c.GetR() - 2, c.GetG() - 4, c.GetB() - 4);
			}
		}
	}
private:
	static constexpr int dimension = 20;
	Color c = {127,0,0};
	bool isColorIncresing = true;
	int x;
	int y;
};