#include "Point2D.h"

Point2D::Point2D()
{
	mX = 0;
	mY = 0;
}

Point2D::Point2D(float x, float y)
{
	mX = x;
	mY = y;
}

Point2D Point2D::operator + (const Point2D & other)
{
	Point2D temp;
	temp.mX = mX + other.mX;
	temp.mY = mY + other.mY;
	return temp;
}

Point2D Point2D::operator - (const Point2D & other)
{
	Point2D temp;
	temp.mX = mX - other.mX;
	temp.mY = mY - other.mY;
	return temp;
}

bool Point2D::operator == (const Point2D & other)
{
	if (mX == other.mX && mY == other.mY)
	{
		return true;
	}
	else
	{
		return false;
	}
}

float Point2D::GetX()
{
	return mX;
}

float Point2D::GetY()
{
	return mY;
}
