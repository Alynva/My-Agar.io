#include "Cell.h"
#include <Math.h>
#include "goToXY.h"
#include "setConsoleColor.h"
#include "getConsoleColor.h"

#define PI 3.14159265

Cell::Cell(COORD position, int radious, int color):c(color) {
	this->setP(position);
	this->setR(radious);
}

bool Cell::setR(int radious) {
	if (radious > 0)
		this->r = radious;
	else
		return false;
	return true;
}
int Cell::getR() const {
	return this->r;
}

int Cell::getC() const {
	return this->c;
}

bool Cell::setP(COORD position) {
	if (position.X >= 0 && position.Y >= 0)
		this->p = position;
	else
		return false;
	return true;
}
COORD Cell::getP() const {
	return this->p;
}

ostream & operator<<(ostream & output, const Cell & obj) {
	short oldColor;
	getConsoleColor(oldColor);
	
	goToXY(obj.getP());
	setConsoleColor(((oldColor / 15) * 15) + obj.getC());
	
	for (int i = 0; i < 360; i++) {
		if (goToXY({
			obj.getP().X + (cos(i*PI/180) * obj.getR()),
			obj.getP().Y + (sin(i*PI/180) * obj.getR())
		}))
			output << "@";
	}
	
	setConsoleColor(oldColor);
	return output;
}
