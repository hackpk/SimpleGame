#pragma once
#include "Graphics.h"
#include "Keyboard.h"
class Guy
{
public :
	void ClampScreen();
	void Draw(Graphics& gfx);
	void Update(const Keyboard& kbd);
	int GetX()const;
	int GetY()const;
    int GetWidth() const;
	int GetHeight() const;
private:
	int x = 200;
	int y = 300;
	static constexpr int Width = 20;
	static constexpr int Height = 20;
};
