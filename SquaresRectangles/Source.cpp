//Module 2: Programming Assignment 2
// Author: Jonathon Holt
//This is an object oriented program that asks the user to input variable to make a Square and Rectangle.
//The program calculates the area and perimeter of the shapes based on the users input variables.
//Two classes were created for each shape. Header and .cpp files for each class included in the program.
//If Else statement was created in Rectangle.h that exited the program if length=width(technically a square).
//I couldn't get the function to work. Resulted in weird return results.
//double used instead of int for numbers so that decimal numbers could be used as well as whole numbers.


#include <iostream>
#include <string>
#include <iomanip>
#include "Rectangle.h"//Rectangle class header file.
#include "Square.h"//Square class header file.

using namespace std;//included so that I didn't have to write standard namespace for every line of code.

int main()//
{
	double side = 1;//integer initialized to 1
	double length = 1;//integer initialized to 1
	double width = 1;//integer initialized to 1
	int choice;

	cout << "Let's make a Square!\n";
	cout << "Please enter the length of the side of your Square, the press ENTER\n";
	cin >> side;
	Square userSqr(side);
	cout << fixed;// included so that decimals are set to a fixed to specific location, regardless users input.
	cout << setprecision(2);//included so that the fixed location for decimals is 2 decimal places.
	cout << "The area of your Square = "<< userSqr.getArea() << endl;//displays result of stored function.
	cout << "The perimeter of your Square = " << userSqr.getPerimter() << endl;//displays result of stored function
	cout << "\nNow Let's make a Rectangle!\n";
	cout << "Please enter the length of your Rectangle, then press ENTER\n";
	cin >> length;
	cout << "Now enter the width of your Rectangle, then press Enter\n";
	cin >> width;
	Rectangle userRect(length, width);
	cout << fixed;
	cout << setprecision(2);
	cout<< "The area of your Rectangle = " << userRect.getArea() << endl;//stored function result
	cout << "The perimeter of your Rectangle = " << userRect.getPerimter() << endl;//stored function result
	cout << " /nPlease choose from shapes below"<<endl;
	
	do {
		cout << "1.Square 1" << endl << "2.Square 2" << endl << "3.Square 3" << endl << "4.Rectangle 4" << endl << "5.Rectangle 5" << endl << "6.Rectangle 6" << endl << "0.Exit this Application" << endl;
		cin >> choice;

		switch (choice)
		{
		case 0:
			return 0;
			break;
		case 1:
			cout << "U/n";
			break;
		case 2:
			cout << "Z/n";
			break;
		case 3:
			cout << "Q/n";
			break;
		case 4:
			cout << "X/n";
			break;
		case 5:
			cout << "O/n";
			break;
		case 6:
			cout << "V/n";
			break;
		}
	} while (choice!=choice);
	{
		cout << "Invalid";
	}
	
}