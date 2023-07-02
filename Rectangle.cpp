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

int Rectangle::getWidth()
{
	return width;
}

void Rectangle::setWidth(int width)
{
	if (width < 0)
		throw invalid_argument("width");
	this->width = width;

}

int Rectangle::getHeight()
{
	return height;
}

void Rectangle::setHeight(int height)
{
	if (height < 0)
		throw invalid_argument("height");
	this->height = height;
}
