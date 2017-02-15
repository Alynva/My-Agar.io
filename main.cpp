#include "Cell.h"
#include "goToXY.h"
#include "setConsoleColor.h"

using namespace std;

int main() {
	int i, j, k;
	int const fundo = 15;
	
	CONSOLE_SCREEN_BUFFER_INFO csbi;
    GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);
	COORD maxOnScreen {csbi.srWindow.Right - csbi.srWindow.Left, csbi.srWindow.Bottom - csbi.srWindow.Top};
	
	setConsoleColor(fundo * 16);
	system("cls");
	
	Cell me({maxOnScreen.X / 2, maxOnScreen.Y / 2}, 5, 10);
	do {
		system("cls");
		cout << me;
		me.setR(me.getR()+1);
		Sleep(100);
	} while (me.getR() <= maxOnScreen.X / 2 && me.getR() <= maxOnScreen.Y / 2);
	
	goToXY({0, maxOnScreen.Y});
	system("pause");
	
	return 7;
}
