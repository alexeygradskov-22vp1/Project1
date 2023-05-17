#include "Figure.h"

Figure::Figure(int x_, int y_, int r_)
{
	x = x_;
	y = y_;
	r = r_;
	hwnd = GetConsoleWindow();
	RECT r;
	GetClientRect(hwnd, &r);
	hdc = GetDC(hwnd);
	w = r.right;
	h = r.bottom;
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
