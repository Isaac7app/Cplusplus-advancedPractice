
#ifndef ADVANCED_RECTANGLE_H
#define ADVANCED_RECTANGLE_H

#include <iostream>

using namespace std;


class Rectangle
{
public:
	Rectangle() = default;
	Rectangle(int width, int height);
	Rectangle(int width, int height, string color);
	void draw();
	int getArea();
	int getWidth();
	void setWidth(int width);
	int getHeight();
	void setHeight(int height);
private:
	int width;
	int height;
	string color;
};

#endif // !ADVANCED_RECTANGLE_H