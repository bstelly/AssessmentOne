#include "Hazard.h"
#include <time.h>

Hazard::Hazard()
{
	mPosition = new Point2D();
}

void Hazard::SetPosition(Point2D* position)
{
	mPosition = position;
}

Point2D GetPosition()
{
	return mPosition;
}