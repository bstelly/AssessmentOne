#include "Wumpus.h"
#include <time.h>

Wumpus::Wumpus()
{
	mPosition = Point2D();
}

void Wumpus::SetPosition(float x, float y)
{
	Point2D position(x, y);
	mPosition = position;
}

Point2D Wumpus::GetPosition()
{
	return mPosition;
}