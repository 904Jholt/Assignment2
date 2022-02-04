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

void Rectangle::DrawRectangle() //member function to draw shape on screen.
{
	int row = 0;
	int col = 0;
	int choice = (4, 5, 6);

	if (choice == 4) {  //if statements to determine what symbol to print.
		cout << "X";
		if (choice == 5) {
			cout << "O";
				if (choice == 6) {
					cout << "V";
				}
		}
	}

	while (row < 10) {          //nested while looping to draw Rectangle.
		cout << choice;
		row++;
		while (col < 10) {
			cout << choice;
			row++;
			if (row == 1 || row == 10 || col == 1 || col == 10) {     //logical or operator to print inside shape.
				cout << "*";
			}
			else{
				cout << " ";
			}
		}
	}

}
