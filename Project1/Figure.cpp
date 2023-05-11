#include "Figure.h"

Figure::Figure(int x_, int y_, int r_)
{
	x = x_;
	y = y_;
	r = r_;
	hwnd = GetConsoleWindow();
	hdc = GetDC(hwnd);
}



void Figure::move(int new_x, int new_y)
{
	hide();
	x = new_x;
	y = new_y;
	draw();
}

Figure::~Figure()
{
	ReleaseDC(hwnd, hdc);
}
