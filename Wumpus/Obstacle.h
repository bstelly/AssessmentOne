#pragma once
#include "Dungeon.h"
#include "Player.h"
#include "Point2D.h"


class Obstacle
{
private:
	Point2D* mPit;
	Point2D* mWumpus;
	Point2D* mGold;
};