#include "Dungeon.h"
#include <iostream>
#include <time.h>

void Dungeon::GenRooms()
{

}

Dungeon::Dungeon()
{
	int rows = 10;
	int cols = 10;
	mRooms = new Point2D[rows * cols];
	GenRooms();

}

Dungeon::Dungeon(Player* player, int rows, int cols)
{
	mNumRows = rows;
	mNumCols = cols;

}

//int CheckPlayerPosition()
//{
//
//}