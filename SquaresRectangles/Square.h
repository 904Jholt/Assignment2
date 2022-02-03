#pragma once
#include <iostream>

using namespace std;

class Square
{
private:

	double side;//data member.

public:

	Square();//default constructor with initial value 0.
	Square(double side);

	void setSide(double) const;


	double getPerimter() const;//funtion that returns perimeter.
	double getArea() const;//function that returns area.

	
};