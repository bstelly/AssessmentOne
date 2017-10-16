#include "Dungeon.h"
#include "Player.h"
#include "Point2D.h"
#include <time.h>	
#include <iostream>


void Dungeon::GenRooms()
{
	srand(time(NULL));
	int iter = 0;
	for (int row = 0; row < mNumRows; row++)
	{
		for (int col = 0; col < mNumCols; col++)
		{
			mRooms[iter] = Point2D(row, col);
			iter++;
		}
	}

	//Place pits in random rooms
	float randX;
	float randY;
	int numHazards = rand() % ((mNumCols * mNumRows) / 3);
	for (int iter = 0; iter < numHazards; iter++)
	{
		randX = rand() % mNumCols;
		randY = rand() % mNumRows;
		mHazard[iter].SetPosition(randX, randY);
	}

	//Place the wumpus in a random room
	randX = rand() % mNumCols;
	randY = rand() % mNumRows;
	mWumpus->SetPosition(randX, randY);
	
	//Place treasure in a random room deeper in the dungeon
	while (randY <= (mNumRows / 2))
	{
		randY = rand() % mNumRows;
	}
	randX = rand() % mNumCols;
	mGold->SetPosition(randX, randY);
} 
Dungeon::Dungeon()
{
	int rows = 10;
	int cols = 10;
	mNumRows = rows;
	mNumCols = cols;
	mHazard = new Hazard[rows * cols];
	mRooms = new Point2D[rows * cols];
	mWumpus = new Wumpus[rows * cols];
	mGold = new Treasure[rows * cols];
	GenRooms();
}

Dungeon::Dungeon(Player* player, int rows, int cols)
{
	mPlayer = player;
	mNumRows = rows;
	mNumCols = cols;
	mRooms = new Point2D[rows * cols];
	mHazard = new Hazard[rows * cols];
	mWumpus = new Wumpus[rows * cols];
	mGold = new Treasure[rows * cols];
	GenRooms();
}



int Dungeon::CheckPlayerPosition()							//return 0 if enter empty room
{															//return 1 if fall into a pit
	//Dungeon Boundaries									//return 2 if treasure's found
	Point2D wallOne(0, -1);
	Point2D wallTwo(0, mNumRows + 1);
	Point2D wallThree(mNumCols + 1, 0);
	Point2D wallFour(-1, 0);

	//If trying to go out of dungeon boundary, this loop brings player back a step.
	Point2D wallOneNewPos(0, 0);
	Point2D wallTwoNewPos(0, mNumRows);
	Point2D wallThreeNewPos(mNumCols, 0);
	Point2D wallFourNewPos(0, 0);
	
	//Check to see if player steps out of dungeon boundaries
	if (mPlayer->GetPosition() == wallOne || mPlayer->GetPosition() == wallTwo ||
		mPlayer->GetPosition() == wallThree || mPlayer->GetPosition() == wallFour)
	{
		std::cout << "You ran into a wall" << std::endl;
		if (mPlayer->GetPosition() == wallOne)
		{
			mPlayer->SetPosition(wallOneNewPos);
		}
		else if (mPlayer->GetPosition() == wallTwo)
		{
			mPlayer->SetPosition(wallTwoNewPos);
		}
		else if (mPlayer->GetPosition() == wallThree)
		{
			mPlayer->SetPosition(wallThreeNewPos);
		}
		else if (mPlayer->GetPosition() == wallFour)
		{
			mPlayer->SetPosition(wallFourNewPos);
		}
	}
	
	else if (mPlayer->GetPosition() == mHazard->GetPosition())	
	{
		std::cout << "You have fallen into a pit" << std::endl;
		return 1;
	}
	else
	{
		
		return 0;
	}
}