#pragma once
#include <math.h>
#include "Figure.h"

class Triangle : public Figure
{
private:
	int a;
public:
	Triangle(int x, int y, int r, int a_) :Figure(x, y, r), a(a_)
	{
		if (a < 2 * r) throw Errors();

	}
	void draw() override;
	void hide() override;
	void move(int, int) override;
	class Errors {};
};
