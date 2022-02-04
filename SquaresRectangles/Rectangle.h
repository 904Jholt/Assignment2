#pragma once
#include<iostream>

using namespace std;

class Rectangle
{
private:
	double length;//data member
	double width;//data member

public:
	Rectangle();//default constructor with initial value 1.
	Rectangle(double l, double w);//constructor with two parameters.

	void setLength(double);////function that if l=w program ends because shape is a square not rectangle.
	void setWidth(double);//function that if w=l program ends because shape is a square not rectangle.
	void DrawRectangle();

	double getLength() const {//function that returns length.

		return length;
	}
	double getWidth() const {//function that returns width.

		return width;
	}
	double getArea() const {//function that returns area.
		
		return length * width;
	}
	double getPerimter() const {//function that returns perimeter.

		return (length * 2) + (width * 2);
	}
};

