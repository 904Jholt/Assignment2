#pragma once
#include <iostream>
#include <string>

using namespace std;

class Square
{
private:

	double side;//data member.
	int choice;

public:

	Square();//default constructor with initial value 0.
	Square(double side);

	void setSide(double) const;
	void DrawSquare();


	double getPerimter() const;//funtion that returns perimeter.
	double getArea() const;//function that returns area.

	
};