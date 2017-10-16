#include "Treasure.h"

Treasure::Treasure()
{
	mPosition = Point2D();
}

void Treasure::SetPosition(float x, float y)
{
	Point2D position(x, y);
	mPosition = position;
}

Point2D Treasure::GetPosition()
{
	return mPosition;
}