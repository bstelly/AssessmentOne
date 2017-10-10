#pragma once
#include "Point2D.h"
#include "MyString.h"

class Player
{
private:
	Point2D mPosition;
	MyString commands[];
public:
	Player();
	void MovePlayer();
	void Commands();
};