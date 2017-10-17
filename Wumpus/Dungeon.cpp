#include "Dungeon.h"
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
	mNumHazards = numHazards;
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
	while (mWumpus->GetPosition() == mHazard->GetPosition())
	{
		randX = rand() % mNumCols;
		randY = rand() % mNumRows;
		mWumpus->SetPosition(randX, randY);
	}

	//Place treasure in a random room deeper in the dungeon

	while (randY <= (mNumRows / 2))
	{
		randY = rand() % mNumRows;
	}
	randX = rand() % mNumCols;
	mGold->SetPosition(randX, randY);
	while (mGold->GetPosition() == mWumpus->GetPosition() && mGold->GetPosition() ==
		mHazard->GetPosition())
	{
		while (randY <= (mNumRows / 2))
		{
			randY = rand() % mNumRows;
		}
		randX = rand() % mNumCols;
		mGold->SetPosition(randX, randY);
	}

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



int Dungeon::CheckPlayerPosition()		//return 0 if enter empty room
{										//return 1 if fall in a pit
										//return 2 if caught by the wumpus
										//return 3 if treasure's found
	
	//If Statements to check if the player is within the dungeon boundaries
	if (mPlayer->GetPosition().GetX() < 0)
	{
		std::cout << "You ran into a wall" << std::endl;
		mPlayer->SetX_WhenBelowZero();
		return 0;
	}
	if (mPlayer->GetPosition().GetX() > mNumCols)
	{
		std::cout << "You ran into a wall" << std::endl;
		mPlayer->SetX_WhenAboveMax();
		return 0;
	}
	if (mPlayer->GetPosition().GetY() < 0)
	{
		std::cout << "You ran into a wall" << std::endl;
		mPlayer->SetY_WhenBelowZero();
		return 0;
	}
	if (mPlayer->GetPosition().GetY() > mNumRows)
	{
		std::cout << "You ran into a wall" << std::endl;
		mPlayer->SetY_WhenAboveMax();
		return 0;
	}

	//If statements to check if player is in a wumpus, pit or gold room
	if (mPlayer->GetPosition() == mHazard->GetPosition())
	{
		return 1;
	}
	else if (mPlayer->GetPosition() == mWumpus->GetPosition())
	{
		return 2;
	}
	else if (mPlayer->GetPosition() == mGold->GetPosition())
	{
		return 3;
	}
	else
	{
		
		return 0;
	}
}

void Dungeon::CheckForNeighbors()
{
	Point2D NeighborUp(0, 1);
	Point2D NeighborDown(0, -1);
	Point2D NeighborLeft(-1, 0);
	Point2D NeighborRight(1, 0);
	Point2D validNeighborPos[4] = {NeighborUp, NeighborRight, NeighborDown, NeighborLeft};
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < mNumHazards; j++)
		{
			if (mPlayer->GetPosition() + validNeighborPos[i] == mHazard[j].GetPosition())
			{
				std::cout << "You feel a cool breeze" << std::endl;
			}
		}
		if (mPlayer->GetPosition() + validNeighborPos[i] == mWumpus->GetPosition())
		{
			std::cout << "You smell a very stinky and unpleasant odor." << std::endl;
		}
		if (mPlayer->GetPosition() + validNeighborPos[i] == mGold->GetPosition())
		{
			std::cout << "Something glittering catches your eye." << std::endl;
		}
	}
}