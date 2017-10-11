#pragma once
#include "Point2D.h"
#include "MyString.h"

class Player
{
private:
	Point2D mPosition;
public:
	Player();
	void MovePlayer();
	Point2D GetPosition();
};