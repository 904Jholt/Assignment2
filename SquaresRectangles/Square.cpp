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

void Square::DrawSquare()//member function thats called from object.
{ 
	int choice=(1,2,3);

		if (choice == 1) { //if statements to determine what symbol is used to draw.
			cout << "W";
		 if (choice == 2) {
				cout << "D";
		  if (choice == 3) {
				 cout << "U";
				}
			}
	 }

		for (int row = 0; row < 10; row++) {  //nested for loop that should draw square on screen.
			for (int col = 0; col < 10; col++) {
			cout << choice;
			if (row == 1 || row == 10 || col == 1 || col == 10) {
				cout << "*";
			}
			else {
				cout << " ";
			}
			
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


