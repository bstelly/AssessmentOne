#include "Dungeon.h"
#include <iostream>
#include <time.h>

void Dungeon::GenRooms()
{

}

Dungeon::Dungeon()
{
	mNumCols = 10;
	mNumRows = 10;
}

Dungeon::Dungeon(Player* player, int rows, int cols)
{
	mPlayer = player;
	mNumRows = rows;
	mNumCols = cols;
}

//int CheckPlayerPosition()
//{
//
//}