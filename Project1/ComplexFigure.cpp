#include "ComplexFigure.h"

void ComplexFigure::draw()
{
	triangle->draw();
	circle->draw();
}

void ComplexFigure::hide()
{
	circle->hide();
	triangle->hide();
}

ComplexFigure::~ComplexFigure()
{
	delete circle;
	delete triangle;
}

void ComplexFigure::move(int x, int y)
{
	triangle->move(x, y);
	circle->move(x, y);
}
