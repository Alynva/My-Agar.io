#ifndef CELL
#define CELL

#include <iostream>
#include <windows.h>

using namespace std;

class Cell {
	private:
		int r; // Radious
		int const c; // Color
		COORD p; // Position
	
	public:
		Cell(COORD = {0, 0}, int = 1, int = 249);
		bool setR(int);
		int getR() const;
		int getC() const;
		bool setP(COORD);
		COORD getP() const;
		
	friend ostream & operator<<(ostream &, const Cell &);
};

#endif
