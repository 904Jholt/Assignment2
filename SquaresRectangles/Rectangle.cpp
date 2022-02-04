#include<iostream>
#include "Rectangle.h"

using namespace std;

Rectangle::Rectangle()
{
	length = 1;
	width = 1;
}

Rectangle::Rectangle(double l, double w)
{
	setLength(l);
	setWidth(w);
}

void Rectangle::setLength(double l)
{
	length = l;
}

void Rectangle::setWidth(double w)
{
	width = w;
}

void Rectangle::DrawRectangle()
{
	int length = width;
	int row = 0;
	int col = 0;
	int symbol = (1, 2, 3);

	if (symbol == 1) {
		cout << "X";
		if (symbol == 2) {
			cout << "O";
				if (symbol == 3) {
					cout << "V";
				}
		}
	}

	while (row < 10) {
		cout << symbol;
		row++;
		while (col < 10) {
			cout << symbol;
			row++;
			if (row == 1 || row == 10 || col == 1 || col == 10) {
				cout << "*";
			}
			else{
				cout << " ";
			}
		}
	}

}
