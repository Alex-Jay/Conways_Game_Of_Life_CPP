#include "stdafx.h"
#include "Utility.h"

namespace Utility
{
	// GotoXY and draw a character
	void Utility::GotoXY(int X, int Y, char icon)
	{
		HANDLE console;
		COORD CursorPosition;
		console = GetStdHandle(STD_OUTPUT_HANDLE);
		CursorPosition.X = X;
		CursorPosition.Y = Y;
		SetConsoleCursorPosition(console, CursorPosition);
		std::cout << icon;
	}

	// GotoXY and draw a string
	void Utility::GotoXY(int X, int Y, std::string str)
	{
		HANDLE console;
		COORD CursorPosition;
		console = GetStdHandle(STD_OUTPUT_HANDLE);
		CursorPosition.X = X;
		CursorPosition.Y = Y;
		SetConsoleCursorPosition(console, CursorPosition);
		std::cout << str;
	}

	// Set Console Size
	void Utility::SetConsoleSize(int height, int width)
	{
		HWND console = GetConsoleWindow();
		RECT r;
		GetWindowRect(console, &r); // Retrieves Consoles Dimensions
		MoveWindow(console, r.left, r.top, width, height, TRUE); // Resizes Console
	}

	//Clamp Double
	inline char Clamp(double n, double min, double max)
	{
		// Author: ronag
		// Source: https://codereview.stackexchange.com/questions/6502/fastest-way-to-clamp-an-integer-to-the-range-0-255

		if (n < min)
			return 0;
		else if (n > max)
			return max;
		return n;
	}
}