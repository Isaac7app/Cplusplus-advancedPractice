
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
	~Rectangle();

	void draw() const;
	int getArea() const;
	int getWidth() const;
	int getHeight() const;

	void setWidth(int width);
	void setHeight(int height);

	static int getObjectCount();


private:
	int width = 0;
	int height = 0;
	string color;

	static int objectCount;
};

#endif // !ADVANCED_RECTANGLE_H