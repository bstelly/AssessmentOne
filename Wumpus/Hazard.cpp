#include "Hazard.h"
#include <time.h>

Hazard::Hazard()
{
	mPosition = Point2D();
}

void Hazard::SetPosition(float x, float y)
{
	Point2D position(x, y);
	mPosition = position;
}

Point2D Hazard::GetPosition()
{
	return mPosition;
}