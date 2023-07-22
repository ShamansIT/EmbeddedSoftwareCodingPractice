#include <iostream>
#include "Window.h"

void Window::SetX(int x)
{
	if (x > 0)
		this->x = x;
}

void Window::SetY(int y)
{
	if (y > 0)
		this->y = y;
}

void Window::SetHeight(int height)
{
	if (height > 0)
		this->height = height;
}

void Window::SetWidth(int width)
{
	if (width > 0)
		this->width = width;
}

void Window::Show() const
{
	for (size_t i = 0; i < height; i++)
	{
		for (size_t j = 0; j < width; j++)
		{
			std::cout << "#";
		}
		std::cout << std::endl;
	}
}

Window::Window(int x, int y, int height, int width)
	: x(0), y(0), height(12), width(12) //initialization list
{
	SetX(x);
	SetY(y);
	SetHeight(height);
	SetWidth(width);
}