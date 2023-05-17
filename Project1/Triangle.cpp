#include "Triangle.h"
#include <iostream>
#include "InvalidDataException.h"
using namespace std;

void Triangle::draw() 
{
	int l = (4 * r * r * r + a * a * r) / (a * a - 4 * r * r);
	int x1 = x - r;
	int y1 = y - a / 2;
	int x2 = x - r;
	int y2 = y + a / 2;
	int x3 = x + l;
	int y3 = y;
	POINT points[] = { {x1, y1}, {x2, y2}, {x3, y3} };
	HPEN pen;
	pen = CreatePen(PS_SOLID, 1, RGB(0, 0, 0));
	SelectObject(hdc, pen);
	HBRUSH brush;
	brush = CreateSolidBrush(RGB(238, 199, 19));
	SelectObject(hdc, brush);
	if (x1<0 || y1<0 || x2 <0 || y2 > h ||x3>w) {
		throw InvalidDataException("Фигура выходит за рамки окна!");
	}
	else
	{
		Polygon(hdc, points, 3);
	}
	
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


