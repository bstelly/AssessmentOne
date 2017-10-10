#pragma once

class Point2D
{
private:
	float mX;
	float mY;

public:
	Point2D();
	Point2D(float x, float y);
	Point2D operator + (const Point2D & other);
	Point2D operator - (const Point2D & other);
	float GetX();
	float GetY();
};