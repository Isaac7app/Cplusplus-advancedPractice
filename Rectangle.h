
#ifndef ADVANCED_RECTANGLE_H
#define ADVANCED_RECTANGLE_H


class Rectangle
{
public:
	Rectangle() = default;
	Rectangle(int width, int height);
	void draw();
	int getArea();
	int getWidth();
	void setWidth(int width);
	int getHeight();
	void setHeight(int height);
private:
	int width;
	int height;
};

#endif // !ADVANCED_RECTANGLE_H