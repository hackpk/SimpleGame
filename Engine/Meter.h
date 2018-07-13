#pragma once
#include "Graphics.h"

class Meter
{
public:
	Meter(int in_x, int in_y)
	{
		x = in_x;
		y = in_y;

	}
	void IncreseLevel()
	{
		++level;
	}
	int GetLevel() {
		return level;
	}
	void DrawMeter(Graphics& gfx)
	{
		gfx.DrawRect(x, y, level * scale, grath, c);
	}
private:
	static constexpr Color c = Colors::Red;
	static constexpr int grath = 12;
	static constexpr int scale = 4;
	int level = 0;
	int x;
	int y;
};

