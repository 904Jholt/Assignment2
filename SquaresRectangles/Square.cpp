#include "Square.h"
#include <iostream>

using namespace std;

Square::Square()
{
	side = 0;
}

Square::Square(double s)
{
	side = s;
}

void Square::setSide(double s) const
{
	s = s;
}

double Square::getPerimter() const
{
	return side*4;
}

double Square::getArea() const
{
	return pow(side,2);
}


