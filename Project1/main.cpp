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
		Circle circle(100, 200, 50);
		Triangle triangle(250, 250, 25, 1);
		ComplexFigure figure(200, 400, 60, 200);
		Queue container;
		container.enqueue(&circle);
		container.enqueue(&triangle);
		container.showAll();
		Sleep(2000);
		container.hideAll();
		figure.draw();
		Sleep(2000);
		figure.move(500, 500);
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
