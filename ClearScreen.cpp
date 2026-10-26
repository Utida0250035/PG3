#include "ClearScreen.h"

#include <iostream>


void ClearScreen() { std::cout << "\033[2J\033[H" << std::flush; }