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

void Square::DrawSquare()
{
	int row = 0; 
	int col = 0;
	int symbol = (1, 2, 3);

		if (symbol == 1) { //if statements to determine what symbol is used to draw.
			cout << "W";
			if (symbol == 2) {
				cout << "D";
				if (symbol == 3) {
					cout << "U";
				}
			}
	}

	for (int r = 0, r < row; r++) {  //nested for loop that should draw square on screen.
		for (int c = 0, c < col; c++) {
			cout << symbol;
			if (row == 1 || row == 10 || col == 1 || col == 10) {     //logical or operator to print inside shape.
				cout << "*";
			}
			else {
				cout << " ";
		}
		
	}
}

double Square::getPerimter() const
{
	return side*4;
}

double Square::getArea() const
{
	return pow(side,2);
}


