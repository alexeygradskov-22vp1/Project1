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
		if (a < 2 * r) throw InvalidLengthOfBase("Основание треугольника должно быть больше его диаметра");

	}
	void draw() override;
	void hide() override;
	class InvalidLengthOfBase : public std::exception {
	private:
		std::string message; 
	public:
		InvalidLengthOfBase(const std::string& msg) : message(msg) {}
		const char* what() const noexcept override {
			return message.c_str();
		}
	};
};
