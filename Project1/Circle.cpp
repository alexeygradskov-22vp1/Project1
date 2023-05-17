#include "Circle.h"
#include <iostream>
#include "InvalidDataException.h"

void Circle::draw()
{
	HPEN pen;
	pen = CreatePen(PS_SOLID, 1, RGB(0, 0, 0));
	SelectObject(hdc, pen);
	HBRUSH brush;
	brush = CreateSolidBrush(RGB(238, 199, 19));
	SelectObject(hdc, brush);
	int x1 = x - r;
	int y1 = y - r;
	int x2 = x + r;
	int y2 = y + r;
	if (x1<0||y1<0||x2 > w || y2 > h) {
		throw InvalidDataException("Фигура выходит за рамки окна!");
	}
	else
	{
		Ellipse(hdc, x1, y1, x2, y2);
	}
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

