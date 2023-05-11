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
	ComplexFigure(int x, int y, int r, int a) :Figure(x, y, r), circle(new Circle(x, y, r)), triangle(new Triangle(x, y, r, a)) {}
	void draw() override;
	void hide() override;
	void move(int, int) override;
	~ComplexFigure();
};
