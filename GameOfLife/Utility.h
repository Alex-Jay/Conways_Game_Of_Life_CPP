#pragma once
#include <Windows.h>
#include <string>
#include <iostream>
#include "Constants.h"
#include <random>

namespace Utility
{
	void GotoXY(int, int, char);
	void GotoXY(int, int, std::string);
	void SetConsoleSize(int, int);
	inline char Clamp(double, double, double);
}

