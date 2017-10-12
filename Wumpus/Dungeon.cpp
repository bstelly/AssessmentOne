#include "Dungeon.h"
#include "Player.h"
#include <iostream>


void Dungeon::GenRooms()
{
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

Dungeon::Dungeon(int rows, int cols)
{

	mNumRows = rows;
	mNumCols = cols;
	mRooms = new Point2D[rows * cols];
	GenRooms();
}



int Dungeon::CheckPlayerPosition()				 //return 1 if fall in pit
{												 //return 0 if enter empty room

}