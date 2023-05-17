#pragma once
#include "Figure.h"
#include "Triangle.h"
#include "Circle.h"

class ComplexFigure : public Figure
{
private:
	Circle* circle;
	Triangle* triangle;
public:
	ComplexFigure(int x, int y, int r, int a, COLORREF color)
		:Figure(x, y, r,color), circle(new Circle(x, y, r, color)),
		triangle(new Triangle(x, y, r, a, color)) {}
	void draw() override;
	void hide() override;
	void move(int, int) override;
	~ComplexFigure();
};
