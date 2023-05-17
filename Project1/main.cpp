#include "Triangle.h"
#include <iostream>
#include <stdio.h>
#include "ComplexFigure.h"
#include "Queue.h"
#include "InvalidDataException.h"

using namespace std;

const int not_used = system("color F0");

int main()
{
	try {
		SetConsoleTitle((LPCWSTR)L"22VP1_8_Figures");
		setlocale(LC_ALL, "Ru");
		Circle circle(100, 200, 50, RGB(238, 199, 19));
		Triangle triangle(250, 250, 25, 60, RGB(238, 199, 19));
		ComplexFigure figure(500, 200, 60, 200, RGB(238, 199, 19));
		Queue container;
		container.enqueue(&circle);
		container.enqueue(&triangle);
		container.enqueue(&figure);
		container.showAll();
		Sleep(2000);
		Sleep(2000);
		figure.move(100,100);
		Sleep(2000);
	}
	catch (Triangle::InvalidLengthOfBase& ex)
	{
		cerr << ex.what()<<endl;
		return 1;
	}

	catch (const InvalidDataException& ex)
	{
		cerr << ex.what()<<endl;
		return 1;
	}
}
