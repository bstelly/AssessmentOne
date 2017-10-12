#pragma once
#include "Point2D.h"
#include "MyString.h"

class Player
{
private:
	Point2D mPosition;
public:
	//Prototype: Player()
	//Arguments: None
	//Description: Creates a new instance of the player class
	//Precondition: none
	//Postcondition: A new instance of the player class is created
	//Protection Level: Public
	Player();

	//Prototype: void MovePlayer()
	//Arguments: None
	//Description: Moves the player by changing its position based on user input
	//Precondition: An instance of the player class must be created
	//Postcondition: The player has a new position
	//Protection Level: Pulic
	void MovePlayer();

	//Prototype: GetPosition()
	//Arguments: None
	//Description: Returns the position of the player
	//Precondition:  There must be an instance of the player class already created
	//Postcondition: Point2D GetPosition() now equals a Point2D
	//Protection Level: Public
	Point2D GetPosition();
};