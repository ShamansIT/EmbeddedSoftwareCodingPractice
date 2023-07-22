#include <iostream>
#include "Window.h"

//in static memory
Window window12{};

int main()
{
	Window window { 5, 3, 10, 15 };

	window.Show();

	//create object from constructor with default parametrs
	Window window1(10, 5, 50);
	Window window2(4, 8);
	Window window3(30);
	Window window4;

	// on heap
	Window* window5 = new Window(0,0,5,5);

	delete window5;

	//array
	const int size = 3;
	Window arr[size] =
	{
		Window(3,4),
		Window(),
		Window(1,1,20,20)
	};

}