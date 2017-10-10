#pragma once
#include "Player.h"
#include "Point2D.h"
#include "MyString.h"

class Dungeon
{
private:
	Point2D* mRooms;
	Player* mPlayer;
	int mNumCols;
	int mNumRows;
	void GenRooms();
public:
	Dungeon();
	Dungeon(Player* player, int rows, int cols);
	int CheckPlayerPosition();
};