#pragma once
#include<iostream>
#include <windows.h>
#include <windowsx.h>

class Figure 
{
protected:
	int x, y, r;
	int w, h;
	COLORREF color;
	HWND hwnd;
	HDC hdc;
public:
	Figure(int x_ = 0, int y_ = 0, int r_ = 0 , COLORREF _color=0);
	virtual void draw() = 0; 
	virtual void hide() = 0; 
	virtual void move(int, int); 
	~Figure();
};
