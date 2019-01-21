#pragma once
#include "Xwing.h"
#include "Graphics.h"

class Tiefighter
{
	public:
		void Startup(int t_x, int t_y, int t_vx, int t_vy);
		void boundry();
		bool Isdestroyed(const Xwing& wing);
		void Draw(Graphics& gfx)const;
		void DrawExplode(Graphics& gfx);
		int isColliding()const;
		void WatchOut(const Tiefighter& tie);
private:
		int x;
		int y;
		int vx;
		int vy;
		static constexpr int width = 30;
		static constexpr int height = 30;
		bool Collision = false;


};
