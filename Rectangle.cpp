#include "Rectangle.h"
#include <iostream>

using namespace std;

Rectangle::Rectangle(int width, int height)
{
	objectCount++;
	cout << "Constructing a Rectangle" << endl;
	setWidth(width);
	setHeight(height);
}

Rectangle::Rectangle(int width, int height, string color) : Rectangle(width,height)
{
	cout << "constructing with a Rectangle color" << endl;
	this->color = color;
}

Rectangle::~Rectangle()
{
	cout << "Descructor is called";
}

void Rectangle::draw() const
{
	cout << "Drwaing a rectangle" << endl;
	cout << "Dimensions: " << width << ", " << height << endl;
}

int Rectangle::getArea() const
{
	return width * height;
}

int Rectangle::getWidth() const
{
	return width;
}

void Rectangle::setWidth(int width)
{
	if (width < 0)
		throw invalid_argument("width");
	this->width = width;

}

int Rectangle::getHeight() const
{
	return height;
}

void Rectangle::setHeight(int height)
{
	if (height < 0)
		throw invalid_argument("height");
	this->height = height;
}


int Rectangle::objectCount = 0;

int Rectangle::getObjectCount()
{
	return objectCount;
}
