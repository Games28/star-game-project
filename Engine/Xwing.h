#pragma once
#include "Graphics.h"
#include "Keyboard.h"

class Xwing
{
public:
	void boundry();
	void DrawUp(Graphics& gfx);
	void DrawDown(Graphics& gfx);
	void DrawLeft(Graphics& gfx);
	void DrawRight(Graphics& gfx);
	void Update(Keyboard& kbd);
	int GetX()const;
	int GetY()const;
	int GetWidth() const;
	int GetHieght()const;
private:
	int x = 400;
	int y = 300;
	static constexpr int width = 50;
	static constexpr int height = 50;

};
