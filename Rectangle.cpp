#include "Rectangle.h"
#include <iostream>

using namespace std;

void Rectangle::draw() 
{
	cout << "Drwaing a rectangle" << endl;
	cout << "Dimensions: " << width << ", " << height << endl;
}

int Rectangle::getArea()
{
	return width * height;
}
