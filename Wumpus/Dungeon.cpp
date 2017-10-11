#include "Dungeon.h"
#include "Player.h"
#include <iostream>
#include <time.h>


void Dungeon::GenRooms()
{
	srand(time(NULL));
	int roomType;
	int iter = 0;
	for (int row = 0; row < mNumRows; row++)
	{
		for (int col = 0; col < mNumCols; col++)
		{
			mRooms[iter] = Point2D(row, col);
			iter++;
		}
	}

} 



Dungeon::Dungeon()
{
	int rows = 10;
	int cols = 10;
	mNumRows = rows;
	mNumCols = cols;
	mRooms = new Point2D[rows * cols];
	GenRooms();
}

Dungeon::Dungeon(Player* player, int rows, int cols)
{
	mPlayer = player;
	mNumRows = rows;
	mNumCols = cols;
	mRooms = new Point2D[rows * cols];
	GenRooms();
}



int Dungeon::CheckPlayerPosition()
{
	Point2D playerPosition;
	playerPosition = mPlayer->GetPosition();
	if (playerPosition == mRooms[5])
	{
		std::cout << "Game Over" << std::endl;
		return 0;
	}
}