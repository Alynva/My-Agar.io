#include "goToXY.h"

bool goToXY(COORD pos) {
	return SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos); 
}
