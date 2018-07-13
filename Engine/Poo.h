#pragma once
#include "Guy.h"
#include "Graphics.h"
class Poo
{
public :
	void Init(int in_x, int in_y, int in_vx, int in_vy);
	void Update();
	bool IsColliding(const Guy& guy) const;
	void Draw(Graphics& gfx) const;

private:
	int x;
	int y;
	int vx;
	int vy;
	static constexpr int Width = 24;
	static constexpr int Height = 24;
	bool isEaten = false;
	bool Intialized = false;
};
