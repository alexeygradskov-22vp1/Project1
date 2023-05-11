#include "Triangle.h"
#include <iostream>
using namespace std;

void Triangle::draw() 
{
	int l = (4 * r * r * r + a * a * r) / (a * a - 4 * r * r);
	POINT points[] = { {x - r, y - a / 2}, {x - r, y + a / 2}, {x + l, y} };
	HPEN pen;
	pen = CreatePen(PS_SOLID, 1, RGB(0, 0, 0));
	SelectObject(hdc, pen);
	HBRUSH brush;
	brush = CreateSolidBrush(RGB(238, 199, 19));
	SelectObject(hdc, brush);
	Polygon(hdc, points, 3);
}

void Triangle::hide()
{
	int l = (4 * r * r * r + a * a * r) / (a * a - 4 * r * r);
	POINT points[] = { {x - r, y - a / 2}, {x - r, y + a / 2}, {x + l, y} };
	HPEN pen;
	pen = CreatePen(PS_SOLID, 3, RGB(255, 255, 255));
	SelectObject(hdc, pen);
	HBRUSH brush;
	brush = CreateSolidBrush(RGB(255, 255, 255));
	SelectObject(hdc, brush);
	Polygon(hdc, points, 3);
}

void Triangle::move(int _x, int _y)
{
	this->hide();
	this->x = _x;
	this->y = _y;
	this->draw();
}
