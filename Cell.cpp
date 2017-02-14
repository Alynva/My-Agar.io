#include "Cell.h"

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
