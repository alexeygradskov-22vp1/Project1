#include "Triangle.h"
#include <iostream>
#include <stdio.h>
#include "ComplexFigure.h"
#include <deque>

using namespace std;

const int not_used = system("color F0");

int main()
{

	try {
		SetConsoleTitle((LPCWSTR)L"22VP1_8_Figures");
		setlocale(LC_ALL, "Ru");
		Circle circle(100, 200, 50);
		Triangle triangle(250, 250, 25, 60);
		ComplexFigure figure(200, 400, 60, 200);
		std::deque<Figure*> figures;
		figures.push_back(&circle);
		figures.push_back(&triangle);
		for (int i = 0; i < figures.size(); i++)
		{
			figures[i]->draw();
		}
		Sleep(2000);
		circle.hide();
		Sleep(2000);
		triangle.draw();
		Sleep(2000);
		triangle.hide();
		Sleep(2000);
		circle.move(200, 300);
		figure.draw();
		Sleep(2000);
		figure.move(10,10);
	}
	catch (Triangle::Errors)
	{
		cout << "Основание треугольника должно быть больше, чем его диаметр!\n";
		return 1;
	}
}
