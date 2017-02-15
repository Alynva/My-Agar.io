#include "setConsoleColor.h"
#include <windows.h>

void setConsoleColor(int color) {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color); 
}
