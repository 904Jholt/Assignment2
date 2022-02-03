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

void Rectangle::DrawRectangle(double l, double w)
{
	if (symbol == 1) {
		cout << "O";
	}
	else {
		if (symbol == 2) {
			cout << "X";
		}
		else {
			if (symbol == 3) {
				cout << "$";
			}
			else {
				if (symbol == 4) {
					cout << "@";
				}
				else {
					if (symbol == 5) {
						cout << "#";
					}
					else {
						if (symbol == 6) {
							cout << "V";
						}
					}
				}
			}
		}
	}

	while (l < 10) {
		cout << symbol;
		l++;
		while (w < 10) {
			cout << symbol;
			w++;
			if (l == 1 || l == 10 || w == 1 || w == 10) {
				cout << "*";
			}
			else{
				cout << " ";
			}
		}
	}

}

void Rectangle::DrawRectangle()
{
}
