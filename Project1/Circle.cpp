#include "Circle.h"
#include <iostream>

void Circle::draw()
{
	HPEN pen;
	pen = CreatePen(PS_SOLID, 1, RGB(0, 0, 0));
	SelectObject(hdc, pen);
	HBRUSH brush;
	brush = CreateSolidBrush(RGB(238, 199, 19));
	SelectObject(hdc, brush);
	Ellipse(hdc, x - r, y - r, x + r, y + r);
}

void Circle::hide() 
{
	HPEN pen;
	pen = CreatePen(PS_SOLID, 3, RGB(255, 255, 255));
	SelectObject(hdc, pen);
	HBRUSH brush;
	brush = CreateSolidBrush(RGB(255, 255, 255));
	SelectObject(hdc, brush);
	Ellipse(hdc, x - r, y - r, x + r, y + r);
}

void Circle::move(int _x, int _y)
{
	this->hide();
	this->x = _x;
	this->y = _y;
	this->draw();
}

