#pragma once
#include "Figure.h"

class Circle : public Figure
{
public:
	Circle(int x_, int y_, int r_) : Figure(x_, y_, r_) {}
	void draw() override;
	void hide() override;
};
