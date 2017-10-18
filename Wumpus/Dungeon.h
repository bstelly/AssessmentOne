#pragma once
#include "Player.h"
#include "Hazard.h"
#include "Wumpus.h"
#include "Treasure.h"

class Dungeon
{
private:
	Point2D* mRooms;
	Player* mPlayer;
	Hazard* mHazard;
	Wumpus* mWumpus;
	Treasure* mGold;
	int mNumCols;
	int mNumRows;
	int mNumHazards;

	//Prototype: void GenRooms()
	//Arguments: None
	//Description: Creates the rooms in the dungeon
	//Precondition: There must be an instance of the dungeon class created
	//Postcondition: The dungeon now has rooms of type Point2D
	//Protection Level: Private
	void GenRooms();
public:
	//Prototype: Dungeon()
	//Arguments: None
	//Description: Creates a new instance of the dungeon class
	//Precondition: None
	//Postcondition: A new instance of the dungeon class is created
	//Protection Level: Public
	Dungeon();

	//Prototype: Dungeon(Player* player, int rows, int cols)
	//Arguments: two intergers
	//Description:	Creates a new instance of the dungeon class based on the arguments
	//				passed in
	//Precondition: None
	//Postcondition: A new instance of the dungeon class is created
	//Protection Level: Public
	Dungeon(Player* player, int rows, int cols);

	//Prototype: int CheckPlayerPosition()
	//Arguments: None
	//Description: Checks to see what room the player is in
	//Precondition: An instance of the player and dungeon classes must be created
	//Postcondition: returns an interger that corresponds with player status 
	//Protection Level: Public
	int CheckPlayerPosition();

	//Prototype: void CheckForNeighbors()
	//Arguments: none
	//Description: Checks to see what rooms are around the player
	//Precondition: There must be a dungeon with a player assigned to it along with treasure, wumpus, and pit rooms
	//PostCondition: a message is outputted to the console
	//Protection Level: Public
	void CheckForNeighbors();

};