#pragma once
#include "Point2D.h"

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
	//Protection Level: Public
	void MovePlayer();

	//Prototype: GetPosition()
	//Arguments: None
	//Description: Returns the position of the player
	//Precondition:  There must be an instance of the player class already created
	//Postcondition: Point2D GetPosition() now equals a Point2D
	//Protection Level: Public
	Point2D GetPosition();

	//Prototype: void SetPosition(Point2D position)
	//Arguments: A Point2D
	//Description: Sets the players position
	//Precondition: There must be an instance of the player class already created
	//Postcondition: The player's mPosition is now changed
	//Protection Level: Public
	void SetPosition(Point2D position);

	//Prototype: void SetX_WhenBelowZero()
	//Arguments: None
	//Description: Resets the players position if their mX goes below 0
	//Precondition: There must be an instance of the player class already created
	//Postcondition: The player's mPosition is changed
	//Protection Level: Public
	void SetX_WhenBelowZero();
	
	//Prototype: void SetY_WhenBelowZero()
	//Arguments: None
	//Description: Resets the player's position if their mY goes below zero
	//Precondition: There must be an instance of the player class already created
	//Postcondition: The player's mPosition is changed
	//Protection Level: Public
	void SetY_WhenBelowZero();

	//Prototype: void SetX_WhenAboveMax()
	//Arguments: None
	//Description: Resets the player's position if their mX goes above the max number
	//Precondition: There must be an instance of the player class already created
	//Postcondition: The player's mPosition is changed
	//Protection Level: Public
	void SetX_WhenAboveMax();

	//Prototype: void SetY_WhenAboveMax()
	//Arguments: None
	//Description: Resets the player's position if their mY goes above the max number
	//Precondition: There must be an instance of the player class already created
	//Postcondition: The player's mPosition is changed
	//Protection Level: Public
	void SetY_WhenAboveMax();
};