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
		//const char * c = str.c_str();
		HANDLE console;
		COORD CursorPosition;
		console = GetStdHandle(STD_OUTPUT_HANDLE);
		CursorPosition.X = X;
		CursorPosition.Y = Y;
		SetConsoleCursorPosition(console, CursorPosition);
		//std::printf(c);
		std::cerr << str;
		std::cerr << std::flush;
	}

	// Set Console Size
	void Utility::SetConsoleSize(int height, int width)
	{
		HWND console = GetConsoleWindow();
		RECT r;
		GetWindowRect(console, &r); // Retrieves Consoles Dimensions
		MoveWindow(console, r.left, r.top, width, height, TRUE); // Resizes Console
	}
}