#pragma once
class Window
{
	public:
		// contructor with default parametrs
		Window(int x = 0, int y = 0, int height = 10, int width = 10);
		int GetX() const { return x; };
		int GetY() const { return y; };
		int GetHeight() const { return height; };
		int GetWidth() const { return width; };

		void SetX(int x);
		void SetY(int y);
		void SetHeight(int height);
		void SetWidth(int width);

		void Show() const;

	private:	
		int x, y;
		int height, width;
};
